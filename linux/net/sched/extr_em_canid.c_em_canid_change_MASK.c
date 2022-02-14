
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ematch {int datalen; unsigned long data; } ;
struct net {int dummy; } ;
struct canid_match {int rules_count; scalar_t__ sff_rules_count; scalar_t__ eff_rules_count; scalar_t__ rules_raw; } ;
struct can_filter {int can_id; int can_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct canid_match*,int,int ) ;
 struct canid_match* FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,struct can_filter*,int) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_5, void *VAR_6, int VAR_7,
     struct tcf_ematch *VAR_8)
{
 struct can_filter *VAR_9 = VAR_6;
 struct canid_match *VAR_10;
 int VAR_11;

 if (!VAR_7)
  return -VAR_1;

 if (VAR_7 % sizeof(struct can_filter))
  return -VAR_1;

 if (VAR_7 > sizeof(struct can_filter) * VAR_2)
  return -VAR_1;

 VAR_10 = FUNC_1(sizeof(struct canid_match) + VAR_7, VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->rules_count = VAR_7 / sizeof(struct can_filter);
 for (VAR_11 = 0; VAR_11 < VAR_10->rules_count; VAR_11++) {
  if (VAR_9[VAR_11].can_id & VAR_0) {
   FUNC_2(VAR_10->rules_raw + VAR_10->eff_rules_count,
    &VAR_9[VAR_11],
    sizeof(struct can_filter));

   VAR_10->eff_rules_count++;
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_10->rules_count; VAR_11++) {
  if (!(VAR_9[VAR_11].can_id & VAR_0)) {
   FUNC_2(VAR_10->rules_raw
    + VAR_10->eff_rules_count
    + VAR_10->sff_rules_count,
    &VAR_9[VAR_11], sizeof(struct can_filter));

   VAR_10->sff_rules_count++;

   FUNC_0(VAR_10,
    VAR_9[VAR_11].can_id, VAR_9[VAR_11].can_mask);
  }
 }

 VAR_8->datalen = sizeof(struct canid_match) + VAR_7;
 VAR_8->data = (unsigned long)VAR_10;
 return 0;
}
