
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_le_remote_feat_complete {int status; int features; int handle; } ;
struct hci_dev {int* le_features; int name; } ;
struct hci_conn {scalar_t__ state; int out; int * features; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_conn*,int) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_3,
         struct sk_buff *VAR_4)
{
 struct hci_ev_le_remote_feat_complete *VAR_5 = (void *)VAR_4->data;
 struct hci_conn *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_5->status);

 FUNC_5(VAR_3);

 VAR_6 = FUNC_3(VAR_3, FUNC_1(VAR_5->handle));
 if (VAR_6) {
  if (!VAR_5->status)
   FUNC_7(VAR_6->features[0], VAR_5->features, 8);

  if (VAR_6->state == VAR_0) {
   __u8 VAR_7;
   if ((VAR_3->le_features[0] & VAR_2) &&
       !VAR_6->out && VAR_5->status == 0x1a)
    VAR_7 = 0x00;
   else
    VAR_7 = VAR_5->status;

   VAR_6->state = VAR_1;
   FUNC_4(VAR_6, VAR_7);
   FUNC_2(VAR_6);
  }
 }

 FUNC_6(VAR_3);
}
