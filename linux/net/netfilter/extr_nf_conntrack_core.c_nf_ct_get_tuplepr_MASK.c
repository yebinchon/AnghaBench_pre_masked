
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nf_conntrack_tuple {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sk_buff const*,unsigned int,int ,int *) ;
 int FUNC_1 (struct sk_buff const*,unsigned int,int,int ,int ,struct net*,struct nf_conntrack_tuple*) ;

bool FUNC_2(const struct sk_buff *VAR_0, unsigned int VAR_1,
         u_int16_t VAR_2,
         struct net *VAR_3, struct nf_conntrack_tuple *VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_6 <= 0)
  return 0;

 return FUNC_1(VAR_0, VAR_1, VAR_6, VAR_2, VAR_5, VAR_3, VAR_4);
}
