
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int dummy; } ;
struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int ihl; int tot_len; int check; } ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct xt_action_param const*,int ,int,int) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_3, const struct xt_action_param *VAR_4)
{
 struct iphdr *VAR_5 = FUNC_2(VAR_3);
 __be16 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4,
       VAR_1,
       VAR_5->ihl * 4,
       sizeof(*VAR_5) + sizeof(struct tcphdr));
 if (VAR_7 < 0)
  return VAR_0;
 if (VAR_7 > 0) {
  VAR_5 = FUNC_2(VAR_3);
  VAR_6 = FUNC_1(FUNC_3(VAR_5->tot_len) + VAR_7);
  FUNC_0(&VAR_5->check, VAR_5->tot_len, VAR_6);
  VAR_5->tot_len = VAR_6;
 }
 return VAR_2;
}
