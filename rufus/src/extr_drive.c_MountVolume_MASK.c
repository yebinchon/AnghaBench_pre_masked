
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mounted_letter ;
typedef int mounted_guid ;
typedef int DWORD ;
typedef int BOOL ;


 int DeleteVolumeMountPointA (char*) ;
 scalar_t__ ERROR_DIR_NOT_EMPTY ;
 int FALSE ;
 scalar_t__ GetLastError () ;
 scalar_t__ GetVolumeNameForVolumeMountPointA (char*,char*,int) ;
 scalar_t__ GetVolumePathNamesForVolumeNameA (char*,char*,int,int*) ;
 scalar_t__ SetVolumeMountPointA (char*,char*) ;
 int TRUE ;
 char WindowsErrorString () ;
 int groot_len ;
 int groot_name ;
 scalar_t__ safe_strcmp (char*,char*) ;
 scalar_t__ strncmp (char*,int ,int ) ;
 int uprintf (char*,...) ;

BOOL MountVolume(char* drive_name, char *volume_name)
{
 char mounted_guid[52];
 char mounted_letter[27] = { 0 };
 DWORD size;

 if ((drive_name == ((void*)0)) || (volume_name == ((void*)0)) || (drive_name[0] == '?') ||
  (strncmp(volume_name, groot_name, groot_len) == 0))
  return FALSE;



 if ( (GetVolumePathNamesForVolumeNameA(volume_name, mounted_letter, sizeof(mounted_letter), &size))
   && (size > 1) && (mounted_letter[0] != drive_name[0]) ) {
  uprintf("%s is already mounted as %C: instead of %C: - Will now use this target instead...",
   volume_name, mounted_letter[0], drive_name[0]);
  drive_name[0] = mounted_letter[0];
  return TRUE;
 }

 if (!SetVolumeMountPointA(drive_name, volume_name)) {
  if (GetLastError() == ERROR_DIR_NOT_EMPTY) {
   if (!GetVolumeNameForVolumeMountPointA(drive_name, mounted_guid, sizeof(mounted_guid))) {
    uprintf("%s is already mounted, but volume GUID could not be checked: %s",
     drive_name, WindowsErrorString());
   } else if (safe_strcmp(volume_name, mounted_guid) != 0) {
    uprintf("%s is mounted, but volume GUID doesn't match:\r\n  expected %s, got %s",
     drive_name, volume_name, mounted_guid);
   } else {
    uprintf("%s is already mounted as %C:", volume_name, drive_name[0]);
    return TRUE;
   }
   uprintf("Retrying after dismount...");
   if (!DeleteVolumeMountPointA(drive_name))
    uprintf("Warning: Could not delete volume mountpoint: %s", WindowsErrorString());
   if (SetVolumeMountPointA(drive_name, volume_name))
    return TRUE;
   if ((GetLastError() == ERROR_DIR_NOT_EMPTY) &&
    GetVolumeNameForVolumeMountPointA(drive_name, mounted_guid, sizeof(mounted_guid)) &&
    (safe_strcmp(volume_name, mounted_guid) == 0)) {
    uprintf("%s was remounted as %C: (second time lucky!)", volume_name, drive_name[0]);
    return TRUE;
   }
  }
  return FALSE;
 }
 return TRUE;
}
