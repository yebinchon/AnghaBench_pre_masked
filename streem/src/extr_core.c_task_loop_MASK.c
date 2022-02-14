
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strm_task {int dummy; } ;
struct TYPE_3__ {int excl; int queue; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct strm_task*) ;

__attribute__((used)) static void*
FUNC_3(void *VAR_3)
{
  strm_stream* VAR_4;

  for (;;) {
    VAR_4 = FUNC_1(VAR_1);
    if (!VAR_4) {
      VAR_4 = FUNC_1(VAR_0);
    }
    if (VAR_4) {
      if (FUNC_0(VAR_4->excl, 0, 1)) {
        struct strm_task* VAR_5;

        while ((VAR_5 = FUNC_1(VAR_4->queue)) != ((void*)0)) {
          FUNC_2(VAR_4, VAR_5);
        }
        FUNC_0(VAR_4->excl, 1, 0);
      }
    }
    if (VAR_2 == 0) {
      break;
    }
  }
  return ((void*)0);
}
