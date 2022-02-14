
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cur_pos; } ;
typedef TYPE_1__ VP8LRefsCursor ;
typedef int VP8LHistogram ;
typedef int VP8LBackwardRefs ;


 int FUNC_0 (int * const,int ,int *,int ) ;
 TYPE_1__ FUNC_1 (int const* const) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void FUNC_4(const VP8LBackwardRefs* const VAR_0,
                            VP8LHistogram* const VAR_1) {
  VP8LRefsCursor VAR_2 = FUNC_1(VAR_0);
  while (FUNC_3(&VAR_2)) {
    FUNC_0(VAR_1, VAR_2.cur_pos, ((void*)0), 0);
    FUNC_2(&VAR_2);
  }
}
