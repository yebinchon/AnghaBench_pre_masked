
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
typedef int prof_tdata_t ;
struct TYPE_7__ {int prepared; TYPE_1__* tdata; } ;
typedef TYPE_2__ prof_tctx_t ;
struct TYPE_6__ {int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

void
FUNC_8(tsd_t *VAR_1, prof_tctx_t *VAR_2, bool VAR_3) {
 prof_tdata_t *VAR_4;

 FUNC_0(VAR_0);

 if (VAR_3) {






  VAR_4 = FUNC_6(VAR_1, 1);
  if (VAR_4 != ((void*)0)) {
   FUNC_3(VAR_4);
  }
 }

 if ((uintptr_t)VAR_2 > (uintptr_t)1U) {
  FUNC_1(FUNC_7(VAR_1), VAR_2->tdata->lock);
  VAR_2->prepared = 0;
  if (FUNC_5(FUNC_7(VAR_1), VAR_2)) {
   FUNC_4(VAR_1, VAR_2);
  } else {
   FUNC_2(FUNC_7(VAR_1), VAR_2->tdata->lock);
  }
 }
}
