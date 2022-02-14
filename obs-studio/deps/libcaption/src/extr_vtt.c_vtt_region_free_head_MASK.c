
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * region_tail; int * region_head; } ;
typedef TYPE_1__ vtt_t ;


 int * FUNC_0 (int *) ;

void FUNC_1(vtt_t* VAR_0)
{
    VAR_0->region_head = FUNC_0(VAR_0->region_head);
    if (VAR_0->region_head == ((void*)0)) {
        VAR_0->region_tail = ((void*)0);
    }
}
