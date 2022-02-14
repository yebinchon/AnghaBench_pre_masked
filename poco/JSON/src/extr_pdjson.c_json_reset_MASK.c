
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack_top; char* errmsg; int flags; scalar_t__ ntokens; } ;
typedef TYPE_1__ json_stream ;


 int VAR_0 ;

void FUNC_0(json_stream *VAR_1)
{
    VAR_1->stack_top = -1;
    VAR_1->ntokens = 0;
    VAR_1->flags &= ~VAR_0;
    VAR_1->errmsg[0] = '\0';
}
