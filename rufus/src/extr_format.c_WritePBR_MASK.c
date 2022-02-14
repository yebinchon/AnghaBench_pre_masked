
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int SectorSize; } ;
struct TYPE_3__ {char* _handle; int _offset; int member_0; } ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef TYPE_1__ FAKE_FD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 () ;
 int VAR_12 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char const*,...) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static BOOL FUNC_22(HANDLE VAR_13)
{
 int VAR_14;
 FAKE_FD VAR_15 = { 0 };
 FILE* VAR_16 = (FILE*)&VAR_15;
 const char* VAR_17 = "Using %s %s partition boot record";

 VAR_15._handle = (char*)VAR_13;
 FUNC_8(VAR_8.SectorSize);

 switch (VAR_10) {
 case 130:
  FUNC_9(VAR_17, FUNC_4(), "FAT16");
  if (!FUNC_5(VAR_16)) {
   FUNC_9("New volume does not have a FAT16 boot sector - aborting");
   break;
  }
  FUNC_9("Confirmed new volume has a FAT16 boot sector");
  if (VAR_11 == VAR_0) {
   if (!FUNC_11(VAR_16, 0)) break;
  } else if (VAR_11 == VAR_2) {
   if (!FUNC_12(VAR_16, 0)) break;
  } else if ((VAR_11 == VAR_1) && FUNC_2(VAR_12)) {
   FUNC_9("FAT16 is not supported for KolibriOS\n"); break;
  } else {
   if (!FUNC_10(VAR_16, 0)) break;
  }

  if (!FUNC_20(VAR_16))
   break;
  return VAR_9;
 case 129:
  FUNC_9(VAR_17, FUNC_4(), "FAT32");
  for (VAR_14=0; VAR_14<2; VAR_14++) {
   if (!FUNC_6(VAR_16)) {
    FUNC_9("New volume does not have a %s FAT32 boot sector - aborting\n", VAR_14?"secondary":"primary");
    break;
   }
   FUNC_9("Confirmed new volume has a %s FAT32 boot sector\n", VAR_14?"secondary":"primary");
   FUNC_9("Setting %s FAT32 boot sector for boot...\n", VAR_14?"secondary":"primary");
   if (VAR_11 == VAR_0) {
    if (!FUNC_14(VAR_16, 0)) break;
   } else if (VAR_11 == VAR_2) {
    if (!FUNC_18(VAR_16, 0)) break;
   } else if ((VAR_11 == VAR_1) && FUNC_2(VAR_12)) {
    if (!FUNC_15(VAR_16, 0)) break;
   } else if ((VAR_11 == VAR_1) && FUNC_1(VAR_12)) {
    if (!FUNC_17(VAR_16, 0)) break;
   } else if ((VAR_11 == VAR_1) && FUNC_3(VAR_12)) {
    if (!FUNC_16(VAR_16, 0)) break;
   } else {
    if (!FUNC_13(VAR_16, 0)) break;
   }

   if (!FUNC_21(VAR_16))
    break;
   VAR_15._offset += 6 * VAR_8.SectorSize;
  }
  return VAR_9;
 case 128:
  FUNC_9(VAR_17, FUNC_4(), "NTFS");
  if (!FUNC_7(VAR_16)) {
   FUNC_9("New volume does not have an NTFS boot sector - aborting\n");
   break;
  }
  FUNC_9("Confirmed new volume has an NTFS boot sector\n");
  if (!FUNC_19(VAR_16)) break;



  return VAR_9;
 default:
  FUNC_9("Unsupported FS for FS BR processing - aborting\n");
  break;
 }
 VAR_7 = VAR_3|FUNC_0(VAR_5)|VAR_4;
 return VAR_6;
}
