
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int * buf; scalar_t__ debug; scalar_t__ reallocs; scalar_t__ dynamic; int increment; scalar_t__ length; } ;
typedef TYPE_1__ strbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(strbuf_t *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_3 <= 0)
        VAR_4 = VAR_1;
    else
        VAR_4 = VAR_3 + 1;

    VAR_2->buf = ((void*)0);
    VAR_2->size = VAR_4;
    VAR_2->length = 0;
    VAR_2->increment = VAR_0;
    VAR_2->dynamic = 0;
    VAR_2->reallocs = 0;
    VAR_2->debug = 0;

    VAR_2->buf = FUNC_1(VAR_4);
    if (!VAR_2->buf)
        FUNC_0("Out of memory");

    FUNC_2(VAR_2);
}
