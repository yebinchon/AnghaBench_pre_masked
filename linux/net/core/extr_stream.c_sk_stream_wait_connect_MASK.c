
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct sock {int sk_state; int sk_write_pending; int sk_err; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 struct task_struct* VAR_6 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,long*,int,int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (long) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_8(struct sock *VAR_9, long *VAR_10)
{
 FUNC_0(VAR_7, VAR_8);
 struct task_struct *VAR_11 = VAR_6;
 int VAR_12;

 do {
  int VAR_13 = FUNC_6(VAR_9);
  if (VAR_13)
   return VAR_13;
  if ((1 << VAR_9->sk_state) & ~(VAR_5 | VAR_4))
   return -VAR_1;
  if (!*VAR_10)
   return -VAR_0;
  if (FUNC_3(VAR_11))
   return FUNC_7(*VAR_10);

  FUNC_1(FUNC_4(VAR_9), &VAR_7);
  VAR_9->sk_write_pending++;
  VAR_12 = FUNC_5(VAR_9, VAR_10,
         !VAR_9->sk_err &&
         !((1 << VAR_9->sk_state) &
           ~(VAR_3 | VAR_2)), &VAR_7);
  FUNC_2(FUNC_4(VAR_9), &VAR_7);
  VAR_9->sk_write_pending--;
 } while (!VAR_12);
 return 0;
}
