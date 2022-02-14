
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct sk_buff {int len; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_3 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 unsigned char* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_10 (struct sock*,int,int ,int*) ;

void FUNC_11(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 unsigned char VAR_6[VAR_2];
 int VAR_7, VAR_8, VAR_9;

 if (VAR_4->len - VAR_2 > VAR_0) {

  FUNC_2(VAR_4, VAR_6, VAR_2);
  FUNC_5(VAR_4, VAR_2);

  VAR_8 = FUNC_4(VAR_4);

  while (VAR_4->len > 0) {
   if ((VAR_5 = FUNC_10(VAR_3, VAR_8 + VAR_0, 0, &VAR_7)) == ((void*)0))
    return;

   FUNC_9(VAR_5, VAR_8);

   VAR_9 = (VAR_0 > VAR_4->len) ? VAR_4->len : VAR_0;


   FUNC_2(VAR_4, FUNC_7(VAR_5, VAR_9), VAR_9);
   FUNC_5(VAR_4, VAR_9);


   FUNC_6(VAR_5, VAR_2);
   FUNC_3(VAR_5, VAR_6,
      VAR_2);
   if (VAR_4->len > 0)
    VAR_5->data[4] |= VAR_1;

   FUNC_8(&VAR_3->sk_write_queue, VAR_5);
  }

  FUNC_0(VAR_4);
 } else {
  FUNC_8(&VAR_3->sk_write_queue, VAR_4);
 }

 FUNC_1(VAR_3);
}
