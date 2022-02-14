
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int dummy; } ;
struct sock {int sk_rcvbuf; } ;
struct sk_buff {unsigned short* data; } ;


 int FUNC_0 (int ) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,unsigned short) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (unsigned int) ;
 struct sock* FUNC_11 (unsigned int,struct x25_neigh*) ;
 scalar_t__ FUNC_12 (unsigned int,struct x25_neigh*,struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,struct x25_neigh*,unsigned short) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,struct x25_neigh*,unsigned int) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_3, struct x25_neigh *VAR_4)
{
 struct sock *VAR_5;
 unsigned short VAR_6;
 unsigned int VAR_7;

 if (!FUNC_5(VAR_3, VAR_2))
  return 0;

 VAR_6 = VAR_3->data[2];
 VAR_7 = ((VAR_3->data[0] << 8) & 0xF00) + ((VAR_3->data[1] << 0) & 0x0FF);





 if (VAR_7 == 0) {
  FUNC_13(VAR_3, VAR_4, VAR_6);
  return 0;
 }




 if ((VAR_5 = FUNC_11(VAR_7, VAR_4)) != ((void*)0)) {
  int VAR_8 = 1;

  FUNC_7(VAR_3);
  FUNC_1(VAR_5);
  if (!FUNC_8(VAR_5)) {
   VAR_8 = FUNC_14(VAR_5, VAR_3);
  } else {
   VAR_8 = !FUNC_6(VAR_5, VAR_3, FUNC_0(VAR_5->sk_rcvbuf));
  }
  FUNC_2(VAR_5);
  FUNC_9(VAR_5);
  return VAR_8;
 }




 if (VAR_6 == VAR_0)
  return FUNC_15(VAR_3, VAR_4, VAR_7);






 if (FUNC_12(VAR_7, VAR_4, VAR_3)) {
  if (VAR_6 == VAR_1) {
   FUNC_10(VAR_7);
  }
  FUNC_3(VAR_3);
  return 1;
 }





 if (VAR_6 != VAR_1)
  FUNC_4("x25_receive_data(): unknown frame type %2x\n",VAR_6);

 return 0;
}
