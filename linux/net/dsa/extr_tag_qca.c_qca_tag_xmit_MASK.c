
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct dsa_port {int index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct dsa_port *VAR_7 = FUNC_1(VAR_6);
 u16 *VAR_8, VAR_9;

 VAR_6->stats.tx_packets++;
 VAR_6->stats.tx_bytes += VAR_5->len;

 if (FUNC_4(VAR_5, 0) < 0)
  return ((void*)0);

 FUNC_5(VAR_5, VAR_1);

 FUNC_3(VAR_5->data, VAR_5->data + VAR_1, 2 * VAR_0);
 VAR_8 = (u16 *)(VAR_5->data + 2 * VAR_0);


 VAR_9 = VAR_2 << VAR_4 |
  VAR_3 | FUNC_0(VAR_7->index);

 *VAR_8 = FUNC_2(VAR_9);

 return VAR_5;
}
