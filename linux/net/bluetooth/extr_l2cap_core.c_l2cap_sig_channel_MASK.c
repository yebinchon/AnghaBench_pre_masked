
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_cmd_rej_unk {int reason; } ;
struct l2cap_cmd_hdr {int ident; int code; int len; } ;
struct hci_conn {scalar_t__ type; } ;
typedef int rej ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int,int *) ;
 int FUNC_5 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_6 (struct l2cap_conn*,int ,int ,int,struct l2cap_cmd_rej_unk*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct l2cap_cmd_hdr*,int *,int) ;

__attribute__((used)) static inline void FUNC_9(struct l2cap_conn *VAR_4,
         struct sk_buff *VAR_5)
{
 struct hci_conn *VAR_6 = VAR_4->hcon;
 u8 *VAR_7 = VAR_5->data;
 int VAR_8 = VAR_5->len;
 struct l2cap_cmd_hdr VAR_9;
 int VAR_10;

 FUNC_5(VAR_4, VAR_5);

 if (VAR_6->type != VAR_0)
  goto drop;

 while (VAR_8 >= VAR_1) {
  u16 VAR_11;
  FUNC_8(&VAR_9, VAR_7, VAR_1);
  VAR_7 += VAR_1;
  VAR_8 -= VAR_1;

  VAR_11 = FUNC_7(VAR_9.len);

  FUNC_0("code 0x%2.2x len %d id 0x%2.2x", VAR_9.code, VAR_11,
         VAR_9.ident);

  if (VAR_11 > VAR_8 || !VAR_9.ident) {
   FUNC_0("corrupted command");
   break;
  }

  VAR_10 = FUNC_4(VAR_4, &VAR_9, VAR_11, VAR_7);
  if (VAR_10) {
   struct l2cap_cmd_rej_unk VAR_12;

   FUNC_1("Wrong link type (%d)", VAR_10);

   VAR_12.reason = FUNC_2(VAR_3);
   FUNC_6(VAR_4, VAR_9.ident, VAR_2,
           sizeof(VAR_12), &VAR_12);
  }

  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;
 }

drop:
 FUNC_3(VAR_5);
}
