
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int enqueue_time; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0)
{
 FUNC_0(VAR_0)->control.enqueue_time = FUNC_1();
}
