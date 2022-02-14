
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nfc_dev {int dummy; } ;
struct netlink_callback {long* args; TYPE_1__* nlh; int skb; int seq; } ;
struct class_dev_iter {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_2 ;
 struct class_dev_iter* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct class_dev_iter*) ;
 struct nfc_dev* FUNC_5 (struct class_dev_iter*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct sk_buff*,struct nfc_dev*,int ,int ,struct netlink_callback*,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5,
     struct netlink_callback *VAR_6)
{
 struct class_dev_iter *VAR_7 = (struct class_dev_iter *) VAR_6->args[0];
 struct nfc_dev *VAR_8 = (struct nfc_dev *) VAR_6->args[1];
 bool VAR_9 = 0;

 if (!VAR_7) {
  VAR_9 = 1;
  VAR_7 = FUNC_1(sizeof(struct class_dev_iter), VAR_1);
  if (!VAR_7)
   return -VAR_0;
  VAR_6->args[0] = (long) VAR_7;
 }

 FUNC_2(&VAR_4);

 VAR_6->seq = VAR_3;

 if (VAR_9) {
  FUNC_4(VAR_7);
  VAR_8 = FUNC_5(VAR_7);
 }

 while (VAR_8) {
  int VAR_10;

  VAR_10 = FUNC_6(VAR_5, VAR_8, FUNC_0(VAR_6->skb).portid,
       VAR_6->nlh->nlmsg_seq, VAR_6, VAR_2);
  if (VAR_10 < 0)
   break;

  VAR_8 = FUNC_5(VAR_7);
 }

 FUNC_3(&VAR_4);

 VAR_6->args[1] = (long) VAR_8;

 return VAR_5->len;
}
