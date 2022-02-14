
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

void
FUNC_12(Oid VAR_5)
{
 Relation VAR_6;
 HeapTuple VAR_7;

 if (!FUNC_9())
  FUNC_6(VAR_3,
    (FUNC_7(VAR_2),
     FUNC_8("must be superuser to drop access methods")));

 VAR_6 = FUNC_11(VAR_1, VAR_4);

 VAR_7 = FUNC_4(VAR_0, FUNC_2(VAR_5));
 if (!FUNC_1(VAR_7))
  FUNC_5(VAR_3, "cache lookup failed for access method %u", VAR_5);

 FUNC_0(VAR_6, &VAR_7->t_self);

 FUNC_3(VAR_7);

 FUNC_10(VAR_6, VAR_4);
}
