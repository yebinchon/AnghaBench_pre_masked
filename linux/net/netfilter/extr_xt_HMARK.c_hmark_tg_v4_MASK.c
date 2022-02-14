
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_hmark_info {int flags; } ;
struct xt_action_param {struct xt_hmark_info* targinfo; } ;
struct sk_buff {int mark; } ;
struct hmark_tuple {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct hmark_tuple*,struct xt_hmark_info const*) ;
 int FUNC_2 (struct hmark_tuple*,struct xt_hmark_info const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct hmark_tuple*,struct xt_hmark_info const*) ;
 int FUNC_4 (struct hmark_tuple*,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_2, const struct xt_action_param *VAR_3)
{
 const struct xt_hmark_info *VAR_4 = VAR_3->targinfo;
 struct hmark_tuple VAR_5;

 FUNC_4(&VAR_5, 0, sizeof(struct hmark_tuple));

 if (VAR_4->flags & FUNC_0(VAR_1)) {
  if (FUNC_1(VAR_2, &VAR_5, VAR_4) < 0)
   return VAR_0;
 } else {
  if (FUNC_3(VAR_2, &VAR_5, VAR_4) < 0)
   return VAR_0;
 }

 VAR_2->mark = FUNC_2(&VAR_5, VAR_4);
 return VAR_0;
}
