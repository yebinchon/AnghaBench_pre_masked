
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timer_t ;
struct signal_struct {int dummy; } ;
struct k_itimer {int dummy; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {struct signal_struct* signal; } ;


 struct k_itimer* FUNC_0 (struct hlist_head*,struct signal_struct*,int ) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_1 (struct signal_struct*,int ) ;
 struct hlist_head* VAR_1 ;

__attribute__((used)) static struct k_itimer *FUNC_2(timer_t VAR_2)
{
 struct signal_struct *VAR_3 = VAR_0->signal;
 struct hlist_head *VAR_4 = &VAR_1[FUNC_1(VAR_3, VAR_2)];

 return FUNC_0(VAR_4, VAR_3, VAR_2);
}
