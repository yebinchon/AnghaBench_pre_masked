
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct internal_state {int dummy; } ;
struct inflate_state {int wrap; unsigned int wbits; int * window; } ;
struct TYPE_7__ {int * working_window; struct inflate_state inflate_state; } ;
struct TYPE_6__ {struct internal_state* state; int * msg; } ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(z_streamp VAR_1, int VAR_2)
{
    struct inflate_state *VAR_3;

    if (VAR_1 == ((void*)0)) return VAR_0;
    VAR_1->msg = ((void*)0);

    VAR_3 = &FUNC_0(VAR_1)->inflate_state;
    VAR_1->state = (struct internal_state *)VAR_3;

    if (VAR_2 < 0) {
        VAR_3->wrap = 0;
        VAR_2 = -VAR_2;
    }
    else {
        VAR_3->wrap = (VAR_2 >> 4) + 1;
    }
    if (VAR_2 < 8 || VAR_2 > 15) {
        return VAR_0;
    }
    VAR_3->wbits = (unsigned)VAR_2;
    VAR_3->window = &FUNC_0(VAR_1)->working_window[0];

    return FUNC_1(VAR_1);
}
