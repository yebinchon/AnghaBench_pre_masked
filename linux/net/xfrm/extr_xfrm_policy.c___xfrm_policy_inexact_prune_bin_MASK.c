
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_pol_inexact_bin {int inexact_bins; int head; int hhead; int root_s; int root_d; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfrm_pol_inexact_bin*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(struct xfrm_pol_inexact_bin *VAR_3, bool VAR_4)
{
 FUNC_6(&VAR_3->count);
 FUNC_8(&VAR_3->root_d, VAR_4);
 FUNC_8(&VAR_3->root_s, VAR_4);
 FUNC_7(&VAR_3->count);

 if (!FUNC_0(&VAR_3->root_d) || !FUNC_0(&VAR_3->root_s) ||
     !FUNC_2(&VAR_3->hhead)) {
  FUNC_1(VAR_4);
  return;
 }

 if (FUNC_5(&VAR_2, &VAR_3->head,
       VAR_1) == 0) {
  FUNC_4(&VAR_3->inexact_bins);
  FUNC_3(VAR_3, VAR_0);
 }
}
