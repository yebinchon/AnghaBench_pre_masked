
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_hci {int hci_channel; int hci_dev; int hci_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct hci_dev {int id; } ;
struct TYPE_2__ {int channel; struct hci_dev* hdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4,
       int VAR_5)
{
 struct sockaddr_hci *VAR_6 = (struct sockaddr_hci *)VAR_4;
 struct sock *VAR_7 = VAR_3->sk;
 struct hci_dev *VAR_8;
 int VAR_9 = 0;

 FUNC_0("sock %p sk %p", VAR_3, VAR_7);

 if (VAR_5)
  return -VAR_2;

 FUNC_2(VAR_7);

 VAR_8 = FUNC_1(VAR_7)->hdev;
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto done;
 }

 VAR_6->hci_family = VAR_0;
 VAR_6->hci_dev = VAR_8->id;
 VAR_6->hci_channel= FUNC_1(VAR_7)->channel;
 VAR_9 = sizeof(*VAR_6);

done:
 FUNC_3(VAR_7);
 return VAR_9;
}
