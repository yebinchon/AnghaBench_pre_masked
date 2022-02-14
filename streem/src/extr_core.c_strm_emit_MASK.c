
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int strm_value ;
struct TYPE_4__ {scalar_t__ mode; int rsize; struct TYPE_4__** rest; struct TYPE_4__* dst; scalar_t__ start_func; } ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ strm_callback ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int ) ;

void
FUNC_4(strm_stream* VAR_4, strm_value VAR_5, strm_callback VAR_6)
{
  if (VAR_4->mode == VAR_2) return;
  if (!FUNC_1(VAR_5)) {
    if (VAR_4->dst) {
      FUNC_3(VAR_4->dst, VAR_4->dst->start_func, VAR_5);
      if (VAR_4->dst->mode == VAR_3) {
        VAR_4->dst = ((void*)0);
      }
    }
    if (VAR_4->rest) {
      int VAR_7;

      for (VAR_7=0; VAR_7<VAR_4->rsize; VAR_7++) {
        FUNC_3(VAR_4->rest[VAR_7], VAR_4->rest[VAR_7]->start_func, VAR_5);
      }
    }


    if (VAR_4->dst == ((void*)0)) {
      int VAR_8 = VAR_1;
      if (VAR_4->rest) {
        int VAR_9;

        for (VAR_9=0; VAR_9<VAR_4->rsize; VAR_9++) {
          if (VAR_4->rest[VAR_9]->mode != VAR_3) {
            VAR_8 = VAR_0;
            break;
          }
        }
      }
      if (VAR_8) {
        VAR_4->mode = VAR_2;
        return;
      }
    }
  }
  FUNC_0();
  if (VAR_6) {
    FUNC_3(VAR_4, VAR_6, FUNC_2());
  }
}
