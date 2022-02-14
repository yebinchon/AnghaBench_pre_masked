
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct sco_pinfo {int setting; TYPE_1__* conn; } ;
struct msghdr {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int hcon; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ) ;
 struct sco_pinfo* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_3, struct msghdr *VAR_4,
       size_t VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_3->sk;
 struct sco_pinfo *VAR_8 = FUNC_5(VAR_7);

 FUNC_2(VAR_7);

 if (VAR_7->sk_state == VAR_1 &&
     FUNC_6(VAR_2, &FUNC_0(VAR_7)->flags)) {
  FUNC_4(VAR_8->conn->hcon, VAR_8->setting);
  VAR_7->sk_state = VAR_0;

  FUNC_3(VAR_7);
  return 0;
 }

 FUNC_3(VAR_7);

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
