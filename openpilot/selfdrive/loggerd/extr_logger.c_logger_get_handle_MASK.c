
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; int refcnt; } ;
struct TYPE_5__ {int lock; TYPE_2__* cur_handle; } ;
typedef TYPE_1__ LoggerState ;
typedef TYPE_2__ LoggerHandle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

LoggerHandle* FUNC_2(LoggerState *VAR_0) {
  FUNC_0(&VAR_0->lock);
  LoggerHandle* VAR_1 = VAR_0->cur_handle;
  if (VAR_1) {
    FUNC_0(&VAR_1->lock);
    VAR_1->refcnt++;
    FUNC_1(&VAR_1->lock);
  }
  FUNC_1(&VAR_0->lock);
  return VAR_1;
}
