
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ready_state; scalar_t__ doc_state; } ;
typedef scalar_t__ READYSTATE ;
typedef TYPE_1__ DocHost ;



void FUNC_0(DocHost *VAR_0, READYSTATE VAR_1)
{
    VAR_0->doc_state = VAR_1;
    if(VAR_1 > VAR_0->ready_state)
        VAR_0->ready_state = VAR_1;
}
