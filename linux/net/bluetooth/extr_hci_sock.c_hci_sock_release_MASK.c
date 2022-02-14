
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_write_queue; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct hci_dev {int promisc; } ;
struct TYPE_2__ {int channel; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct socket*,struct sock*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sock*) ;
 struct sk_buff* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (int const,struct sk_buff*,int ,int *) ;
 int VAR_2 ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct hci_dev*) ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;

__attribute__((used)) static int FUNC_15(struct socket *VAR_4)
{
 struct sock *VAR_5 = VAR_4->sk;
 struct hci_dev *VAR_6;
 struct sk_buff *VAR_7;

 FUNC_0("sock %p sk %p", VAR_4, VAR_5);

 if (!VAR_5)
  return 0;

 switch (FUNC_7(VAR_5)->channel) {
 case 130:
  FUNC_1(&VAR_3);
  break;
 case 129:
 case 128:
 case 131:

  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7) {
   FUNC_8(130, VAR_7,
         VAR_0, ((void*)0));
   FUNC_10(VAR_7);
  }

  FUNC_9(VAR_5);
  break;
 }

 FUNC_2(&VAR_2, VAR_5);

 VAR_6 = FUNC_7(VAR_5)->hdev;
 if (VAR_6) {
  if (FUNC_7(VAR_5)->channel == 128) {
   FUNC_5(VAR_6);
   FUNC_4(VAR_6, VAR_1);
   FUNC_11(VAR_6);
  }

  FUNC_1(&VAR_6->promisc);
  FUNC_6(VAR_6);
 }

 FUNC_13(VAR_5);

 FUNC_12(&VAR_5->sk_receive_queue);
 FUNC_12(&VAR_5->sk_write_queue);

 FUNC_14(VAR_5);
 return 0;
}
