
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateest_net {int hash_lock; } ;
struct xt_rateest {int dummy; } ;
struct net {int dummy; } ;


 struct xt_rateest* FUNC_0 (struct xt_rateest_net*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct xt_rateest_net* FUNC_3 (struct net*,int ) ;
 int VAR_0 ;

struct xt_rateest *FUNC_4(struct net *VAR_1, const char *VAR_2)
{
 struct xt_rateest_net *VAR_3 = FUNC_3(VAR_1, VAR_0);
 struct xt_rateest *VAR_4;

 FUNC_1(&VAR_3->hash_lock);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_2(&VAR_3->hash_lock);
 return VAR_4;
}
