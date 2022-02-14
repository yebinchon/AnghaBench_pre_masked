
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_state_change; int sk_write_space; int sk_data_ready; struct ceph_connection* sk_user_data; } ;
struct ceph_connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct socket *VAR_3,
          struct ceph_connection *VAR_4)
{
 struct sock *VAR_5 = VAR_3->sk;
 VAR_5->sk_user_data = VAR_4;
 VAR_5->sk_data_ready = VAR_0;
 VAR_5->sk_write_space = VAR_2;
 VAR_5->sk_state_change = VAR_1;
}
