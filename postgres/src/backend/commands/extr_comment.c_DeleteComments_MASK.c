
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {int t_self; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int *,int,int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_9, Oid VAR_10, int32 VAR_11)
{
 Relation VAR_12;
 ScanKeyData VAR_13[3];
 int VAR_14;
 SysScanDesc VAR_15;
 HeapTuple VAR_16;



 FUNC_3(&VAR_13[0],
    VAR_1,
    VAR_3, VAR_7,
    FUNC_2(VAR_9));
 FUNC_3(&VAR_13[1],
    VAR_0,
    VAR_3, VAR_7,
    FUNC_2(VAR_10));

 if (VAR_11 != 0)
 {
  FUNC_3(&VAR_13[2],
     VAR_2,
     VAR_3, VAR_6,
     FUNC_1(VAR_11));
  VAR_14 = 3;
 }
 else
  VAR_14 = 2;

 VAR_12 = FUNC_8(VAR_5, VAR_8);

 VAR_15 = FUNC_4(VAR_12, VAR_4, 1,
       ((void*)0), VAR_14, VAR_13);

 while ((VAR_16 = FUNC_6(VAR_15)) != ((void*)0))
  FUNC_0(VAR_12, &VAR_16->t_self);



 FUNC_5(VAR_15);
 FUNC_7(VAR_12, VAR_8);
}
