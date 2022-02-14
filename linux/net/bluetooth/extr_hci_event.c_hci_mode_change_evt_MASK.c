
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_mode_change {scalar_t__ mode; int status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ mode; int flags; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_conn*,int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct hci_ev_mode_change *VAR_6 = (void *) VAR_5->data;
 struct hci_conn *VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_4->name, VAR_6->status);

 FUNC_4(VAR_4);

 VAR_7 = FUNC_3(VAR_4, FUNC_1(VAR_6->handle));
 if (VAR_7) {
  VAR_7->mode = VAR_6->mode;

  if (!FUNC_8(VAR_1,
     &VAR_7->flags)) {
   if (VAR_7->mode == VAR_0)
    FUNC_7(VAR_2, &VAR_7->flags);
   else
    FUNC_2(VAR_2, &VAR_7->flags);
  }

  if (FUNC_8(VAR_3, &VAR_7->flags))
   FUNC_6(VAR_7, VAR_6->status);
 }

 FUNC_5(VAR_4);
}
