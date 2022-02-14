
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seg6_pernet_data {int hmac_infos; } ;
struct seg6_hmac_info {int dummy; } ;
struct net {int dummy; } ;


 struct seg6_hmac_info* FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 struct seg6_pernet_data* FUNC_1 (struct net*) ;

struct seg6_hmac_info *FUNC_2(struct net *VAR_1, u32 VAR_2)
{
 struct seg6_pernet_data *VAR_3 = FUNC_1(VAR_1);
 struct seg6_hmac_info *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->hmac_infos, &VAR_2, VAR_0);

 return VAR_4;
}
