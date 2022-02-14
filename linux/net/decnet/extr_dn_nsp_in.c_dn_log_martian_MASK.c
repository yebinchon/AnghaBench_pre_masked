
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct dn_skb_cb {int dst_port; int src_port; int dst; int src; } ;
struct TYPE_2__ {char* name; } ;


 struct dn_skb_cb* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, const char *VAR_2)
{
 if (VAR_0) {
  char *VAR_3 = VAR_1->dev ? VAR_1->dev->name : "???";
  struct dn_skb_cb *VAR_4 = FUNC_0(VAR_1);
  FUNC_2("DECnet: Martian packet (%s) dev=%s src=0x%04hx dst=0x%04hx srcport=0x%04hx dstport=0x%04hx\n",
         VAR_2, VAR_3,
         FUNC_1(VAR_4->src),
         FUNC_1(VAR_4->dst),
         FUNC_1(VAR_4->src_port),
         FUNC_1(VAR_4->dst_port));
 }
}
