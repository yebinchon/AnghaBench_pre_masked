
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; int data; scalar_t__ cb; } ;
struct cmtp_session {unsigned int mtu; int transmit; } ;
struct cmtp_scb {int id; scalar_t__ data; } ;


 int FUNC_0 (char*,struct cmtp_session*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct cmtp_session*) ;
 int FUNC_4 (struct cmtp_session*,int) ;
 int FUNC_5 (struct cmtp_session*,int ,unsigned int) ;
 int FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct sk_buff*,unsigned char*,unsigned int) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*,unsigned int) ;
 unsigned char* FUNC_11 (struct sk_buff*,unsigned int) ;
 int FUNC_12 (int *,struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_14(struct cmtp_session *VAR_2)
{
 struct sk_buff *VAR_3, *VAR_4;
 unsigned char *VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_0("session %p", VAR_2);

 VAR_4 = FUNC_2(VAR_2->mtu, VAR_0);
 if (!VAR_4) {
  FUNC_1("Can't allocate memory for new frame");
  return;
 }

 while ((VAR_3 = FUNC_9(&VAR_2->transmit))) {
  struct cmtp_scb *VAR_8 = (void *) VAR_3->cb;

  VAR_7 = VAR_2->mtu - VAR_4->len;
  if (VAR_7 < 5) {
   FUNC_5(VAR_2, VAR_4->data, VAR_4->len);
   FUNC_13(VAR_4, 0);
   VAR_7 = VAR_2->mtu;
  }

  VAR_6 = FUNC_7(VAR_1, ((VAR_7 < 258) ? (VAR_7 - 2) : (VAR_7 - 3)), VAR_3->len);

  if (VAR_8->id < 0) {
   VAR_8->id = FUNC_3(VAR_2);
   if (VAR_8->id < 0) {
    FUNC_12(&VAR_2->transmit, VAR_3);
    break;
   }
  }

  if (VAR_6 < 256) {
   VAR_5 = FUNC_11(VAR_4, 2);
   VAR_5[0] = 0x40
    | ((VAR_8->id << 2) & 0x3c)
    | ((VAR_3->len == VAR_6) ? 0x00 : 0x01);
   VAR_5[1] = VAR_6;
  } else {
   VAR_5 = FUNC_11(VAR_4, 3);
   VAR_5[0] = 0x80
    | ((VAR_8->id << 2) & 0x3c)
    | ((VAR_3->len == VAR_6) ? 0x00 : 0x01);
   VAR_5[1] = VAR_6 & 0xff;
   VAR_5[2] = VAR_6 >> 8;
  }

  FUNC_8(VAR_3, FUNC_11(VAR_4, VAR_6), VAR_6);
  FUNC_10(VAR_3, VAR_6);

  if (VAR_3->len > 0) {
   FUNC_12(&VAR_2->transmit, VAR_3);
  } else {
   FUNC_4(VAR_2, VAR_8->id);
   if (VAR_8->data) {
    FUNC_5(VAR_2, VAR_4->data, VAR_4->len);
    FUNC_13(VAR_4, 0);
   }
   FUNC_6(VAR_3);
  }
 }

 FUNC_5(VAR_2, VAR_4->data, VAR_4->len);

 FUNC_6(VAR_4);
}
