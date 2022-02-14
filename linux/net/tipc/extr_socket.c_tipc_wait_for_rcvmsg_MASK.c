
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; int sk_receive_queue; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (long) ;
 int VAR_5 ;
 long FUNC_11 (int *,int ,long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_7, long *VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 FUNC_0(VAR_5, VAR_6);
 long VAR_10 = *VAR_8;
 int VAR_11 = FUNC_9(VAR_9);

 if (VAR_11)
  return VAR_11;

 for (;;) {
  if (VAR_10 && FUNC_8(&VAR_9->sk_receive_queue)) {
   if (VAR_9->sk_shutdown & VAR_2) {
    VAR_11 = -VAR_1;
    break;
   }
   FUNC_1(FUNC_7(VAR_9), &VAR_5);
   FUNC_3(VAR_9);
   VAR_10 = FUNC_11(&VAR_5, VAR_3, VAR_10);
   FUNC_5();
   FUNC_2(VAR_9);
   FUNC_4(FUNC_7(VAR_9), &VAR_5);
  }
  VAR_11 = 0;
  if (!FUNC_8(&VAR_9->sk_receive_queue))
   break;
  VAR_11 = -VAR_0;
  if (!VAR_10)
   break;
  VAR_11 = FUNC_10(VAR_10);
  if (FUNC_6(VAR_4))
   break;

  VAR_11 = FUNC_9(VAR_9);
  if (VAR_11)
   break;
 }
 *VAR_8 = VAR_10;
 return VAR_11;
}
