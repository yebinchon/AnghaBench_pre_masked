
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {struct nf_nat_range2* targinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_nat_range2 {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 unsigned int FUNC_2 (struct nf_conn*,struct nf_nat_range2 const*,int ) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_3, const struct xt_action_param *VAR_4)
{
 const struct nf_nat_range2 *VAR_5 = VAR_4->targinfo;
 enum ip_conntrack_info VAR_6;
 struct nf_conn *VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_6);
 FUNC_0(!(VAR_7 != ((void*)0) &&
   (VAR_6 == VAR_0 || VAR_6 == VAR_1)));

 return FUNC_2(VAR_7, VAR_5, VAR_2);
}
