
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test {int badrange; } ;
struct nd_cmd_ars_err_inj_clr {scalar_t__ err_inj_clr_spa_range_length; scalar_t__ status; int err_inj_clr_spa_range_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct nfit_test *VAR_2,
  struct nd_cmd_ars_err_inj_clr *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_4 != sizeof(*VAR_3)) {
  VAR_5 = -VAR_0;
  goto err;
 }

 if (VAR_3->err_inj_clr_spa_range_length <= 0) {
  VAR_5 = -VAR_0;
  goto err;
 }

 FUNC_0(&VAR_2->badrange, VAR_3->err_inj_clr_spa_range_base,
   VAR_3->err_inj_clr_spa_range_length);

 VAR_3->status = 0;
 return 0;

err:
 VAR_3->status = VAR_1;
 return VAR_5;
}
