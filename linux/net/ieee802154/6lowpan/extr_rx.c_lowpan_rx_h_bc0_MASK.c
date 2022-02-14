
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
typedef int lowpan_rx_result ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*) ;
 int * FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static lowpan_rx_result FUNC_3(struct sk_buff *VAR_2)
{
 if (!FUNC_0(*FUNC_2(VAR_2)))
  return VAR_0;

 FUNC_1("%s: %s\n", VAR_2->dev->name,
        "6LoWPAN BC0 not supported\n");

 return VAR_1;
}
