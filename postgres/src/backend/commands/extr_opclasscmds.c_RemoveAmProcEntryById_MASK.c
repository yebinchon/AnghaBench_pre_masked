
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_self; } ;
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
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,int,int *,int,int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;
 ScanKeyData VAR_10[1];
 SysScanDesc VAR_11;

 FUNC_3(&VAR_10[0],
    VAR_2,
    VAR_3, VAR_5,
    FUNC_2(VAR_7));

 VAR_8 = FUNC_9(VAR_1, VAR_6);

 VAR_11 = FUNC_5(VAR_8, VAR_0, 1,
         ((void*)0), 1, VAR_10);


 VAR_9 = FUNC_7(VAR_11);
 if (!FUNC_1(VAR_9))
  FUNC_4(VAR_4, "could not find tuple for amproc entry %u", VAR_7);

 FUNC_0(VAR_8, &VAR_9->t_self);

 FUNC_6(VAR_11);
 FUNC_8(VAR_8, VAR_6);
}
