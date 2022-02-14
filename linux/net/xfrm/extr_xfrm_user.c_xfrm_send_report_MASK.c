
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
struct xfrm_selector {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int ,struct xfrm_selector*,int *) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net*,struct sk_buff*,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, u8 VAR_4,
       struct xfrm_selector *VAR_5, xfrm_address_t *VAR_6)
{
 struct sk_buff *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(FUNC_4(), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_8 < 0);

 return FUNC_3(VAR_3, VAR_7, 0, VAR_2);
}
