
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_action_param {struct idletimer_tg_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct idletimer_tg_info {int timeout; TYPE_1__* timer; int label; } ;
struct TYPE_2__ {int timer; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct sk_buff *VAR_2,
      const struct xt_action_param *VAR_3)
{
 const struct idletimer_tg_info *VAR_4 = VAR_3->targinfo;

 FUNC_2("resetting timer %s, timeout period %u\n",
   VAR_4->label, VAR_4->timeout);

 FUNC_0(&VAR_4->timer->timer,
    FUNC_1(VAR_4->timeout * 1000) + VAR_1);

 return VAR_0;
}
