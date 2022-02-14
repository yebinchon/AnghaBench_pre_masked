
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcnt; int lock; int lock_path; scalar_t__ log_file; scalar_t__ qlog_file; int * bz_qlog; int * bz_file; } ;
typedef TYPE_1__ LoggerHandle ;


 int FUNC_0 (int*,int *,int ,int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

void FUNC_7(LoggerHandle* VAR_0) {
  FUNC_4(&VAR_0->lock);
  FUNC_1(VAR_0->refcnt > 0);
  VAR_0->refcnt--;
  if (VAR_0->refcnt == 0) {
    if (VAR_0->bz_file){
      int VAR_1;
      FUNC_0(&VAR_1, VAR_0->bz_file, 0, ((void*)0), ((void*)0));
      VAR_0->bz_file = ((void*)0);
    }
    if (VAR_0->bz_qlog){
      int VAR_2;
      FUNC_0(&VAR_2, VAR_0->bz_qlog, 0, ((void*)0), ((void*)0));
      VAR_0->bz_qlog = ((void*)0);
    }
    if (VAR_0->qlog_file) FUNC_2(VAR_0->qlog_file);
    FUNC_2(VAR_0->log_file);
    FUNC_6(VAR_0->lock_path);
    FUNC_5(&VAR_0->lock);
    FUNC_3(&VAR_0->lock);
    return;
  }
  FUNC_5(&VAR_0->lock);
}
