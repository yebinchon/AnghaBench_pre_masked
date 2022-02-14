
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {scalar_t__ dst_type; int src_type; int dst; int src; TYPE_1__* ops; int scid; } ;
struct hci_dev {int blacklist; } ;
struct hci_conn {scalar_t__ type; int dst; int src; struct hci_dev* hdev; } ;
struct TYPE_2__ {struct l2cap_chan* (* new_connection ) (struct l2cap_chan*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct hci_conn*,int *,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct l2cap_conn*,struct l2cap_chan*) ;
 scalar_t__ FUNC_2 (struct l2cap_conn*,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int *,scalar_t__) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_chan*) ;
 int FUNC_10 (struct l2cap_chan*) ;
 struct l2cap_conn* FUNC_11 (struct hci_conn*) ;
 int FUNC_12 (struct hci_conn*,int ) ;
 int FUNC_13 (struct l2cap_conn*) ;
 struct l2cap_chan* FUNC_14 (struct l2cap_chan*,struct hci_conn*) ;
 struct l2cap_chan* FUNC_15 (struct l2cap_chan*) ;

__attribute__((used)) static void FUNC_16(struct hci_conn *VAR_2, u8 VAR_3)
{
 struct hci_dev *VAR_4 = VAR_2->hdev;
 struct l2cap_conn *VAR_5;
 struct l2cap_chan *VAR_6;
 u8 VAR_7;

 if (VAR_2->type != VAR_0 && VAR_2->type != VAR_1)
  return;

 FUNC_0("hcon %p bdaddr %pMR status %d", VAR_2, &VAR_2->dst, VAR_3);

 if (VAR_3) {
  FUNC_12(VAR_2, FUNC_6(VAR_3));
  return;
 }

 VAR_5 = FUNC_11(VAR_2);
 if (!VAR_5)
  return;

 VAR_7 = FUNC_4(VAR_2);


 if (FUNC_7(&VAR_4->blacklist, &VAR_2->dst, VAR_7))
  return;






 VAR_6 = FUNC_14(((void*)0), VAR_2);
 while (VAR_6) {
  struct l2cap_chan *VAR_8, *VAR_9;


  if (FUNC_2(VAR_5, VAR_6->scid))
   goto next;

  FUNC_8(VAR_6);
  VAR_8 = VAR_6->ops->new_connection(VAR_6);
  if (VAR_8) {
   FUNC_3(&VAR_8->src, &VAR_2->src);
   FUNC_3(&VAR_8->dst, &VAR_2->dst);
   VAR_8->src_type = FUNC_5(VAR_2);
   VAR_8->dst_type = VAR_7;

   FUNC_1(VAR_5, VAR_8);
  }

  FUNC_10(VAR_6);
next:
  VAR_9 = FUNC_14(VAR_6, VAR_2);
  FUNC_9(VAR_6);
  VAR_6 = VAR_9;
 }

 FUNC_13(VAR_5);
}
