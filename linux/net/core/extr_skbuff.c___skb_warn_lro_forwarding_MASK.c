
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(const struct sk_buff *VAR_0)
{
 FUNC_0("%s: received packets cannot be forwarded while LRO is enabled\n",
        VAR_0->dev->name);
}
