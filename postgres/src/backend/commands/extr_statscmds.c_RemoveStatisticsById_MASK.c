
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int stxrelid; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_statistic_ext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_6)
{
 Relation VAR_7;
 HeapTuple VAR_8;
 Form_pg_statistic_ext VAR_9;
 Oid VAR_10;





 VAR_7 = FUNC_9(VAR_4, VAR_1);

 VAR_8 = FUNC_6(VAR_2, FUNC_4(VAR_6));

 if (!FUNC_3(VAR_8))
  FUNC_7(VAR_0, "cache lookup failed for statistics data %u", VAR_6);

 FUNC_1(VAR_7, &VAR_8->t_self);

 FUNC_5(VAR_8);

 FUNC_8(VAR_7, VAR_1);





 VAR_7 = FUNC_9(VAR_5, VAR_1);

 VAR_8 = FUNC_6(VAR_3, FUNC_4(VAR_6));

 if (!FUNC_3(VAR_8))
  FUNC_7(VAR_0, "cache lookup failed for statistics object %u", VAR_6);

 VAR_9 = (Form_pg_statistic_ext) FUNC_2(VAR_8);
 VAR_10 = VAR_9->stxrelid;

 FUNC_0(VAR_10);

 FUNC_1(VAR_7, &VAR_8->t_self);

 FUNC_5(VAR_8);

 FUNC_8(VAR_7, VAR_1);
}
