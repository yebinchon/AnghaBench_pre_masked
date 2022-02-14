
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xt_action_param {struct xt_NFQ_info_v3* targinfo; } ;
struct xt_NFQ_info_v3 {int queues_total; int flags; scalar_t__ queuenum; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,scalar_t__,int,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_4(struct sk_buff *VAR_4, const struct xt_action_param *VAR_5)
{
 const struct xt_NFQ_info_v3 *VAR_6 = VAR_5->targinfo;
 u32 VAR_7 = VAR_6->queuenum;
 int VAR_8;

 if (VAR_6->queues_total > 1) {
  if (VAR_6->flags & VAR_1) {
   int VAR_9 = FUNC_2();

   VAR_7 = VAR_6->queuenum + VAR_9 % VAR_6->queues_total;
  } else {
   VAR_7 = FUNC_1(VAR_4, VAR_7, VAR_6->queues_total,
          FUNC_3(VAR_5), VAR_3);
  }
 }

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_6->flags & VAR_0)
  VAR_8 |= VAR_2;

 return VAR_8;
}
