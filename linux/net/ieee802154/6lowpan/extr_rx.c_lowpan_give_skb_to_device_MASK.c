
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; TYPE_2__* dev; int protocol; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1)
{
 VAR_1->protocol = FUNC_0(VAR_0);
 VAR_1->dev->stats.rx_packets++;
 VAR_1->dev->stats.rx_bytes += VAR_1->len;

 return FUNC_1(VAR_1);
}
