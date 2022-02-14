
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xt_action_param {struct xt_NFQ_info_v1* targinfo; } ;
struct xt_NFQ_info_v1 {int queues_total; int queuenum; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*,int ,int,int ,int ) ;
 int FUNC_2 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_3(struct sk_buff *VAR_1, const struct xt_action_param *VAR_2)
{
 const struct xt_NFQ_info_v1 *VAR_3 = VAR_2->targinfo;
 u32 VAR_4 = VAR_3->queuenum;

 if (VAR_3->queues_total > 1) {
  VAR_4 = FUNC_1(VAR_1, VAR_4, VAR_3->queues_total,
         FUNC_2(VAR_2), VAR_0);
 }
 return FUNC_0(VAR_4);
}
