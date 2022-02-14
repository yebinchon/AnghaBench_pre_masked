
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int nfnl; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,struct sk_buff*,int ,unsigned int,int,int ) ;

int FUNC_1(struct sk_buff *VAR_0, struct net *VAR_1, u32 VAR_2,
     unsigned int VAR_3, int VAR_4, gfp_t VAR_5)
{
 return FUNC_0(VAR_1->nfnl, VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
}
