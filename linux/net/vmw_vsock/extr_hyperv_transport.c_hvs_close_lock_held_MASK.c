
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int close_work_scheduled; int close_work; int trans; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 struct sock* FUNC_3 (struct vsock_sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static bool FUNC_6(struct vsock_sock *VAR_6)
{
 struct sock *VAR_7 = FUNC_3(VAR_6);

 if (!(VAR_7->sk_state == VAR_4 ||
       VAR_7->sk_state == VAR_3))
  return 1;

 if ((VAR_7->sk_shutdown & VAR_1) != VAR_1)
  FUNC_1(VAR_6->trans, VAR_1);

 if (FUNC_4(VAR_7, VAR_2))
  return 1;


 FUNC_5(VAR_7);
 FUNC_0(&VAR_6->close_work, VAR_5);
 VAR_6->close_work_scheduled = 1;
 FUNC_2(&VAR_6->close_work, VAR_0);
 return 0;
}
