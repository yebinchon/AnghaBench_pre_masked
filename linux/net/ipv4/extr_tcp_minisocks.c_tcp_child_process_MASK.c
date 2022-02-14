
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int (* sk_data_ready ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;

int FUNC_9(struct sock *VAR_1, struct sock *VAR_2,
        struct sk_buff *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_2->sk_state;


 FUNC_2(VAR_2, VAR_3);

 FUNC_7(FUNC_8(VAR_2), VAR_3);
 if (!FUNC_3(VAR_2)) {
  VAR_4 = FUNC_6(VAR_2, VAR_3);

  if (VAR_5 == VAR_0 && VAR_2->sk_state != VAR_5)
   VAR_1->sk_data_ready(VAR_1);
 } else {




  FUNC_0(VAR_2, VAR_3);
 }

 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 return VAR_4;
}
