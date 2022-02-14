
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; int sk_err; scalar_t__ sk_state; } ;
struct caifsock {struct sock sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 long FUNC_3 (long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct caifsock*) ;
 int VAR_8 ;

__attribute__((used)) static long FUNC_8(struct caifsock *VAR_9,
      int VAR_10, long VAR_11, int *VAR_12)
{
 struct sock *VAR_13 = &VAR_9->sk;
 FUNC_0(VAR_8);
 for (;;) {
  *VAR_12 = 0;
  if (FUNC_7(VAR_9) &&
   (!VAR_10 || FUNC_6(&VAR_9->sk)))
   break;
  *VAR_12 = -VAR_4;
  if (!VAR_11)
   break;
  *VAR_12 = -VAR_3;
  if (FUNC_4(VAR_7))
   break;
  FUNC_2(FUNC_5(VAR_13), &VAR_8, VAR_6);
  *VAR_12 = -VAR_1;
  if (VAR_13->sk_shutdown & VAR_5)
   break;
  *VAR_12 = -VAR_13->sk_err;
  if (VAR_13->sk_err)
   break;
  *VAR_12 = -VAR_2;
  if (VAR_9->sk.sk_state != VAR_0)
   break;
  VAR_11 = FUNC_3(VAR_11);
 }
 FUNC_1(FUNC_5(VAR_13), &VAR_8);
 return VAR_11;
}
