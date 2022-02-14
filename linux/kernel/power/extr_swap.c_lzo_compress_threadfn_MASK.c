
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmp_data {int ret; int done; int stop; int wrk; int cmp_len; scalar_t__ cmp; int unc_len; int unc; int ready; int * thr; int go; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,scalar_t__,int *,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 struct cmp_data *VAR_2 = VAR_1;

 while (1) {
  FUNC_4(VAR_2->go, FUNC_0(&VAR_2->ready) ||
                    FUNC_2());
  if (FUNC_2()) {
   VAR_2->thr = ((void*)0);
   VAR_2->ret = -1;
   FUNC_1(&VAR_2->stop, 1);
   FUNC_5(&VAR_2->done);
   break;
  }
  FUNC_1(&VAR_2->ready, 0);

  VAR_2->ret = FUNC_3(VAR_2->unc, VAR_2->unc_len,
                            VAR_2->cmp + VAR_0, &VAR_2->cmp_len,
                            VAR_2->wrk);
  FUNC_1(&VAR_2->stop, 1);
  FUNC_5(&VAR_2->done);
 }
 return 0;
}
