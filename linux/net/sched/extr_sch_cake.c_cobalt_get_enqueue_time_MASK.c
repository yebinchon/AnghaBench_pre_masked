
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int ktime_t ;
struct TYPE_2__ {int enqueue_time; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;

__attribute__((used)) static ktime_t FUNC_1(const struct sk_buff *VAR_0)
{
 return FUNC_0(VAR_0)->enqueue_time;
}
