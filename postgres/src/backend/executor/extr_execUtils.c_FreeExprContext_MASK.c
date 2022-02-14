
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int es_exprcontexts; } ;
struct TYPE_7__ {TYPE_2__* ecxt_estate; int ecxt_per_tuple_memory; } ;
typedef TYPE_1__ ExprContext ;
typedef TYPE_2__ EState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(ExprContext *VAR_0, bool VAR_1)
{
 EState *VAR_2;


 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0->ecxt_per_tuple_memory);

 VAR_2 = VAR_0->ecxt_estate;
 if (VAR_2)
  VAR_2->es_exprcontexts = FUNC_2(VAR_2->es_exprcontexts,
              VAR_0);

 FUNC_3(VAR_0);
}
