
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ strm_stream_mode ;
struct TYPE_4__ {scalar_t__ mode; scalar_t__ refcnt; scalar_t__ (* close_func ) (TYPE_1__*,int ) ;int rsize; scalar_t__* rest; scalar_t__ dst; scalar_t__* data; } ;
typedef TYPE_1__ strm_stream ;
typedef int strm_callback ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(strm_stream* VAR_3)
{
  strm_stream_mode VAR_4 = VAR_3->mode;

  if (VAR_4 == VAR_2) return;
  FUNC_2(VAR_3->refcnt);
  if (VAR_3->refcnt > 0) return;
  if (!FUNC_1(VAR_3->mode, VAR_4, VAR_2)) {
    return;
  }
  if (VAR_3->close_func) {
    if ((*VAR_3->close_func)(VAR_3, FUNC_3()) == VAR_0)
      return;
  }
  else {
    FUNC_0(VAR_3->data);
    VAR_3->data = ((void*)0);
  }

  if (VAR_3->dst) {
    FUNC_4(VAR_3->dst, (strm_callback)FUNC_6, FUNC_3());
  }
  if (VAR_3->rest) {
    int VAR_5;

    for (VAR_5=0; VAR_5<VAR_3->rsize; VAR_5++) {
      FUNC_4(VAR_3->rest[VAR_5], (strm_callback)FUNC_6, FUNC_3());
    }
    FUNC_0(VAR_3->rest);
  }
  FUNC_2(VAR_1);
}
