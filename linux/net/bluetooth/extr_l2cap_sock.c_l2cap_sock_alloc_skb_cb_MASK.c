
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_priority; } ;
struct sk_buff {int priority; } ;
struct l2cap_chan {struct sock* data; } ;
struct TYPE_3__ {struct l2cap_chan* chan; } ;
struct TYPE_4__ {TYPE_1__ l2cap; } ;


 struct sk_buff* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sock*,unsigned long,int,int*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_chan*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct l2cap_chan *VAR_0,
            unsigned long VAR_1,
            unsigned long VAR_2, int VAR_3)
{
 struct sock *VAR_4 = VAR_0->data;
 struct sk_buff *VAR_5;
 int VAR_6;

 FUNC_4(VAR_0);
 VAR_5 = FUNC_2(VAR_4, VAR_1 + VAR_2, VAR_3, &VAR_6);
 FUNC_3(VAR_0);

 if (!VAR_5)
  return FUNC_0(VAR_6);

 VAR_5->priority = VAR_4->sk_priority;

 FUNC_1(VAR_5)->l2cap.chan = VAR_0;

 return VAR_5;
}
