
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct pktgen_dev {int cur_pkt_size; int pkt_overhead; int flags; int node; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct net_device*) ;
 unsigned int VAR_2 ;
 struct sk_buff* FUNC_1 (unsigned int,int ,int ,int) ;
 struct sk_buff* FUNC_2 (struct net_device*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct net_device *VAR_3,
     struct pktgen_dev *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3);
 struct sk_buff *VAR_6 = ((void*)0);
 unsigned int VAR_7;

 VAR_7 = VAR_4->cur_pkt_size + 64 + VAR_5 + VAR_4->pkt_overhead;
 if (VAR_4->flags & VAR_0) {
  int VAR_8 = VAR_4->node >= 0 ? VAR_4->node : FUNC_4();

  VAR_6 = FUNC_1(VAR_2 + VAR_7, VAR_1, 0, VAR_8);
  if (FUNC_3(VAR_6)) {
   FUNC_5(VAR_6, VAR_2);
   VAR_6->dev = VAR_3;
  }
 } else {
   VAR_6 = FUNC_2(VAR_3, VAR_7, VAR_1);
 }


 if (FUNC_3(VAR_6))
  FUNC_5(VAR_6, VAR_5 - 16);

 return VAR_6;
}
