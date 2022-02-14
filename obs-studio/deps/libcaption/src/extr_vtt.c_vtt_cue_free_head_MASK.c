
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cue_tail; int * cue_head; } ;
typedef TYPE_1__ vtt_t ;


 int * FUNC_0 (int *) ;

void FUNC_1(vtt_t* VAR_0)
{
    VAR_0->cue_head = FUNC_0(VAR_0->cue_head);
    if (VAR_0->cue_head == ((void*)0)) {
        VAR_0->cue_tail = ((void*)0);
    }
}
