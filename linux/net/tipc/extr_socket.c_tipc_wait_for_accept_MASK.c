
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_receive_queue; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct sock*) ;
 long FUNC_5 (long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (long) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct socket *VAR_4, long VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;
 FUNC_0(VAR_3);
 int VAR_7;






 for (;;) {
  FUNC_3(FUNC_7(VAR_6), &VAR_3,
       VAR_1);
  if (VAR_5 && FUNC_8(&VAR_6->sk_receive_queue)) {
   FUNC_4(VAR_6);
   VAR_5 = FUNC_5(VAR_5);
   FUNC_2(VAR_6);
  }
  VAR_7 = 0;
  if (!FUNC_8(&VAR_6->sk_receive_queue))
   break;
  VAR_7 = -VAR_0;
  if (!VAR_5)
   break;
  VAR_7 = FUNC_9(VAR_5);
  if (FUNC_6(VAR_2))
   break;
 }
 FUNC_1(FUNC_7(VAR_6), &VAR_3);
 return VAR_7;
}
