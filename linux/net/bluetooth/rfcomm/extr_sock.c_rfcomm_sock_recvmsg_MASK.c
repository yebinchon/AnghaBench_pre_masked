
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct rfcomm_dlc {int flags; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {struct rfcomm_dlc* dlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct socket*,struct msghdr*,size_t,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct rfcomm_dlc*) ;
 int FUNC_6 (struct rfcomm_dlc*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_2, struct msghdr *VAR_3,
          size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 struct rfcomm_dlc *VAR_7 = FUNC_7(VAR_6)->dlc;
 int VAR_8;

 if (FUNC_8(VAR_1, &VAR_7->flags)) {
  FUNC_5(VAR_7);
  return 0;
 }

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_3(VAR_6);
 if (!(VAR_5 & VAR_0) && VAR_8 > 0)
  FUNC_1(VAR_8, &VAR_6->sk_rmem_alloc);

 if (FUNC_0(&VAR_6->sk_rmem_alloc) <= (VAR_6->sk_rcvbuf >> 2))
  FUNC_6(FUNC_7(VAR_6)->dlc);
 FUNC_4(VAR_6);

 return VAR_8;
}
