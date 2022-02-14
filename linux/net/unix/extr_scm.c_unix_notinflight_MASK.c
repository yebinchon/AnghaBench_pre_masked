
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int unix_inflight; } ;
struct unix_sock {int link; int inflight; } ;
struct sock {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 struct sock* FUNC_7 (struct file*) ;
 struct unix_sock* FUNC_8 (struct sock*) ;
 int VAR_1 ;

void FUNC_9(struct user_struct *VAR_2, struct file *VAR_3)
{
 struct sock *VAR_4 = FUNC_7(VAR_3);

 FUNC_5(&VAR_0);

 if (VAR_4) {
  struct unix_sock *VAR_5 = FUNC_8(VAR_4);

  FUNC_0(!FUNC_2(&VAR_5->inflight));
  FUNC_0(FUNC_4(&VAR_5->link));

  if (FUNC_1(&VAR_5->inflight))
   FUNC_3(&VAR_5->link);
  VAR_1--;
 }
 VAR_2->unix_inflight--;
 FUNC_6(&VAR_0);
}
