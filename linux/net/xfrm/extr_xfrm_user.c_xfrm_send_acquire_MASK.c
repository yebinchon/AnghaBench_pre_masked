
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_tmpl {int dummy; } ;
struct xfrm_state {int dummy; } ;
struct xfrm_policy {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct xfrm_state*,struct xfrm_tmpl*,struct xfrm_policy*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct xfrm_state*,struct xfrm_policy*) ;
 int FUNC_4 (struct net*,struct sk_buff*,int ,int ) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, struct xfrm_tmpl *VAR_4,
        struct xfrm_policy *VAR_5)
{
 struct net *VAR_6 = FUNC_5(VAR_3);
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_3(VAR_3, VAR_5), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_8 < 0);

 return FUNC_4(VAR_6, VAR_7, 0, VAR_2);
}
