
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_shutdown; scalar_t__ sk_err; int sk_receive_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct sock*) ;
 long FUNC_5 (long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sock*) ;
 int FUNC_8 (int ,struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sock*,int ) ;
 int VAR_6 ;

__attribute__((used)) static long FUNC_12(struct sock *VAR_7, long VAR_8)
{
 FUNC_0(VAR_6);
 FUNC_2(VAR_7);

 for (;;) {
  FUNC_3(FUNC_9(VAR_7), &VAR_6, VAR_4);

  if (!FUNC_10(&VAR_7->sk_receive_queue) ||
   VAR_7->sk_err ||
   VAR_7->sk_state != VAR_0 ||
   FUNC_11(VAR_7, VAR_3) ||
   (VAR_7->sk_shutdown & VAR_1) ||
   FUNC_6(VAR_5) ||
   !VAR_8)
   break;

  FUNC_8(VAR_2, VAR_7);
  FUNC_4(VAR_7);
  VAR_8 = FUNC_5(VAR_8);
  FUNC_2(VAR_7);

  if (FUNC_11(VAR_7, VAR_3))
   break;

  FUNC_7(VAR_2, VAR_7);
 }

 FUNC_1(FUNC_9(VAR_7), &VAR_6);
 FUNC_4(VAR_7);
 return VAR_8;
}
