
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mb_w_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_11__ {int (* Init ) (TYPE_3__*) ;} ;
struct TYPE_10__ {int hook; int * data2; TYPE_2__* data1; } ;
struct TYPE_9__ {int delta_progress; scalar_t__ uv_alpha; scalar_t__ alpha; int alphas; int it; TYPE_3__ worker; } ;
typedef TYPE_2__ SegmentJob ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__* const,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(VP8Encoder* const VAR_1, SegmentJob* const VAR_2,
                           int VAR_3, int VAR_4) {
  FUNC_3()->Init(&VAR_2->worker);
  VAR_2->worker.data1 = VAR_2;
  VAR_2->worker.data2 = &VAR_2->it;
  VAR_2->worker.hook = VAR_0;
  FUNC_0(VAR_1, &VAR_2->it);
  FUNC_2(&VAR_2->it, VAR_3);
  FUNC_1(&VAR_2->it, (VAR_4 - VAR_3) * VAR_1->mb_w_);
  FUNC_4(VAR_2->alphas, 0, sizeof(VAR_2->alphas));
  VAR_2->alpha = 0;
  VAR_2->uv_alpha = 0;


  VAR_2->delta_progress = (VAR_3 == 0) ? 20 : 0;
}
