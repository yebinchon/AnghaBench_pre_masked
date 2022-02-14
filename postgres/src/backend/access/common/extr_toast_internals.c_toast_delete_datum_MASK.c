
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct varlena {int dummy; } ;
struct varatt_external {int va_valueid; int va_toastrelid; } ;
struct TYPE_3__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int SnapshotData ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__* HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (struct varatt_external,struct varlena*) ;
 int FUNC_4 (struct varlena*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int *,int,int *) ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int ,int ,int **,int*) ;

void
FUNC_15(Relation VAR_4, Datum VAR_5, bool VAR_6)
{
 struct varlena *VAR_7 = (struct varlena *) FUNC_0(VAR_5);
 struct varatt_external VAR_8;
 Relation VAR_9;
 Relation *VAR_10;
 ScanKeyData VAR_11;
 SysScanDesc VAR_12;
 HeapTuple VAR_13;
 int VAR_14;
 int VAR_15;
 SnapshotData VAR_16;

 if (!FUNC_4(VAR_7))
  return;


 FUNC_3(VAR_8, VAR_7);




 VAR_9 = FUNC_12(VAR_8.va_toastrelid, VAR_3);


 VAR_15 = FUNC_14(VAR_9,
         VAR_3,
         &VAR_10,
         &VAR_14);




 FUNC_2(&VAR_11,
    (AttrNumber) 1,
    VAR_0, VAR_1,
    FUNC_1(VAR_8.va_valueid));






 FUNC_6(&VAR_16);
 VAR_12 = FUNC_8(VAR_9, VAR_10[VAR_15],
             &VAR_16, 1, &VAR_11);
 while ((VAR_13 = FUNC_10(VAR_12, VAR_2)) != ((void*)0))
 {



  if (VAR_6)
   FUNC_5(VAR_9, &VAR_13->t_self);
  else
   FUNC_7(VAR_9, &VAR_13->t_self);
 }




 FUNC_9(VAR_12);
 FUNC_13(VAR_10, VAR_14, VAR_3);
 FUNC_11(VAR_9, VAR_3);
}
