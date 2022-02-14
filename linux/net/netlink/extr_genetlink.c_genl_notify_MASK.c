
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {struct sock* genl_sock; } ;
struct genl_info {int snd_portid; scalar_t__ nlhdr; } ;
struct genl_family {scalar_t__ mcgrp_offset; scalar_t__ n_mcgrps; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (int) ;
 struct net* FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int ,scalar_t__,int,int ) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(const struct genl_family *VAR_0, struct sk_buff *VAR_1,
   struct genl_info *VAR_2, u32 VAR_3, gfp_t VAR_4)
{
 struct net *VAR_5 = FUNC_1(VAR_2);
 struct sock *VAR_6 = VAR_5->genl_sock;
 int VAR_7 = 0;

 if (VAR_2->nlhdr)
  VAR_7 = FUNC_3(VAR_2->nlhdr);

 if (FUNC_0(VAR_3 >= VAR_0->n_mcgrps))
  return;
 VAR_3 = VAR_0->mcgrp_offset + VAR_3;
 FUNC_2(VAR_6, VAR_1, VAR_2->snd_portid, VAR_3, VAR_7, VAR_4);
}
