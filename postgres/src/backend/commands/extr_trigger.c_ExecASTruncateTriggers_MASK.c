
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ trig_truncate_after_statement; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_6__ {TYPE_1__* ri_TrigDesc; } ;
typedef TYPE_2__ ResultRelInfo ;
typedef int EState ;


 int FUNC_0 (int *,TYPE_2__*,int ,int,int *,int *,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(EState *VAR_2, ResultRelInfo *VAR_3)
{
 TriggerDesc *VAR_4 = VAR_3->ri_TrigDesc;

 if (VAR_4 && VAR_4->trig_truncate_after_statement)
  FUNC_0(VAR_2, VAR_3, VAR_1,
         0, ((void*)0), ((void*)0), VAR_0, ((void*)0), ((void*)0));
}
