
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; int priority; int protocol; } ;
struct net_bridge_port {TYPE_2__* dev; TYPE_1__* br; } ;
struct TYPE_5__ {int dev_addr; } ;
struct TYPE_4__ {int group_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int *,struct sk_buff*,int *,TYPE_2__*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*,unsigned char const*,int) ;
 int VAR_8 ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct net_bridge_port *VAR_9,
    const unsigned char *VAR_10, int VAR_11)
{
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_2(VAR_11+VAR_3);
 if (!VAR_12)
  return;

 VAR_12->dev = VAR_9->dev;
 VAR_12->protocol = FUNC_4(VAR_0);
 VAR_12->priority = VAR_7;

 FUNC_8(VAR_12, VAR_3);
 FUNC_1(VAR_12, VAR_10, VAR_11);

 FUNC_6(VAR_12, VAR_2, VAR_4,
       VAR_4, VAR_1);
 FUNC_7(VAR_12);

 FUNC_5(VAR_12, VAR_9->dev->dev_addr, VAR_9->br->group_addr);

 FUNC_9(VAR_12);

 FUNC_0(VAR_5, VAR_6,
  FUNC_3(VAR_9->dev), ((void*)0), VAR_12, ((void*)0), VAR_12->dev,
  VAR_8);
}
