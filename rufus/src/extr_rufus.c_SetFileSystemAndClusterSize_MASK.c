
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int DiskSize; scalar_t__ MediaType; int SectorSize; int FSType; TYPE_1__* ClusterSize; } ;
struct TYPE_3__ {int Allowed; int Default; } ;
typedef int LONGLONG ;
typedef int LONG ;
typedef int BOOL ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 char** VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 float VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 TYPE_2__ VAR_20 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int) ;
 float VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__* VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 char* FUNC_12 (int ,char*) ;
 int FUNC_13 (TYPE_1__**,int ,int) ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 size_t VAR_30 ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_17(char* VAR_31)
{
 int VAR_32;
 LONGLONG VAR_33;
 char VAR_34[128] = "", *VAR_35;

 FUNC_7(FUNC_4(VAR_28));
 FUNC_7(FUNC_4(VAR_27));
 VAR_25 = VAR_10;
 FUNC_13(&VAR_20.ClusterSize, 0, sizeof(VAR_20.ClusterSize));
 if (VAR_20.DiskSize < 4*VAR_13) {
  VAR_20.ClusterSize[VAR_4].Allowed = 0x00001E00;
  for (VAR_33=32; VAR_33<=4096; VAR_33<<=1) {
   if (VAR_20.DiskSize < VAR_33*VAR_17) {
    VAR_20.ClusterSize[VAR_4].Default = 16*(ULONG)VAR_33;
    break;
   }
   VAR_20.ClusterSize[VAR_4].Allowed <<= 1;
  }
  VAR_20.ClusterSize[VAR_4].Allowed &= 0x0001FE00;
 }





 if ((VAR_20.DiskSize >= 32*VAR_17) && (1.0f*VAR_20.DiskSize < 1.0f*VAR_16*VAR_21)) {
  VAR_20.ClusterSize[VAR_5].Allowed = 0x000001F8;
  for (VAR_33=32; VAR_33<=(32*1024); VAR_33<<=1) {
   if (VAR_20.DiskSize*1.0f < VAR_33*VAR_17*VAR_0) {
    VAR_20.ClusterSize[VAR_5].Default = 8*(ULONG)VAR_33;
    break;
   }
   VAR_20.ClusterSize[VAR_5].Allowed <<= 1;
  }
  VAR_20.ClusterSize[VAR_5].Allowed &= 0x0001FE00;


  if ((VAR_20.DiskSize >= 256*VAR_17) && (VAR_20.DiskSize < 32*VAR_13)) {
   for (VAR_33=8; VAR_33<=32; VAR_33<<=1) {
    if (VAR_20.DiskSize*1.0f < VAR_33*VAR_13*VAR_0) {
     VAR_20.ClusterSize[VAR_5].Default = ((ULONG)VAR_33/2)*VAR_14;
     break;
    }
   }
  }

  if (VAR_20.DiskSize >= 32*VAR_13) {
   VAR_20.ClusterSize[VAR_5].Allowed &= 0x0001C000;
   VAR_20.ClusterSize[VAR_5].Default = 0x00008000;
  }
 }

 if (VAR_20.DiskSize < 256*VAR_21) {

  VAR_20.ClusterSize[VAR_7].Allowed = 0x0001FE00;
  for (VAR_33=16; VAR_33<=256; VAR_33<<=1) {
   if (VAR_20.DiskSize < VAR_33*VAR_21) {
    VAR_20.ClusterSize[VAR_7].Default = ((ULONG)VAR_33/4)*VAR_14;
    break;
   }
  }


  VAR_20.ClusterSize[VAR_1].Allowed = 0x03FFFE00;
  if (VAR_20.DiskSize < 256*VAR_17)
   VAR_20.ClusterSize[VAR_1].Default = 4*VAR_14;
  else if (VAR_20.DiskSize < 32*VAR_13)
   VAR_20.ClusterSize[VAR_1].Default = 32*VAR_14;
  else
   VAR_20.ClusterSize[VAR_1].Default = 128*VAR_14;


  VAR_20.ClusterSize[VAR_9].Allowed = VAR_19;
  VAR_20.ClusterSize[VAR_9].Default = 1;


  if (VAR_23) {
   VAR_20.ClusterSize[VAR_2].Allowed = VAR_19;
   VAR_20.ClusterSize[VAR_2].Default = 1;
   VAR_20.ClusterSize[VAR_3].Allowed = VAR_19;
   VAR_20.ClusterSize[VAR_3].Default = 1;
  }



  if (VAR_20.DiskSize >= 512*VAR_17) {
   if ((VAR_29 >= VAR_22) && (VAR_20.MediaType == VAR_12)) {
    VAR_20.ClusterSize[VAR_8].Allowed = VAR_19;
    VAR_20.ClusterSize[VAR_8].Default = 1;
   }
  }
 }


 FUNC_8();
 FUNC_9();

 for (VAR_32 = 0; VAR_32 < VAR_6; VAR_32++) {

  if (VAR_20.ClusterSize[VAR_32].Allowed != VAR_19) {
   VAR_20.ClusterSize[VAR_32].Allowed &= ~(VAR_20.SectorSize - 1);
   if ((VAR_20.ClusterSize[VAR_32].Default & VAR_20.ClusterSize[VAR_32].Allowed) == 0)

    VAR_20.ClusterSize[VAR_32].Default =
    VAR_20.ClusterSize[VAR_32].Allowed & (-(LONG)VAR_20.ClusterSize[VAR_32].Allowed);
  }

  if (VAR_20.ClusterSize[VAR_32].Allowed != 0) {
   VAR_34[0] = 0;

   if ((VAR_32 == VAR_5) && ((VAR_20.DiskSize > VAR_15) || (VAR_26)))
    FUNC_16(VAR_34, "Large ");
   FUNC_16(VAR_34, VAR_11[VAR_32]);
   if (VAR_25 == VAR_10) {
    VAR_35 = FUNC_12(VAR_18, VAR_34);
    VAR_25 = VAR_32;
   } else {
    VAR_35 = VAR_34;
   }
   if (VAR_24[VAR_32]) {
    FUNC_7(FUNC_6(VAR_28,
     FUNC_0(VAR_28, VAR_35), VAR_32));
   }
  }
 }


 VAR_20.FSType = VAR_10;
 if (FUNC_15(VAR_31) != 0) {
  for (VAR_20.FSType = VAR_6 - 1; VAR_20.FSType >= 0; VAR_20.FSType--) {
   if (FUNC_14(VAR_31, VAR_11[VAR_20.FSType]) == 0) {
    break;
   }
  }
 } else {

  VAR_20.FSType = VAR_30;
 }

 for (VAR_33 = 0; VAR_33<FUNC_1(VAR_28); VAR_33++) {
  if (FUNC_3(VAR_28, VAR_33) == VAR_20.FSType) {
   FUNC_7(FUNC_5(VAR_28, VAR_33));
   break;
  }
 }

 if (VAR_33 == FUNC_1(VAR_28)) {

  FUNC_11(VAR_28, VAR_25);
 }

 return FUNC_10((int)FUNC_3(VAR_28, FUNC_2(VAR_28)));
}
