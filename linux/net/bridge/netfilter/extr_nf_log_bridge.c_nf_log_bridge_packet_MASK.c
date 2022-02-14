
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct sk_buff {int dummy; } ;
struct nf_loginfo {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int h_proto; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct net*,int ,int ,unsigned int,struct sk_buff const*,struct net_device const*,struct net_device const*,struct nf_loginfo const*,char const*) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_0, u_int8_t VAR_1,
     unsigned int VAR_2,
     const struct sk_buff *VAR_3,
     const struct net_device *VAR_4,
     const struct net_device *VAR_5,
     const struct nf_loginfo *VAR_6,
     const char *VAR_7)
{
 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_3)->h_proto, VAR_2, VAR_3,
   VAR_4, VAR_5, VAR_6, VAR_7);
}
