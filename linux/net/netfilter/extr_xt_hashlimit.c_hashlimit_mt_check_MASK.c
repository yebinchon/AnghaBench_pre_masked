
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_hashlimit_mtinfo3* matchinfo; } ;
struct xt_hashlimit_mtinfo3 {int name; int cfg; int hinfo; } ;


 int FUNC_0 (struct xt_mtchk_param const*,int *,int *,int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_0)
{
 struct xt_hashlimit_mtinfo3 *VAR_1 = VAR_0->matchinfo;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->name, sizeof(VAR_1->name));
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, &VAR_1->hinfo, &VAR_1->cfg,
      VAR_1->name, 3);
}
