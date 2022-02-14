
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mode; int rsize; int rcapa; int start_func; int refcnt; struct TYPE_7__** rest; struct TYPE_7__* dst; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__** FUNC_1 (TYPE_1__**,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 () ;

int
FUNC_6(strm_stream* VAR_3, strm_stream* VAR_4)
{
  FUNC_0(VAR_3->mode != VAR_1);
  FUNC_0(VAR_4->mode != VAR_2);
  if (VAR_3->dst == ((void*)0)) {
    VAR_3->dst = VAR_4;
  }
  else {
    if (VAR_3->rsize <= VAR_3->rcapa) {
      VAR_3->rcapa = VAR_3->rcapa*2+2;
      VAR_3->rest = FUNC_1(VAR_3->rest, sizeof(strm_stream*)*VAR_3->rcapa);
    }
    VAR_3->rest[VAR_3->rsize++] = VAR_4;
  }
  FUNC_2(VAR_4->refcnt);

  if (VAR_3->mode == VAR_2) {
    FUNC_5();
    FUNC_4(VAR_3, VAR_3->start_func, FUNC_3());
  }
  return VAR_0;
}
