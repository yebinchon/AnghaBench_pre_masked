
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* comments; } ;
struct TYPE_6__ {TYPE_1__ location; struct TYPE_6__* leap_times; struct TYPE_6__* timezone_abbr; struct TYPE_6__* type; struct TYPE_6__* trans_idx; struct TYPE_6__* trans; struct TYPE_6__* name; } ;
typedef TYPE_2__ timelib_tzinfo ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(timelib_tzinfo *VAR_0)
{
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->trans);
 FUNC_0(VAR_0->trans_idx);
 FUNC_0(VAR_0->type);
 FUNC_0(VAR_0->timezone_abbr);
 FUNC_0(VAR_0->leap_times);
 FUNC_0(VAR_0->location.comments);
 FUNC_0(VAR_0);
 VAR_0 = ((void*)0);
}
