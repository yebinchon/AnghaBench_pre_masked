
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct iucv_path {struct sock* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct iucv_path *VAR_2, u8 VAR_3[16])
{
 struct sock *VAR_4 = VAR_2->private;

 if (VAR_4->sk_state == VAR_0)
  return;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4, 1);
 VAR_4->sk_state = VAR_1;

 VAR_4->sk_state_change(VAR_4);
 FUNC_1(VAR_4);
}
