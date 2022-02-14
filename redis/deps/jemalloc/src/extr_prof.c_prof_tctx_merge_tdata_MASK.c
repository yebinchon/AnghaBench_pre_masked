
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_11__ {int accumbytes; int accumobjs; int curbytes; int curobjs; } ;
struct TYPE_12__ {TYPE_3__ cnt_summed; } ;
typedef TYPE_4__ prof_tdata_t ;
struct TYPE_14__ {int accumbytes; int accumobjs; int curbytes; int curobjs; } ;
struct TYPE_13__ {int state; TYPE_8__ dump_cnts; int cnts; TYPE_2__* gctx; TYPE_1__* tdata; } ;
typedef TYPE_5__ prof_tctx_t ;
typedef int prof_cnt_t ;
struct TYPE_10__ {int lock; } ;
struct TYPE_9__ {int lock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_8__*,int *,int) ;
 int FUNC_4 () ;
 int VAR_0 ;





__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_1, prof_tctx_t *VAR_2, prof_tdata_t *VAR_3) {
 FUNC_0(VAR_1, VAR_2->tdata->lock);

 FUNC_1(VAR_1, VAR_2->gctx->lock);

 switch (VAR_2->state) {
 case 130:
  FUNC_2(VAR_1, VAR_2->gctx->lock);
  return;
 case 129:
  VAR_2->state = 131;
  FUNC_2(VAR_1, VAR_2->gctx->lock);

  FUNC_3(&VAR_2->dump_cnts, &VAR_2->cnts, sizeof(prof_cnt_t));

  VAR_3->cnt_summed.curobjs += VAR_2->dump_cnts.curobjs;
  VAR_3->cnt_summed.curbytes += VAR_2->dump_cnts.curbytes;
  if (VAR_0) {
   VAR_3->cnt_summed.accumobjs +=
       VAR_2->dump_cnts.accumobjs;
   VAR_3->cnt_summed.accumbytes +=
       VAR_2->dump_cnts.accumbytes;
  }
  break;
 case 131:
 case 128:
  FUNC_4();
 }
}
