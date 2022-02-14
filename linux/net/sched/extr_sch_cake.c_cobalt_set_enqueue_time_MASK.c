
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int ktime_t ;
struct TYPE_2__ {int enqueue_time; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0,
        ktime_t VAR_1)
{
 FUNC_0(VAR_0)->enqueue_time = VAR_1;
}
