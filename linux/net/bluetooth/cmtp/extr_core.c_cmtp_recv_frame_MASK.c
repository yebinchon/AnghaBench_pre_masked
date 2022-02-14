
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int* data; } ;
struct cmtp_session {struct sk_buff** reassembly; } ;
typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cmtp_session*,int,int*,int) ;
 int FUNC_3 (struct cmtp_session*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_6(struct cmtp_session *VAR_0, struct sk_buff *VAR_1)
{
 __u8 VAR_2, VAR_3, VAR_4;
 __u16 VAR_5;

 FUNC_0("session %p skb %p len %d", VAR_0, VAR_1, VAR_1->len);

 while (VAR_1->len > 0) {
  VAR_2 = VAR_1->data[0];

  switch (VAR_2 & 0xc0) {
  case 0x40:
   VAR_3 = 2;
   VAR_5 = VAR_1->data[1];
   break;
  case 0x80:
   VAR_3 = 3;
   VAR_5 = VAR_1->data[1] | (VAR_1->data[2] << 8);
   break;
  default:
   VAR_3 = 1;
   VAR_5 = 0;
   break;
  }

  VAR_4 = (VAR_2 & 0x3c) >> 2;

  FUNC_0("hdr 0x%02x hdrlen %d len %d id %d", VAR_2, VAR_3, VAR_5, VAR_4);

  if (VAR_3 + VAR_5 > VAR_1->len) {
   FUNC_1("Wrong size or header information in CMTP frame");
   break;
  }

  if (VAR_5 == 0) {
   FUNC_5(VAR_1, VAR_3);
   continue;
  }

  switch (VAR_2 & 0x03) {
  case 0x00:
   FUNC_2(VAR_0, VAR_4, VAR_1->data + VAR_3, VAR_5);
   FUNC_3(VAR_0, VAR_0->reassembly[VAR_4]);
   VAR_0->reassembly[VAR_4] = ((void*)0);
   break;
  case 0x01:
   FUNC_2(VAR_0, VAR_4, VAR_1->data + VAR_3, VAR_5);
   break;
  default:
   FUNC_4(VAR_0->reassembly[VAR_4]);
   VAR_0->reassembly[VAR_4] = ((void*)0);
   break;
  }

  FUNC_5(VAR_1, VAR_3 + VAR_5);
 }

 FUNC_4(VAR_1);
 return 0;
}
