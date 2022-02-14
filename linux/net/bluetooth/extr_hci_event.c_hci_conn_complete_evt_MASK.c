
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_conn_complete {scalar_t__ link_type; scalar_t__ status; int handle; int bdaddr; } ;
struct hci_dev {scalar_t__ hci_ver; int flags; int name; } ;
struct hci_cp_read_remote_features {int pkt_type; int handle; } ;
struct hci_cp_change_conn_ptype {int pkt_type; int handle; } ;
struct hci_conn {scalar_t__ type; int dst_type; int dst; int state; int pkt_type; int out; int flags; int disc_timeout; int handle; } ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_conn*) ;
 struct hci_conn* FUNC_6 (struct hci_dev*,scalar_t__,int *) ;
 int FUNC_7 (struct hci_conn*) ;
 int FUNC_8 (struct hci_conn*) ;
 int FUNC_9 (struct hci_conn*,scalar_t__) ;
 int FUNC_10 (struct hci_conn*) ;
 int FUNC_11 (struct hci_dev*) ;
 int FUNC_12 (struct hci_dev*) ;
 int FUNC_13 (struct hci_dev*,int *) ;
 int FUNC_14 (struct hci_dev*) ;
 int FUNC_15 (struct hci_conn*,scalar_t__) ;
 int FUNC_16 (struct hci_dev*,int ,int,struct hci_cp_read_remote_features*) ;
 int FUNC_17 (struct hci_dev*,int *,scalar_t__,int ,scalar_t__) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static void FUNC_20(struct hci_dev *VAR_15, struct sk_buff *VAR_16)
{
 struct hci_ev_conn_complete *VAR_17 = (void *) VAR_16->data;
 struct hci_conn *VAR_18;

 FUNC_0("%s", VAR_15->name);

 FUNC_11(VAR_15);

 VAR_18 = FUNC_6(VAR_15, VAR_17->link_type, &VAR_17->bdaddr);
 if (!VAR_18) {
  if (VAR_17->link_type != VAR_14)
   goto unlock;

  VAR_18 = FUNC_6(VAR_15, VAR_5, &VAR_17->bdaddr);
  if (!VAR_18)
   goto unlock;

  VAR_18->type = VAR_14;
 }

 if (!VAR_17->status) {
  VAR_18->handle = FUNC_1(VAR_17->handle);

  if (VAR_18->type == VAR_0) {
   VAR_18->state = VAR_3;
   FUNC_7(VAR_18);

   if (!VAR_18->out && !FUNC_8(VAR_18) &&
       !FUNC_13(VAR_15, &VAR_17->bdaddr))
    VAR_18->disc_timeout = VAR_13;
   else
    VAR_18->disc_timeout = VAR_9;
  } else
   VAR_18->state = VAR_4;

  FUNC_10(VAR_18);
  FUNC_3(VAR_18);

  if (FUNC_19(VAR_6, &VAR_15->flags))
   FUNC_18(VAR_7, &VAR_18->flags);

  if (FUNC_19(VAR_10, &VAR_15->flags))
   FUNC_18(VAR_8, &VAR_18->flags);


  if (VAR_18->type == VAR_0) {
   struct hci_cp_read_remote_features VAR_19;
   VAR_19.handle = VAR_17->handle;
   FUNC_16(VAR_15, VAR_12,
         sizeof(VAR_19), &VAR_19);

   FUNC_14(VAR_15);
  }


  if (!VAR_18->out && VAR_15->hci_ver < VAR_1) {
   struct hci_cp_change_conn_ptype VAR_20;
   VAR_20.handle = VAR_17->handle;
   VAR_20.pkt_type = FUNC_2(VAR_18->pkt_type);
   FUNC_16(VAR_15, VAR_11, sizeof(VAR_20),
         &VAR_20);
  }
 } else {
  VAR_18->state = VAR_2;
  if (VAR_18->type == VAR_0)
   FUNC_17(VAR_15, &VAR_18->dst, VAR_18->type,
         VAR_18->dst_type, VAR_17->status);
 }

 if (VAR_18->type == VAR_0)
  FUNC_15(VAR_18, VAR_17->status);

 if (VAR_17->status) {
  FUNC_9(VAR_18, VAR_17->status);
  FUNC_5(VAR_18);
 } else if (VAR_17->link_type != VAR_0)
  FUNC_9(VAR_18, VAR_17->status);

unlock:
 FUNC_12(VAR_15);

 FUNC_4(VAR_15);
}
