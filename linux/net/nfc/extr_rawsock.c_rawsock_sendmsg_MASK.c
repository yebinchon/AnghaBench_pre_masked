
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct TYPE_4__ {int lock; } ;
struct sock {TYPE_2__ sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct msghdr {int msg_flags; scalar_t__ msg_namelen; } ;
struct TYPE_3__ {int tx_work_scheduled; int tx_work; struct nfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct msghdr*,size_t) ;
 struct sk_buff* FUNC_3 (struct nfc_dev*,struct sock*,int ,size_t,int*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (char*,struct socket*,struct sock*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,size_t) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_3, struct msghdr *VAR_4, size_t VAR_5)
{
 struct sock *VAR_6 = VAR_3->sk;
 struct nfc_dev *VAR_7 = FUNC_4(VAR_6)->dev;
 struct sk_buff *VAR_8;
 int VAR_9;

 FUNC_5("sock=%p sk=%p len=%zu\n", VAR_3, VAR_6, VAR_5);

 if (VAR_4->msg_namelen)
  return -VAR_1;

 if (VAR_3->state != VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7, VAR_6, VAR_4->msg_flags, VAR_5, &VAR_9);
 if (VAR_8 == ((void*)0))
  return VAR_9;

 VAR_9 = FUNC_2(FUNC_7(VAR_8, VAR_5), VAR_4, VAR_5);
 if (VAR_9 < 0) {
  FUNC_1(VAR_8);
  return VAR_9;
 }

 FUNC_8(&VAR_6->sk_write_queue.lock);
 FUNC_0(&VAR_6->sk_write_queue, VAR_8);
 if (!FUNC_4(VAR_6)->tx_work_scheduled) {
  FUNC_6(&FUNC_4(VAR_6)->tx_work);
  FUNC_4(VAR_6)->tx_work_scheduled = 1;
 }
 FUNC_9(&VAR_6->sk_write_queue.lock);

 return VAR_5;
}
