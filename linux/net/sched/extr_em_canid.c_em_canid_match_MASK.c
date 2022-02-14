
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_pkt_info {int dummy; } ;
struct tcf_ematch {int dummy; } ;
struct sk_buff {int dummy; } ;
struct canid_match {int eff_rules_count; int match_sff; struct can_filter* rules_raw; } ;
struct can_filter {int can_id; int can_mask; } ;
typedef int canid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct canid_match* FUNC_1 (struct tcf_ematch*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct tcf_ematch *VAR_3,
    struct tcf_pkt_info *VAR_4)
{
 struct canid_match *VAR_5 = FUNC_1(VAR_3);
 canid_t VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 const struct can_filter *VAR_9;

 VAR_6 = FUNC_0(VAR_2);

 if (VAR_6 & VAR_0) {
  for (VAR_8 = 0, VAR_9 = VAR_5->rules_raw;
       VAR_8 < VAR_5->eff_rules_count; VAR_8++, VAR_9++) {
   if (!(((VAR_9->can_id ^ VAR_6) & VAR_9->can_mask))) {
    VAR_7 = 1;
    break;
   }
  }
 } else {
  VAR_6 &= VAR_1;
  VAR_7 = (FUNC_2(VAR_6, VAR_5->match_sff) ? 1 : 0);
 }

 return VAR_7;
}
