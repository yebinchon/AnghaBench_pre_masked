
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct km_event {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,struct xfrm_state*,struct km_event const*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct xfrm_state*) ;
 int FUNC_4 (struct net*,struct sk_buff*,int ,int ) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, const struct km_event *VAR_4)
{
 struct net *VAR_5 = FUNC_5(VAR_3);
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(FUNC_3(VAR_3), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4);
 FUNC_0(VAR_7 < 0);

 return FUNC_4(VAR_5, VAR_6, 0, VAR_2);
}
