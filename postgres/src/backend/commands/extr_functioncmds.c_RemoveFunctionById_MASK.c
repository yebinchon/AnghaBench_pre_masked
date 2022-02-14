
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char prokind; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Oid VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;
 char VAR_10;




 VAR_8 = FUNC_8(VAR_5, VAR_6);

 VAR_9 = FUNC_5(VAR_3, FUNC_3(VAR_7));
 if (!FUNC_2(VAR_9))
  FUNC_6(VAR_2, "cache lookup failed for function %u", VAR_7);

 VAR_10 = ((Form_pg_proc) FUNC_1(VAR_9))->prokind;

 FUNC_0(VAR_8, &VAR_9->t_self);

 FUNC_4(VAR_9);

 FUNC_7(VAR_8, VAR_6);




 if (VAR_10 == VAR_4)
 {
  VAR_8 = FUNC_8(VAR_1, VAR_6);

  VAR_9 = FUNC_5(VAR_0, FUNC_3(VAR_7));
  if (!FUNC_2(VAR_9))
   FUNC_6(VAR_2, "cache lookup failed for pg_aggregate tuple for function %u", VAR_7);

  FUNC_0(VAR_8, &VAR_9->t_self);

  FUNC_4(VAR_9);

  FUNC_7(VAR_8, VAR_6);
 }
}
