
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int accumbytes; int accumobjs; int curbytes; int curobjs; } ;
struct prof_tdata_merge_iter_arg_s {int tsdn; TYPE_1__ cnt_all; } ;
typedef int prof_tdata_tree_t ;
struct TYPE_9__ {scalar_t__ accumbytes; scalar_t__ accumobjs; scalar_t__ curbytes; scalar_t__ curobjs; } ;
struct TYPE_8__ {int dumping; int lock; TYPE_6__ cnt_summed; int bt2tctx; int expired; } ;
typedef TYPE_2__ prof_tdata_t ;
typedef int prof_tctx_t ;
typedef int prof_cnt_t ;


 int FUNC_0 (int *,size_t*,int *,void**) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;

__attribute__((used)) static prof_tdata_t *
FUNC_5(prof_tdata_tree_t *VAR_1, prof_tdata_t *VAR_2,
    void *VAR_3) {
 struct prof_tdata_merge_iter_arg_s *VAR_4 =
     (struct prof_tdata_merge_iter_arg_s *)VAR_3;

 FUNC_1(VAR_4->tsdn, VAR_2->lock);
 if (!VAR_2->expired) {
  size_t VAR_5;
  union {
   prof_tctx_t *p;
   void *v;
  } VAR_6;

  VAR_2->dumping = 1;
  FUNC_3(&VAR_2->cnt_summed, 0, sizeof(prof_cnt_t));
  for (VAR_5 = 0; !FUNC_0(&VAR_2->bt2tctx, &VAR_5, ((void*)0),
      &VAR_6.v);) {
   FUNC_4(VAR_4->tsdn, VAR_6.p, VAR_2);
  }

  VAR_4->cnt_all.curobjs += VAR_2->cnt_summed.curobjs;
  VAR_4->cnt_all.curbytes += VAR_2->cnt_summed.curbytes;
  if (VAR_0) {
   VAR_4->cnt_all.accumobjs += VAR_2->cnt_summed.accumobjs;
   VAR_4->cnt_all.accumbytes += VAR_2->cnt_summed.accumbytes;
  }
 } else {
  VAR_2->dumping = 0;
 }
 FUNC_2(VAR_4->tsdn, VAR_2->lock);

 return ((void*)0);
}
