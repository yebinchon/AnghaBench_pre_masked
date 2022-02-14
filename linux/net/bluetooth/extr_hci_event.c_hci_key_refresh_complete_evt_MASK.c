
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_key_refresh_complete {scalar_t__ status; int handle; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ type; scalar_t__ state; int disc_timeout; int flags; int pending_sec_level; int sec_level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hci_conn*,scalar_t__) ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_conn*,scalar_t__) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct hci_conn*,int ) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_6,
      struct sk_buff *VAR_7)
{
 struct hci_ev_key_refresh_complete *VAR_8 = (void *) VAR_7->data;
 struct hci_conn *VAR_9;

 FUNC_0("%s status 0x%2.2x handle 0x%4.4x", VAR_6->name, VAR_8->status,
        FUNC_1(VAR_8->handle));

 FUNC_8(VAR_6);

 VAR_9 = FUNC_5(VAR_6, FUNC_1(VAR_8->handle));
 if (!VAR_9)
  goto unlock;




 if (VAR_9->type != VAR_5)
  goto unlock;

 if (!VAR_8->status)
  VAR_9->sec_level = VAR_9->pending_sec_level;

 FUNC_2(VAR_2, &VAR_9->flags);

 if (VAR_8->status && VAR_9->state == VAR_1) {
  FUNC_10(VAR_9, VAR_4);
  FUNC_4(VAR_9);
  goto unlock;
 }

 if (VAR_9->state == VAR_0) {
  if (!VAR_8->status)
   VAR_9->state = VAR_1;

  FUNC_7(VAR_9, VAR_8->status);
  FUNC_4(VAR_9);
 } else {
  FUNC_3(VAR_9, VAR_8->status);

  FUNC_6(VAR_9);
  VAR_9->disc_timeout = VAR_3;
  FUNC_4(VAR_9);
 }

unlock:
 FUNC_9(VAR_6);
}
