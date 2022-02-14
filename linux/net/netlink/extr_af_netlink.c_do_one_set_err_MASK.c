
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct netlink_sock {scalar_t__ portid; int ngroups; int flags; int groups; } ;
struct netlink_set_err_data {scalar_t__ portid; int group; scalar_t__ code; struct sock* exclude_sk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_2, struct netlink_set_err_data *VAR_3)
{
 struct netlink_sock *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = 0;

 if (VAR_2 == VAR_3->exclude_sk)
  goto out;

 if (!FUNC_0(FUNC_2(VAR_2), FUNC_2(VAR_3->exclude_sk)))
  goto out;

 if (VAR_4->portid == VAR_3->portid || VAR_3->group - 1 >= VAR_4->ngroups ||
     !FUNC_4(VAR_3->group - 1, VAR_4->groups))
  goto out;

 if (VAR_3->code == VAR_0 && VAR_4->flags & VAR_1) {
  VAR_5 = 1;
  goto out;
 }

 VAR_2->sk_err = VAR_3->code;
 VAR_2->sk_error_report(VAR_2);
out:
 return VAR_5;
}
