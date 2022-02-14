
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_net {int idr; } ;
struct tcf_block {int dummy; } ;
struct net {int dummy; } ;


 struct tcf_block* FUNC_0 (int *,int ) ;
 struct tcf_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct tcf_block *FUNC_2(struct net *VAR_1, u32 VAR_2)
{
 struct tcf_net *VAR_3 = FUNC_1(VAR_1, VAR_0);

 return FUNC_0(&VAR_3->idr, VAR_2);
}
