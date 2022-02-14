
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char len; unsigned char* data; } ;
struct hidp_session {scalar_t__ hid; scalar_t__ input; } ;


 int FUNC_0 (char*,...) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hidp_session*,struct sk_buff*) ;
 int FUNC_2 (struct hidp_session*,int ,unsigned char*,unsigned char,int) ;
 int FUNC_3 (struct hidp_session*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct hidp_session *VAR_3,
    struct sk_buff *VAR_4)
{
 unsigned char VAR_5;

 FUNC_0("session %p skb %p len %d", VAR_3, VAR_4, VAR_4->len);

 VAR_5 = VAR_4->data[0];
 FUNC_5(VAR_4, 1);

 if (VAR_5 == (VAR_1 | VAR_0)) {
  FUNC_3(VAR_3);

  if (VAR_3->input)
   FUNC_1(VAR_3, VAR_4);

  if (VAR_3->hid) {
   FUNC_2(VAR_3, VAR_2,
         VAR_4->data, VAR_4->len, 1);
   FUNC_0("report len %d", VAR_4->len);
  }
 } else {
  FUNC_0("Unsupported protocol header 0x%02x", VAR_5);
 }

 FUNC_4(VAR_4);
}
