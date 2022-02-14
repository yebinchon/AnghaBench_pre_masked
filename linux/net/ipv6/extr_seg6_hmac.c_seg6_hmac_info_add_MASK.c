
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seg6_pernet_data {int hmac_infos; } ;
struct seg6_hmac_info {int node; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 struct seg6_pernet_data* FUNC_1 (struct net*) ;

int FUNC_2(struct net *VAR_1, u32 VAR_2, struct seg6_hmac_info *VAR_3)
{
 struct seg6_pernet_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->hmac_infos, &VAR_3->node,
         VAR_0);

 return VAR_5;
}
