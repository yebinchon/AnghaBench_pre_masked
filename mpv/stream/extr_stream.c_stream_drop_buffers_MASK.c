
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ eof; scalar_t__ buf_end; scalar_t__ buf_cur; scalar_t__ buf_start; int pos; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(stream_t *VAR_0)
{
    VAR_0->pos = FUNC_1(VAR_0);
    VAR_0->buf_start = VAR_0->buf_cur = VAR_0->buf_end = 0;
    VAR_0->eof = 0;
    FUNC_0(VAR_0, 0);
}
