
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_drops; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ truesize; } ;


 int FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sock *VAR_2,
          struct sk_buff_head *VAR_3,
          int *VAR_4)
{
 struct sk_buff *VAR_5;

 while ((VAR_5 = FUNC_5(VAR_3)) != ((void*)0)) {
  if (FUNC_7(VAR_5)) {
   FUNC_1(FUNC_6(VAR_2), VAR_0,
     FUNC_0(VAR_2));
   FUNC_1(FUNC_6(VAR_2), VAR_1,
     FUNC_0(VAR_2));
   FUNC_3(&VAR_2->sk_drops);
   FUNC_2(VAR_5, VAR_3);
   *VAR_4 += VAR_5->truesize;
   FUNC_4(VAR_5);
  } else {
   FUNC_8(VAR_5);
   break;
  }
 }
 return VAR_5;
}
