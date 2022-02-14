
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct nf_nat_range* targinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_nat_range2 {int base_proto; } ;
struct nf_nat_range {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nf_nat_range2*,struct nf_nat_range const*,int) ;
 int FUNC_2 (int *,int ,int) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 unsigned int FUNC_4 (struct nf_conn*,struct nf_nat_range2*,int ) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_4, const struct xt_action_param *VAR_5)
{
 const struct nf_nat_range *VAR_6 = VAR_5->targinfo;
 struct nf_nat_range2 VAR_7;
 enum ip_conntrack_info VAR_8;
 struct nf_conn *VAR_9;

 VAR_9 = FUNC_3(VAR_4, &VAR_8);
 FUNC_0(!(VAR_9 != ((void*)0) &&
   (VAR_8 == VAR_0 || VAR_8 == VAR_1 ||
    VAR_8 == VAR_2)));

 FUNC_1(&VAR_7, VAR_6, sizeof(*VAR_6));
 FUNC_2(&VAR_7.base_proto, 0, sizeof(VAR_7.base_proto));

 return FUNC_4(VAR_9, &VAR_7, VAR_3);
}
