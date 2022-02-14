
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {scalar_t__ security; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (scalar_t__,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct xfrm_policy *VAR_0, struct sk_buff *VAR_1)
{
 if (VAR_0->security)
  return FUNC_0(VAR_0->security, VAR_1);
 return 0;
}
