
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int unix_inflight; } ;
struct unix_sock {int link; int inflight; } ;
struct sock {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 struct sock* FUNC_6 (struct file*) ;
 struct unix_sock* FUNC_7 (struct sock*) ;
 int VAR_2 ;

void FUNC_8(struct user_struct *VAR_3, struct file *VAR_4)
{
 struct sock *VAR_5 = FUNC_6(VAR_4);

 FUNC_4(&VAR_1);

 if (VAR_5) {
  struct unix_sock *VAR_6 = FUNC_7(VAR_5);

  if (FUNC_1(&VAR_6->inflight) == 1) {
   FUNC_0(!FUNC_3(&VAR_6->link));
   FUNC_2(&VAR_6->link, &VAR_0);
  } else {
   FUNC_0(FUNC_3(&VAR_6->link));
  }
  VAR_2++;
 }
 VAR_3->unix_inflight++;
 FUNC_5(&VAR_1);
}
