
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state_change; int sk_data_ready; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ,int ,struct socket**) ;

__attribute__((used)) static int FUNC_2(struct socket **VAR_6)
{
 int VAR_7;

 FUNC_0("");

 VAR_7 = FUNC_1(&VAR_3, VAR_1, VAR_2, VAR_0, VAR_6);
 if (!VAR_7) {
  struct sock *VAR_8 = (*VAR_6)->sk;
  VAR_8->sk_data_ready = VAR_4;
  VAR_8->sk_state_change = VAR_5;
 }
 return VAR_7;
}
