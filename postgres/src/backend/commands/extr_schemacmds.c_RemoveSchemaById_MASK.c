
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

void
FUNC_8(Oid VAR_4)
{
 Relation VAR_5;
 HeapTuple VAR_6;

 VAR_5 = FUNC_7(VAR_2, VAR_3);

 VAR_6 = FUNC_4(VAR_1,
        FUNC_2(VAR_4));
 if (!FUNC_1(VAR_6))
  FUNC_5(VAR_0, "cache lookup failed for namespace %u", VAR_4);

 FUNC_0(VAR_5, &VAR_6->t_self);

 FUNC_3(VAR_6);

 FUNC_6(VAR_5, VAR_3);
}
