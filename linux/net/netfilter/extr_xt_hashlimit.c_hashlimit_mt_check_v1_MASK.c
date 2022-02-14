
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_hashlimit_mtinfo1* matchinfo; } ;
struct xt_hashlimit_mtinfo1 {int name; int hinfo; int cfg; } ;
struct hashlimit_cfg3 {int dummy; } ;


 int FUNC_0 (struct hashlimit_cfg3*,void*,int) ;
 int FUNC_1 (struct xt_mtchk_param const*,int *,struct hashlimit_cfg3*,int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(const struct xt_mtchk_param *VAR_0)
{
 struct xt_hashlimit_mtinfo1 *VAR_1 = VAR_0->matchinfo;
 struct hashlimit_cfg3 VAR_2 = {};
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->name, sizeof(VAR_1->name));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(&VAR_2, (void *)&VAR_1->cfg, 1);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_0, &VAR_1->hinfo,
      &VAR_2, VAR_1->name, 1);
}
