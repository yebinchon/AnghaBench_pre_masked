
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_err; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sock*,long*,int *) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (long) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sock *VAR_4, int VAR_5,
         long VAR_6, int *VAR_7)
{
 struct sk_buff *VAR_8;

 while (!(VAR_8 = FUNC_2(&VAR_4->sk_receive_queue))) {
  if (VAR_4->sk_err) {
   *VAR_7 = FUNC_3(VAR_4);
   return ((void*)0);
  }

  if (FUNC_4(VAR_4, VAR_2))
   return ((void*)0);

  if ((VAR_5 & VAR_1) || !VAR_6) {
   *VAR_7 = -VAR_0;
   return ((void*)0);
  }

  FUNC_1(VAR_4, &VAR_6, ((void*)0));


  if (FUNC_0(VAR_3)) {
   *VAR_7 = FUNC_5(VAR_6);
   return ((void*)0);
  }
 }

 return VAR_8;
}
