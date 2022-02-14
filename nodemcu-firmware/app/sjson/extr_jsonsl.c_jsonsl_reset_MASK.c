
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* jsonsl_t ;
struct TYPE_3__ {int can_insert; scalar_t__ expecting; scalar_t__ in_escape; scalar_t__ stopfl; scalar_t__ level; scalar_t__ pos; scalar_t__ tok_last; } ;



void FUNC_0(jsonsl_t VAR_0)
{
    VAR_0->tok_last = 0;
    VAR_0->can_insert = 1;
    VAR_0->pos = 0;
    VAR_0->level = 0;
    VAR_0->stopfl = 0;
    VAR_0->in_escape = 0;
    VAR_0->expecting = 0;
}
