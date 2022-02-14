
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dec_data {int ret; int done; int stop; scalar_t__ unc_len; scalar_t__ unc; int cmp_len; scalar_t__ cmp; int ready; int * thr; int go; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ,scalar_t__,scalar_t__*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_3)
{
 struct dec_data *VAR_4 = VAR_3;

 while (1) {
  FUNC_5(VAR_4->go, FUNC_0(&VAR_4->ready) ||
                    FUNC_3());
  if (FUNC_3()) {
   VAR_4->thr = ((void*)0);
   VAR_4->ret = -1;
   FUNC_1(&VAR_4->stop, 1);
   FUNC_6(&VAR_4->done);
   break;
  }
  FUNC_1(&VAR_4->ready, 0);

  VAR_4->unc_len = VAR_1;
  VAR_4->ret = FUNC_4(VAR_4->cmp + VAR_0, VAR_4->cmp_len,
                                 VAR_4->unc, &VAR_4->unc_len);
  if (VAR_2)
   FUNC_2((unsigned long)VAR_4->unc,
        (unsigned long)VAR_4->unc + VAR_4->unc_len);

  FUNC_1(&VAR_4->stop, 1);
  FUNC_6(&VAR_4->done);
 }
 return 0;
}
