
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_cmd_rej_unk {int reason; } ;
struct l2cap_cmd_hdr {int ident; int code; int len; } ;
struct hci_conn {scalar_t__ type; } ;
typedef int rej ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_cmd_hdr*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct l2cap_conn*,int ,int ,int,struct l2cap_cmd_rej_unk*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_8(struct l2cap_conn *VAR_4,
     struct sk_buff *VAR_5)
{
 struct hci_conn *VAR_6 = VAR_4->hcon;
 struct l2cap_cmd_hdr *VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (VAR_6->type != VAR_3)
  goto drop;

 if (VAR_5->len < VAR_0)
  goto drop;

 VAR_7 = (void *) VAR_5->data;
 FUNC_7(VAR_5, VAR_0);

 VAR_8 = FUNC_6(VAR_7->len);

 FUNC_0("code 0x%2.2x len %d id 0x%2.2x", VAR_7->code, VAR_8, VAR_7->ident);

 if (VAR_8 != VAR_5->len || !VAR_7->ident) {
  FUNC_0("corrupted command");
  goto drop;
 }

 VAR_9 = FUNC_4(VAR_4, VAR_7, VAR_8, VAR_5->data);
 if (VAR_9) {
  struct l2cap_cmd_rej_unk VAR_10;

  FUNC_1("Wrong link type (%d)", VAR_9);

  VAR_10.reason = FUNC_2(VAR_2);
  FUNC_5(VAR_4, VAR_7->ident, VAR_1,
          sizeof(VAR_10), &VAR_10);
 }

drop:
 FUNC_3(VAR_5);
}
