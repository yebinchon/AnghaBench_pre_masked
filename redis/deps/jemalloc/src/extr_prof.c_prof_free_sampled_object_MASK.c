
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_8__ {scalar_t__ curobjs; size_t curbytes; } ;
struct TYPE_9__ {TYPE_1__* tdata; TYPE_2__ cnts; } ;
typedef TYPE_3__ prof_tctx_t ;
struct TYPE_7__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(tsd_t *VAR_0, size_t VAR_1, prof_tctx_t *VAR_2) {
 FUNC_1(FUNC_5(VAR_0), VAR_2->tdata->lock);
 FUNC_0(VAR_2->cnts.curobjs > 0);
 FUNC_0(VAR_2->cnts.curbytes >= VAR_1);
 VAR_2->cnts.curobjs--;
 VAR_2->cnts.curbytes -= VAR_1;

 if (FUNC_4(FUNC_5(VAR_0), VAR_2)) {
  FUNC_3(VAR_0, VAR_2);
 } else {
  FUNC_2(FUNC_5(VAR_0), VAR_2->tdata->lock);
 }
}
