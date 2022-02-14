
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; } ;
struct net {int dummy; } ;
struct brnf_net {scalar_t__ filter_pppoe_tagged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct brnf_net* FUNC_1 (struct net const*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct sk_buff *VAR_3, const struct net *VAR_4)
{
 struct brnf_net *VAR_5 = FUNC_1(VAR_4, VAR_2);

 return VAR_3->protocol == FUNC_0(VAR_0) &&
        FUNC_2(VAR_3) == FUNC_0(VAR_1) && VAR_5->filter_pppoe_tagged;
}
