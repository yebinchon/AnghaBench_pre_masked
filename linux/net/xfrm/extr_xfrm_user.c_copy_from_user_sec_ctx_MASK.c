
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_policy {int security; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct xfrm_user_sec_ctx* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int *,struct xfrm_user_sec_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct xfrm_policy *VAR_2, struct nlattr **VAR_3)
{
 struct nlattr *VAR_4 = VAR_3[VAR_1];
 struct xfrm_user_sec_ctx *VAR_5;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_0(VAR_4);
 return FUNC_1(&VAR_2->security, VAR_5, VAR_0);
}
