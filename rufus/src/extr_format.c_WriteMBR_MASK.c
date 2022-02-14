
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int SectorSize; } ;
struct TYPE_9__ {int uses_minint; scalar_t__ has_grub4dos; scalar_t__ has_grub2; } ;
struct TYPE_8__ {char* _handle; int member_0; } ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef TYPE_1__ FAKE_FD ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int *,int ,int *,int ,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;


 int VAR_14 ;
 scalar_t__ FUNC_4 (TYPE_2__) ;
 scalar_t__ FUNC_5 (TYPE_2__) ;
 scalar_t__ FUNC_6 (TYPE_2__) ;
 scalar_t__ FUNC_7 (TYPE_2__) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_17 ;
 TYPE_3__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 char* FUNC_10 () ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_2__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_12 (scalar_t__,int,int ,int,unsigned char*) ;
 int FUNC_13 (unsigned char*) ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_28 ;
 int FUNC_15 (char const*,...) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (scalar_t__,int,int ,int,unsigned char*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static BOOL FUNC_26(HANDLE VAR_29)
{
 BOOL VAR_30 = VAR_13;
 DWORD VAR_31;
 unsigned char* VAR_32 = ((void*)0);
 FAKE_FD VAR_33 = { 0 };
 FILE* VAR_34 = (FILE*)&VAR_33;
 const char* VAR_35 = "Using %s MBR";



 if (VAR_18.SectorSize < 512)
  goto out;

 if (VAR_27 == VAR_17) {

  VAR_33._handle = (char*)VAR_29;
  FUNC_14(VAR_18.SectorSize);
  FUNC_15(VAR_35, "Rufus protective");
  VAR_30 = FUNC_20(VAR_34);
  goto notify;
 }



 VAR_32 = (unsigned char*)FUNC_11(VAR_18.SectorSize, 16);
 if (VAR_32 == ((void*)0)) {
  FUNC_15("Could not allocate memory for MBR");
  VAR_14 = VAR_10|FUNC_3(VAR_12)|VAR_8;
  goto out;
 }

 if (!FUNC_12(VAR_29, VAR_18.SectorSize, 0, 1, VAR_32)) {
  FUNC_15("Could not read MBR\n");
  VAR_14 = VAR_10|FUNC_3(VAR_12)|VAR_9;
  goto out;
 }

 switch (FUNC_1(VAR_25, FUNC_0(VAR_25))) {
 case 129:
  if (VAR_32[0x1c2] == 0x0e) {
   FUNC_15("Partition is already FAT16 LBA...\n");
  } else if ((VAR_32[0x1c2] != 0x04) && (VAR_32[0x1c2] != 0x06)) {
   FUNC_15("Warning: converting a non FAT16 partition to FAT16 LBA: FS type=0x%02x\n", VAR_32[0x1c2]);
  }
  VAR_32[0x1c2] = 0x0e;
  break;
 case 128:
  if (VAR_32[0x1c2] == 0x0c) {
   FUNC_15("Partition is already FAT32 LBA...\n");
  } else if (VAR_32[0x1c2] != 0x0b) {
   FUNC_15("Warning: converting a non FAT32 partition to FAT32 LBA: FS type=0x%02x\n", VAR_32[0x1c2]);
  }
  VAR_32[0x1c2] = 0x0c;
  break;
 }
 if ((VAR_22 != VAR_4) && (VAR_28 == VAR_19)) {

  VAR_32[0x1be] = FUNC_9(VAR_15) ?
   (BYTE)FUNC_1(VAR_24, FUNC_0(VAR_24)):0x80;
  FUNC_15("Set bootable USB partition as 0x%02X\n", VAR_32[0x1be]);
 }

 if (!FUNC_22(VAR_29, VAR_18.SectorSize, 0, 1, VAR_32)) {
  FUNC_15("Could not write MBR\n");
  VAR_14 = VAR_10|FUNC_3(VAR_12)|VAR_11;
  goto out;
 }

 VAR_33._handle = (char*)VAR_29;
 FUNC_14(VAR_18.SectorSize);



 if ((VAR_22 == VAR_3) && FUNC_6(VAR_26) && (VAR_21) && (VAR_28 == VAR_19))
  goto windows_mbr;


 if ((VAR_22 == VAR_4) || (VAR_28 == VAR_20)) {
  FUNC_15(VAR_35, "Zeroed");
  VAR_30 = FUNC_25(VAR_34);
  goto notify;
 }


 if ( (VAR_22 == VAR_6) || (VAR_22 == VAR_7) ||
   ((VAR_22 == VAR_3) && FUNC_5(VAR_26)) ) {
  FUNC_15(VAR_35, "Syslinux");
  VAR_30 = FUNC_23(VAR_34);
  goto notify;
 }


 if ( ((VAR_22 == VAR_3) && (VAR_26.has_grub2)) || (VAR_22 == VAR_1) ) {
  FUNC_15(VAR_35, "Grub 2.0");
  VAR_30 = FUNC_16(VAR_34);
  goto notify;
 }


 if ( ((VAR_22 == VAR_3) && (VAR_26.has_grub4dos)) || (VAR_22 == VAR_2) ) {
  FUNC_15(VAR_35, "Grub4DOS");
  VAR_30 = FUNC_17(VAR_34);
  goto notify;
 }


 if (VAR_22 == VAR_5) {
  FUNC_15(VAR_35, "ReactOS");
  VAR_30 = FUNC_19(VAR_34);
  goto notify;
 }


 if ( (VAR_22 == VAR_3) && FUNC_4(VAR_26) && (FUNC_8(VAR_23))) {
  FUNC_15(VAR_35, "KolibriOS");
  VAR_30 = FUNC_18(VAR_34);
  goto notify;
 }


windows_mbr:
 if ((FUNC_7(VAR_26) && !VAR_26.uses_minint) || (FUNC_9(VAR_15))) {
  FUNC_15(VAR_35, VAR_0);
  VAR_30 = FUNC_21(VAR_34);
 } else {
  FUNC_15(VAR_35, "Windows 7");
  VAR_30 = FUNC_24(VAR_34);
 }

notify:

 if (!FUNC_2(VAR_29, VAR_16, ((void*)0), 0, ((void*)0), 0, &VAR_31, ((void*)0)))
  FUNC_15("Failed to notify system about disk properties update: %s\n", FUNC_10());

out:
 FUNC_13(VAR_32);
 return VAR_30;
}
