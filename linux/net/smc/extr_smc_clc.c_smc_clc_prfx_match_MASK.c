
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct smc_clc_msg_proposal_prefix {int ipv6_prefixes_cnt; } ;
struct dst_entry {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct dst_entry* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct smc_clc_msg_proposal_prefix*) ;
 int FUNC_5 (int ,struct smc_clc_msg_proposal_prefix*) ;

int FUNC_6(struct socket *VAR_2,
         struct smc_clc_msg_proposal_prefix *VAR_3)
{
 struct dst_entry *VAR_4 = FUNC_3(VAR_2->sk);
 int VAR_5;

 if (!VAR_4) {
  VAR_5 = -VAR_1;
  goto out;
 }
 if (!VAR_4->dev) {
  VAR_5 = -VAR_0;
  goto out_rel;
 }
 FUNC_1();
 if (!VAR_3->ipv6_prefixes_cnt)
  VAR_5 = FUNC_4(VAR_4->dev, VAR_3);
 else
  VAR_5 = FUNC_5(VAR_4->dev, VAR_3);
 FUNC_2();
out_rel:
 FUNC_0(VAR_4);
out:
 return VAR_5;
}
