
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;

void FUNC_2(struct sk_buff *VAR_1, struct net_device *VAR_2, gfp_t VAR_3)
{
 struct net *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_1, VAR_4, 0, VAR_0, ((void*)0), VAR_3);
}
