
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ pending_sec_level; int conn_timeout; int sec_level; scalar_t__ dst_type; int flags; int state; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hci_conn* FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *,int ) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int *,scalar_t__) ;
 int FUNC_4 (struct hci_conn*) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct hci_dev*,int *,scalar_t__) ;
 int FUNC_7 (struct hci_dev*) ;
 scalar_t__ FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (int ,int *) ;

struct hci_conn *FUNC_10(struct hci_dev *VAR_10, bdaddr_t *VAR_11,
         u8 VAR_12, u8 VAR_13,
         u16 VAR_14)
{
 struct hci_conn *VAR_15;


 if (!FUNC_5(VAR_10, VAR_7)) {
  if (FUNC_8(VAR_10))
   return FUNC_1(-VAR_3);

  return FUNC_1(-VAR_5);
 }
 VAR_15 = FUNC_3(VAR_10, VAR_11, VAR_12);
 if (VAR_15) {
  if (VAR_15->pending_sec_level < VAR_13)
   VAR_15->pending_sec_level = VAR_13;
  goto done;
 }

 FUNC_0("requesting refresh of dst_addr");

 VAR_15 = FUNC_2(VAR_10, VAR_9, VAR_11, VAR_8);
 if (!VAR_15)
  return FUNC_1(-VAR_4);

 if (FUNC_6(VAR_10, VAR_11, VAR_12) < 0)
  return FUNC_1(-VAR_2);

 VAR_15->state = VAR_0;
 FUNC_9(VAR_6, &VAR_15->flags);
 VAR_15->dst_type = VAR_12;
 VAR_15->sec_level = VAR_1;
 VAR_15->pending_sec_level = VAR_13;
 VAR_15->conn_timeout = VAR_14;

 FUNC_7(VAR_10);

done:
 FUNC_4(VAR_15);
 return VAR_15;
}
