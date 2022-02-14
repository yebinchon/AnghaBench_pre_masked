
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int gid; int uid; } ;
struct scm_cookie {TYPE_1__ creds; int pid; } ;
struct msghdr {int msg_controllen; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct socket*,struct msghdr*,struct scm_cookie*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct socket*,struct sock const*) ;

__attribute__((used)) static int FUNC_5(struct scm_cookie *VAR_1,
       struct socket *VAR_2,
       const struct sock *VAR_3)
{
 int VAR_4;
 struct msghdr VAR_5 = { .msg_controllen = 0 };

 VAR_4 = FUNC_2(VAR_2, &VAR_5, VAR_1, 0);
 if (VAR_4)
  return VAR_4;

 if (FUNC_4(VAR_2, VAR_3)) {
  VAR_1->pid = FUNC_1(FUNC_3(VAR_0));
  FUNC_0(&VAR_1->creds.uid, &VAR_1->creds.gid);
 }
 return VAR_4;
}
