
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_ack_backlog; } ;
struct l2cap_chan {struct sock* data; } ;
struct TYPE_2__ {struct l2cap_chan* chan; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,struct sock*,int) ;
 int FUNC_2 (struct sock*,int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 struct sock* FUNC_4 (int ,int *,int ,int ,int ) ;
 int FUNC_5 (struct sock*,struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static struct l2cap_chan *FUNC_10(struct l2cap_chan *VAR_2)
{
 struct sock *VAR_3, *VAR_4 = VAR_2->data;

 FUNC_6(VAR_4);


 if (FUNC_8(VAR_4)) {
  FUNC_0("backlog full %d", VAR_4->sk_ack_backlog);
  FUNC_7(VAR_4);
  return ((void*)0);
 }

 VAR_3 = FUNC_4(FUNC_9(VAR_4), ((void*)0), VAR_0,
         VAR_1, 0);
 if (!VAR_3) {
  FUNC_7(VAR_4);
  return ((void*)0);
        }

 FUNC_2(VAR_3, VAR_0);

 FUNC_5(VAR_3, VAR_4);

 FUNC_1(VAR_4, VAR_3, 0);

 FUNC_7(VAR_4);

 return FUNC_3(VAR_3)->chan;
}
