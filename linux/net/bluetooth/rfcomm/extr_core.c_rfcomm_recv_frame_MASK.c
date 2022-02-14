
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; int tail; int len; } ;
struct rfcomm_session {int dummy; } ;
struct rfcomm_hdr {int ctrl; int len; int addr; } ;


 int FUNC_0 (char*,...) ;





 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct rfcomm_session*,int,int ,struct sk_buff*) ;
 struct rfcomm_session* FUNC_8 (struct rfcomm_session*,int) ;
 struct rfcomm_session* FUNC_9 (struct rfcomm_session*,int) ;
 int FUNC_10 (struct rfcomm_session*,struct sk_buff*) ;
 int FUNC_11 (struct rfcomm_session*,int) ;
 struct rfcomm_session* FUNC_12 (struct rfcomm_session*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;

__attribute__((used)) static struct rfcomm_session *FUNC_15(struct rfcomm_session *VAR_0,
      struct sk_buff *VAR_1)
{
 struct rfcomm_hdr *VAR_2 = (void *) VAR_1->data;
 u8 VAR_3, VAR_4, VAR_5;

 if (!VAR_0) {

  FUNC_6(VAR_1);
  return VAR_0;
 }

 VAR_4 = FUNC_2(VAR_2->addr);
 VAR_3 = FUNC_3(VAR_2->ctrl);


 VAR_1->len--; VAR_1->tail--;
 VAR_5 = *(u8 *)FUNC_14(VAR_1);

 if (FUNC_1(VAR_1->data, VAR_3, VAR_5)) {
  FUNC_0("bad checksum in packet");
  FUNC_6(VAR_1);
  return VAR_0;
 }

 if (FUNC_4(VAR_2->len))
  FUNC_13(VAR_1, 3);
 else
  FUNC_13(VAR_1, 4);

 switch (VAR_3) {
 case 130:
  if (FUNC_5(VAR_2->ctrl))
   FUNC_11(VAR_0, VAR_4);
  break;

 case 132:
  if (FUNC_5(VAR_2->ctrl))
   VAR_0 = FUNC_8(VAR_0, VAR_4);
  break;

 case 129:
  if (FUNC_5(VAR_2->ctrl))
   VAR_0 = FUNC_12(VAR_0, VAR_4);
  break;

 case 131:
  VAR_0 = FUNC_9(VAR_0, VAR_4);
  break;

 case 128:
  if (VAR_4) {
   FUNC_7(VAR_0, VAR_4, FUNC_5(VAR_2->ctrl), VAR_1);
   return VAR_0;
  }
  FUNC_10(VAR_0, VAR_1);
  break;

 default:
  FUNC_0("Unknown packet type 0x%02x", VAR_3);
  break;
 }
 FUNC_6(VAR_1);
 return VAR_0;
}
