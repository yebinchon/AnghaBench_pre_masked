
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct inquiry_entry {int name_state; } ;
struct discovery_state {scalar_t__ state; int resolve; } ;
struct hci_dev {int quirks; int flags; int name; struct discovery_state discovery; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 struct inquiry_entry* FUNC_6 (struct hci_dev*,int ,int ) ;
 scalar_t__ FUNC_7 (struct hci_dev*,struct inquiry_entry*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(struct hci_dev *VAR_10, struct sk_buff *VAR_11)
{
 __u8 VAR_12 = *((__u8 *) VAR_11->data);
 struct discovery_state *VAR_13 = &VAR_10->discovery;
 struct inquiry_entry *VAR_14;

 FUNC_0("%s status 0x%2.2x", VAR_10->name, VAR_12);

 FUNC_1(VAR_10);

 if (!FUNC_10(VAR_4, &VAR_10->flags))
  return;

 FUNC_9();
 FUNC_12(&VAR_10->flags, VAR_4);

 if (!FUNC_3(VAR_10, VAR_6))
  return;

 FUNC_2(VAR_10);

 if (VAR_13->state != VAR_1)
  goto unlock;

 if (FUNC_8(&VAR_13->resolve)) {







  if (!FUNC_3(VAR_10, VAR_5) ||
      !FUNC_11(VAR_7, &VAR_10->quirks))
   FUNC_5(VAR_10, VAR_3);
  goto unlock;
 }

 VAR_14 = FUNC_6(VAR_10, VAR_0, VAR_8);
 if (VAR_14 && FUNC_7(VAR_10, VAR_14) == 0) {
  VAR_14->name_state = VAR_9;
  FUNC_5(VAR_10, VAR_2);
 } else {







  if (!FUNC_3(VAR_10, VAR_5) ||
      !FUNC_11(VAR_7, &VAR_10->quirks))
   FUNC_5(VAR_10, VAR_3);
 }

unlock:
 FUNC_4(VAR_10);
}
