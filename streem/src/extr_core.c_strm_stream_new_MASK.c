
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strm_stream_mode ;
struct TYPE_4__ {int queue; scalar_t__ excl; scalar_t__ refcnt; int * exc; scalar_t__ flags; scalar_t__ rcapa; scalar_t__ rsize; int * rest; int * dst; void* data; void* close_func; void* start_func; int mode; int type; } ;
typedef TYPE_1__ strm_stream ;
typedef void* strm_callback ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

strm_stream*
FUNC_3(strm_stream_mode VAR_2, strm_callback VAR_3, strm_callback VAR_4, void* VAR_5)
{
  strm_stream *VAR_6 = FUNC_0(sizeof(strm_stream));
  VAR_6->type = VAR_0;
  VAR_6->mode = VAR_2;
  VAR_6->start_func = VAR_3;
  VAR_6->close_func = VAR_4;
  VAR_6->data = VAR_5;
  VAR_6->dst = ((void*)0);
  VAR_6->rest = ((void*)0);
  VAR_6->rsize = 0;
  VAR_6->rcapa = 0;
  VAR_6->flags = 0;
  VAR_6->exc = ((void*)0);
  VAR_6->refcnt = 0;
  VAR_6->excl = 0;
  VAR_6->queue = FUNC_2();
  FUNC_1(VAR_1);

  return VAR_6;
}
