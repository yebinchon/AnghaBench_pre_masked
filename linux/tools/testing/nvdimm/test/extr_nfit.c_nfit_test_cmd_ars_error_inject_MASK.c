
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfit_test {int work; int badrange; } ;
struct nd_cmd_ars_err_inj {scalar_t__ err_inj_spa_range_length; int err_inj_options; scalar_t__ status; int err_inj_spa_range_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nfit_test *VAR_4,
  struct nd_cmd_ars_err_inj *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 != sizeof(*VAR_5)) {
  VAR_7 = -VAR_0;
  goto err;
 }

 if (VAR_5->err_inj_spa_range_length <= 0) {
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_7 = FUNC_0(&VAR_4->badrange, VAR_5->err_inj_spa_range_base,
   VAR_5->err_inj_spa_range_length);
 if (VAR_7 < 0)
  goto err;

 if (VAR_5->err_inj_options & (1 << VAR_1))
  FUNC_1(VAR_3, &VAR_4->work);

 VAR_5->status = 0;
 return 0;

err:
 VAR_5->status = VAR_2;
 return VAR_7;
}
