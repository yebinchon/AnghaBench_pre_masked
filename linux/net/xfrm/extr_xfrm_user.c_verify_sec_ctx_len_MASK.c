
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_user_sec_ctx {scalar_t__ len; scalar_t__ ctx_len; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct xfrm_user_sec_ctx* FUNC_0 (struct nlattr*) ;

__attribute__((used)) static inline int FUNC_1(struct nlattr **VAR_2)
{
 struct nlattr *VAR_3 = VAR_2[VAR_1];
 struct xfrm_user_sec_ctx *VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4->len != (sizeof(struct xfrm_user_sec_ctx) + VAR_4->ctx_len))
  return -VAR_0;

 return 0;
}
