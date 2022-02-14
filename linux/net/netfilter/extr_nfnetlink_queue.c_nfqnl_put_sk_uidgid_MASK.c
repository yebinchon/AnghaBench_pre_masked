
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_callback_lock; TYPE_2__* sk_socket; } ;
struct sk_buff {int dummy; } ;
struct cred {int fsgid; int fsuid; } ;
struct TYPE_4__ {TYPE_1__* file; } ;
struct TYPE_3__ {struct cred* f_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3, struct sock *VAR_4)
{
 const struct cred *VAR_5;

 if (!FUNC_6(VAR_4))
  return 0;

 FUNC_4(&VAR_4->sk_callback_lock);
 if (VAR_4->sk_socket && VAR_4->sk_socket->file) {
  VAR_5 = VAR_4->sk_socket->file->f_cred;
  if (FUNC_3(VAR_3, VAR_1,
      FUNC_2(FUNC_1(&VAR_2, VAR_5->fsuid))))
   goto nla_put_failure;
  if (FUNC_3(VAR_3, VAR_0,
      FUNC_2(FUNC_0(&VAR_2, VAR_5->fsgid))))
   goto nla_put_failure;
 }
 FUNC_5(&VAR_4->sk_callback_lock);
 return 0;

nla_put_failure:
 FUNC_5(&VAR_4->sk_callback_lock);
 return -1;
}
