
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int NumberOfDiskExtents; TYPE_1__* Extents; scalar_t__ DeviceNumber; } ;
typedef TYPE_2__ VOLUME_DISK_EXTENTS_REDEF ;
struct TYPE_5__ {scalar_t__ DiskNumber; } ;
typedef TYPE_2__ STORAGE_DEVICE_NUMBER_REDEF ;
typedef int HANDLE ;
typedef int DiskExtents ;
typedef int DeviceNumber ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ,int *,int ,TYPE_2__*,int,scalar_t__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,...) ;

int FUNC_3(HANDLE VAR_3, char* VAR_4)
{
 STORAGE_DEVICE_NUMBER_REDEF VAR_5;
 VOLUME_DISK_EXTENTS_REDEF VAR_6;
 DWORD VAR_7;
 int VAR_8 = -1;

 if (!FUNC_0(VAR_3, VAR_1, ((void*)0), 0,
  &VAR_6, sizeof(VAR_6), &VAR_7, ((void*)0)) || (VAR_7 <= 0) || (VAR_6.NumberOfDiskExtents < 1) ) {

  if(!FUNC_0(VAR_3, VAR_0, ((void*)0), 0,
   &VAR_5, sizeof(VAR_5), &VAR_7, ((void*)0) ) || (VAR_7 <= 0)) {
   FUNC_2("Could not get device number for device %s: %s", VAR_4, FUNC_1());
   return -1;
  }
  VAR_8 = (int)VAR_5.DeviceNumber;
 } else if (VAR_6.NumberOfDiskExtents >= 2) {
  FUNC_2("Ignoring drive '%s' as it spans multiple disks (RAID?)", VAR_4);
  return -1;
 } else {
  VAR_8 = (int)VAR_6.Extents[0].DiskNumber;
 }
 if (VAR_8 >= VAR_2) {
  FUNC_2("Device Number for device %s is too big (%d) - ignoring device", VAR_4, VAR_8);
  return -1;
 }
 return VAR_8;
}
