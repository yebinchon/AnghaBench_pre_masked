
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_callback_lock; TYPE_1__* sk_socket; } ;
struct nf_log_buf {int dummy; } ;
struct net {int dummy; } ;
struct cred {int fsgid; int fsuid; } ;
struct TYPE_4__ {struct cred* f_cred; } ;
struct TYPE_3__ {TYPE_2__* file; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct nf_log_buf*,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;

void FUNC_8(struct net *VAR_1, struct nf_log_buf *VAR_2,
       struct sock *VAR_3)
{
 if (!VAR_3 || !FUNC_6(VAR_3) || !FUNC_2(VAR_1, FUNC_7(VAR_3)))
  return;

 FUNC_4(&VAR_3->sk_callback_lock);
 if (VAR_3->sk_socket && VAR_3->sk_socket->file) {
  const struct cred *VAR_4 = VAR_3->sk_socket->file->f_cred;
  FUNC_3(VAR_2, "UID=%u GID=%u ",
   FUNC_1(&VAR_0, VAR_4->fsuid),
   FUNC_0(&VAR_0, VAR_4->fsgid));
 }
 FUNC_5(&VAR_3->sk_callback_lock);
}
