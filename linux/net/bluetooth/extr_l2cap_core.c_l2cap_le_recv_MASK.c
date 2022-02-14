
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct l2cap_chan {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* recv ) (struct l2cap_chan*,struct sk_buff*) ;} ;


 int FUNC_0 (char*,struct l2cap_chan*,int ) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct l2cap_chan *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 FUNC_0("SDU reassemble complete: chan %p skb->len %u", VAR_0, VAR_1->len);


 VAR_2 = VAR_0->ops->recv(VAR_0, VAR_1);


 FUNC_1(VAR_0);

 return VAR_2;
}
