
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_6__ {int ullOffset; int ullSize; int ulPartitionNumber; } ;
typedef TYPE_1__ VDS_PARTITION_PROP ;
struct TYPE_7__ {int pwszName; } ;
typedef TYPE_2__ VDS_DISK_PROP ;
typedef int ULONG ;
typedef size_t LONG ;
typedef int IVdsSwProvider ;
typedef int IVdsServiceLoader ;
typedef int IVdsService ;
typedef int IVdsProvider ;
typedef int IVdsPack ;
typedef int IVdsDisk ;
typedef int IVdsAsync ;
typedef int IVdsAdvancedDisk ;
typedef int IUnknown ;
typedef int IEnumVdsObject ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int,int *,void**) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int *,int *,int ,int ,int *,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *,int,int **,int *) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int ,int ,int ,int **) ;
 scalar_t__ FUNC_12 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int *,TYPE_1__**,size_t*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_17 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_18 (int *,int *,void**) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,int **) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,char*,int **) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *,int ,int **) ;
 scalar_t__ FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int *,int *,void**) ;
 scalar_t__ FUNC_27 (int *,int **) ;
 int FUNC_28 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_29 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_30 (int ,int ,int ) ;
 int FUNC_31 (int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_32 (scalar_t__) ;
 int FUNC_33 () ;
 scalar_t__ FUNC_34 (int *,int ) ;
 int FUNC_35 (char*,int ,...) ;
 int FUNC_36 (int *,int ,char*,int ) ;

BOOL FUNC_37(DWORD VAR_19)
{
 BOOL VAR_20 = VAR_5;
 HRESULT VAR_21;
 ULONG VAR_22;
 wchar_t VAR_23[24];
 IVdsServiceLoader *VAR_24;
 IVdsService *VAR_25;
 IEnumVdsObject *VAR_26;
 IUnknown *VAR_27;

 FUNC_1(VAR_19);
 FUNC_36(VAR_23, FUNC_0(VAR_23), L"\\\\?\\PhysicalDrive%lu", VAR_19);


 FUNC_7(FUNC_3(((void*)0), VAR_3));
 FUNC_7(FUNC_4(((void*)0), -1, ((void*)0), ((void*)0), VAR_13,
  VAR_14, ((void*)0), 0, ((void*)0)));


 VAR_21 = FUNC_2(&VAR_2, ((void*)0), VAR_0 | VAR_1,
  &VAR_11, (void **)&VAR_24);
 if (VAR_21 != VAR_15) {
  FUNC_32(VAR_21);
  FUNC_35("Could not create VDS Loader Instance: %s", FUNC_33());
  goto out;
 }


 VAR_21 = FUNC_22(VAR_24, L"", &VAR_25);
 FUNC_23(VAR_24);
 if (VAR_21 != VAR_15) {
  FUNC_32(VAR_21);
  FUNC_35("Could not load VDS Service: %s", FUNC_33());
  goto out;
 }


 VAR_21 = FUNC_25(VAR_25);
 if (VAR_21 != VAR_15) {
  FUNC_32(VAR_21);
  FUNC_35("VDS Service is not ready: %s", FUNC_33());
  goto out;
 }


 VAR_21 = FUNC_24(VAR_25, VAR_18, &VAR_26);
 if (VAR_21 != VAR_15) {
  FUNC_32(VAR_21);
  FUNC_35("Could not query VDS Service Providers: %s", FUNC_33());
  goto out;
 }

 while (FUNC_6(VAR_26, 1, &VAR_27, &VAR_22) == VAR_15) {
  IVdsProvider *VAR_28;
  IVdsSwProvider *VAR_29;
  IEnumVdsObject *VAR_30;
  IUnknown *VAR_31;


  VAR_21 = FUNC_9(VAR_27, &VAR_10, (void **)&VAR_28);
  FUNC_10(VAR_27);
  if (VAR_21 != VAR_15) {
   FUNC_32(VAR_21);
   FUNC_35("Could not get VDS Provider: %s", FUNC_33());
   goto out;
  }


  VAR_21 = FUNC_26(VAR_28, &VAR_12, (void **)&VAR_29);
  FUNC_21(VAR_28);
  if (VAR_21 != VAR_15) {
   FUNC_32(VAR_21);
   FUNC_35("Could not get VDS Software Provider: %s", FUNC_33());
   goto out;
  }


  VAR_21 = FUNC_27(VAR_29, &VAR_30);
  FUNC_28(VAR_29);
  if (VAR_21 != VAR_15) {
   FUNC_32(VAR_21);
   FUNC_35("Could not get VDS Software Provider Packs: %s", FUNC_33());
   goto out;
  }


  while (FUNC_6(VAR_30, 1, &VAR_31, &VAR_22) == VAR_15) {
   IVdsPack *VAR_32;
   IEnumVdsObject *VAR_33;
   IUnknown *VAR_34;

   VAR_21 = FUNC_9(VAR_31, &VAR_9, (void **)&VAR_32);
   FUNC_10(VAR_31);
   if (VAR_21 != VAR_15) {
    FUNC_32(VAR_21);
    FUNC_35("Could not query VDS Software Provider Pack: %s", FUNC_33());
    goto out;
   }


   VAR_21 = FUNC_20(VAR_32, &VAR_33);
   if (VAR_21 != VAR_15) {
    FUNC_32(VAR_21);
    FUNC_35("Could not query VDS disks: %s", FUNC_33());
    goto out;
   }


   while (FUNC_6(VAR_33, 1, &VAR_34, &VAR_22) == VAR_15) {
    VDS_DISK_PROP VAR_35;
    VDS_PARTITION_PROP* VAR_36;
    LONG VAR_37, VAR_38;
    IVdsDisk *VAR_39;
    IVdsAdvancedDisk *VAR_40;


    VAR_21 = FUNC_9(VAR_34, &VAR_8, (void **)&VAR_39);
    if (VAR_21 != VAR_15) {
     FUNC_32(VAR_21);
     FUNC_35("Could not query VDS Disk Interface: %s", FUNC_33());
     goto out;
    }


    VAR_21 = FUNC_17(VAR_39, &VAR_35);
    if (VAR_21 != VAR_15) {
     FUNC_32(VAR_21);
     FUNC_35("Could not query VDS Disk Properties: %s", FUNC_33());
     goto out;
    }


    if (FUNC_34(VAR_23, VAR_35.pwszName) != 0) {
     FUNC_19(VAR_39);
     continue;
    }


    VAR_21 = FUNC_18(VAR_39, &VAR_7, (void **)&VAR_40);
    FUNC_19(VAR_39);
    if (VAR_21 != VAR_15) {
     FUNC_32(VAR_21);
     FUNC_35("Could not access VDS Advanced Disk interface: %s", FUNC_33());
     goto out;
    }


    VAR_21 = FUNC_13(VAR_40, &VAR_36, &VAR_38);
    if (VAR_21 == VAR_15) {
     FUNC_35("Deleting ALL partition(s) from disk '%S':", VAR_35.pwszName);

     for (VAR_37 = 0; VAR_37 < VAR_38; VAR_37++) {
      FUNC_35("● Partition %d (offset: %lld, size: %s)", VAR_36[VAR_37].ulPartitionNumber,
       VAR_36[VAR_37].ullOffset, FUNC_30(VAR_36[VAR_37].ullSize, VAR_5, VAR_5));
      VAR_21 = FUNC_12(VAR_40, VAR_36[VAR_37].ullOffset, VAR_16, VAR_16);
      if (VAR_21 != VAR_15) {
       VAR_20 = VAR_5;
       FUNC_32(VAR_21);
       FUNC_35("Could not delete partitions: %s", FUNC_33());
      }
     }
     VAR_20 = VAR_16;
    } else {
     FUNC_35("No partition to delete on disk '%S'", VAR_35.pwszName);
     VAR_20 = VAR_16;
    }
    FUNC_5(VAR_36);
    FUNC_14(VAR_40);
    goto out;
   }
  }
 }

out:
 return VAR_20;
}
