
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ refcnt; int lock; int * bz_qlog; int * bz_file; } ;
typedef TYPE_1__ LoggerHandle ;


 int FUNC_0 (int*,int *,int *,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(LoggerHandle* VAR_0, uint8_t* VAR_1, size_t VAR_2, bool VAR_3) {
  FUNC_2(&VAR_0->lock);
  FUNC_1(VAR_0->refcnt > 0);
  int VAR_4;
  FUNC_0(&VAR_4, VAR_0->bz_file, VAR_1, VAR_2);

  if (VAR_3 && VAR_0->bz_qlog != ((void*)0)) {
    FUNC_0(&VAR_4, VAR_0->bz_qlog, VAR_1, VAR_2);
  }
  FUNC_3(&VAR_0->lock);
}
