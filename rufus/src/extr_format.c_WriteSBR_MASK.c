
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int SectorSize; int SectorsPerTrack; } ;
struct TYPE_6__ {scalar_t__ has_grub2; scalar_t__ has_grub4dos; } ;
struct TYPE_5__ {char* _handle; int member_0; } ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef TYPE_1__ FAKE_FD ;
typedef int DWORD ;
typedef int BOOL ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (int ,int ,int ,char*,int*,int) ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,int,unsigned char*,int ) ;

__attribute__((used)) static BOOL FUNC_9(HANDLE VAR_16)
{

 DWORD VAR_17, VAR_18, VAR_19 = 0x200;
 int VAR_20, VAR_21 = VAR_10;
 unsigned char* VAR_22 = ((void*)0);
 FAKE_FD VAR_23 = { 0 };
 FILE* VAR_24 = (FILE*)&VAR_23;

 if (VAR_15 == VAR_6)
  return VAR_8;

 VAR_23._handle = (char*)VAR_16;
 FUNC_6(VAR_7.SectorSize);

 VAR_18 = FUNC_3(VAR_2) ?
  (DWORD)(VAR_7.SectorsPerTrack * VAR_7.SectorSize) : 1*VAR_5;
 VAR_18 -= VAR_19;

 if ((VAR_10 == VAR_0) && (!FUNC_1(VAR_14))) {
  if (VAR_14.has_grub4dos)
   VAR_21 = 128;
  if (VAR_14.has_grub2)
   VAR_21 = 129;
 }

 switch (VAR_21) {
 case 128:
  FUNC_7("Writing Grub4Dos SBR");
  VAR_22 = FUNC_0(VAR_13, FUNC_4(VAR_4), VAR_9, "grldr.mbr", &VAR_17, VAR_1);
  if ((VAR_22 == ((void*)0)) || (VAR_17 <= VAR_19)) {
   FUNC_7("grldr.mbr is either not present or too small");
   return VAR_1;
  }
  VAR_22 = &VAR_22[VAR_19];
  VAR_17 -= VAR_19;
  break;
 case 129:
  if (VAR_11 != ((void*)0)) {
   FUNC_7("Writing Grub 2.0 SBR (from download) %s",
    FUNC_2(VAR_11, VAR_12)?"✓":"✗");
   VAR_22 = VAR_11;
   VAR_17 = (DWORD)VAR_12;
  } else {
   FUNC_7("Writing Grub 2.0 SBR (from embedded)");
   VAR_22 = FUNC_0(VAR_13, FUNC_4(VAR_3), VAR_9, "core.img", &VAR_17, VAR_1);
   if (VAR_22 == ((void*)0)) {
    FUNC_7("Could not access core.img");
    return VAR_1;
   }
  }
  break;
 default:

  return VAR_8;
 }

 if (VAR_17 > VAR_18) {
  FUNC_7("  SBR size is too large - You may need to uncheck 'Add fixes for old BIOSes'.");
  return VAR_1;
 }
 VAR_20 = FUNC_8(VAR_24, VAR_19, VAR_22, (uint64_t)VAR_17);
 FUNC_5(VAR_11);
 return (VAR_20 != 0);
}
