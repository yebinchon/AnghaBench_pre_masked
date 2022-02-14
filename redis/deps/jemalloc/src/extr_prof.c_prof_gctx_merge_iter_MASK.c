
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct prof_gctx_merge_iter_arg_s {scalar_t__ tsdn; int leak_ngctx; } ;
typedef int prof_gctx_tree_t ;
struct TYPE_5__ {scalar_t__ curobjs; } ;
struct TYPE_6__ {int lock; TYPE_1__ cnt_summed; int tctxs; } ;
typedef TYPE_2__ prof_gctx_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ,void*) ;

__attribute__((used)) static prof_gctx_t *
FUNC_3(prof_gctx_tree_t *VAR_1, prof_gctx_t *VAR_2, void *VAR_3) {
 struct prof_gctx_merge_iter_arg_s *VAR_4 =
     (struct prof_gctx_merge_iter_arg_s *)VAR_3;

 FUNC_0(VAR_4->tsdn, VAR_2->lock);
 FUNC_2(&VAR_2->tctxs, ((void*)0), VAR_0,
     (void *)VAR_4->tsdn);
 if (VAR_2->cnt_summed.curobjs != 0) {
  VAR_4->leak_ngctx++;
 }
 FUNC_1(VAR_4->tsdn, VAR_2->lock);

 return ((void*)0);
}
