
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * av_val; scalar_t__ av_len; } ;
struct TYPE_6__ {TYPE_1__ p_aval; int p_object; } ;
struct TYPE_7__ {scalar_t__ p_type; TYPE_2__ p_vu; } ;
typedef TYPE_3__ AMFObjectProperty ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;

void
FUNC_1(AMFObjectProperty *VAR_4)
{
    if (VAR_4->p_type == VAR_2 || VAR_4->p_type == VAR_0 || VAR_4->p_type == VAR_3)
        FUNC_0(&VAR_4->p_vu.p_object);
    else
    {
        VAR_4->p_vu.p_aval.av_len = 0;
        VAR_4->p_vu.p_aval.av_val = ((void*)0);
    }
    VAR_4->p_type = VAR_1;
}
