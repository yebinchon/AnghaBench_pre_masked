
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seg6_pernet_data {int hmac_infos; } ;
struct seg6_hmac_info {int node; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct seg6_hmac_info* FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct seg6_hmac_info*) ;
 struct seg6_pernet_data* FUNC_3 (struct net*) ;

int FUNC_4(struct net *VAR_2, u32 VAR_3)
{
 struct seg6_pernet_data *VAR_4 = FUNC_3(VAR_2);
 struct seg6_hmac_info *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_0(&VAR_4->hmac_infos, &VAR_3, VAR_1);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_1(&VAR_4->hmac_infos, &VAR_5->node,
         VAR_1);
 if (VAR_6)
  goto out;

 FUNC_2(VAR_5);

out:
 return VAR_6;
}
