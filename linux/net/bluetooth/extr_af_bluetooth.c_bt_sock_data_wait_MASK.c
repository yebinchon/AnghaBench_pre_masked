
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; scalar_t__ sk_err; int sk_receive_queue; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;
 long FUNC_6 (long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,struct sock*) ;
 int FUNC_10 (int ,struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;

__attribute__((used)) static long FUNC_13(struct sock *VAR_6, long VAR_7)
{
 FUNC_0(VAR_5, VAR_4);

 FUNC_2(FUNC_11(VAR_6), &VAR_5);
 for (;;) {
  FUNC_7(VAR_2);

  if (!FUNC_12(&VAR_6->sk_receive_queue))
   break;

  if (VAR_6->sk_err || (VAR_6->sk_shutdown & VAR_0))
   break;

  if (FUNC_8(VAR_4) || !VAR_7)
   break;

  FUNC_10(VAR_1, VAR_6);
  FUNC_4(VAR_6);
  VAR_7 = FUNC_6(VAR_7);
  FUNC_3(VAR_6);
  FUNC_9(VAR_1, VAR_6);
 }

 FUNC_1(VAR_3);
 FUNC_5(FUNC_11(VAR_6), &VAR_5);
 return VAR_7;
}
