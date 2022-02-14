
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct hci_event_hdr {scalar_t__ evt; } ;
struct hci_ev_cmd_complete {int opcode; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*,char*,...) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static bool FUNC_4(struct hci_dev *VAR_3, u16 VAR_4,
     u8 VAR_5, struct sk_buff *VAR_6)
{
 struct hci_ev_cmd_complete *VAR_7;
 struct hci_event_hdr *VAR_8;

 if (!VAR_6)
  return 0;

 if (VAR_6->len < sizeof(*VAR_8)) {
  FUNC_2(VAR_3, "too short HCI event");
  return 0;
 }

 VAR_8 = (void *) VAR_6->data;
 FUNC_3(VAR_6, VAR_0);

 if (VAR_5) {
  if (VAR_8->evt != VAR_5)
   return 0;
  return 1;
 }




 if (VAR_8->evt == VAR_2)
  return 0;

 if (VAR_8->evt != VAR_1) {
  FUNC_2(VAR_3, "last event is not cmd complete (0x%2.2x)",
      VAR_8->evt);
  return 0;
 }

 if (VAR_6->len < sizeof(*VAR_7)) {
  FUNC_2(VAR_3, "too short cmd_complete event");
  return 0;
 }

 VAR_7 = (void *) VAR_6->data;
 FUNC_3(VAR_6, sizeof(*VAR_7));

 if (VAR_4 != FUNC_1(VAR_7->opcode)) {
  FUNC_0("opcode doesn't match (0x%2.2x != 0x%2.2x)", VAR_4,
         FUNC_1(VAR_7->opcode));
  return 0;
 }

 return 1;
}
