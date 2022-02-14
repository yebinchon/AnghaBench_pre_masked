
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_cookie {int cookie_value; int cookie_key; } ;
struct bpf_sock_addr {scalar_t__ family; scalar_t__ user_family; int sk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_sock_addr*) ;
 struct socket_cookie* FUNC_1 (int *,int ,int ,int ) ;
 int VAR_2 ;

int FUNC_2(struct bpf_sock_addr *VAR_3)
{
 struct socket_cookie *VAR_4;

 if (VAR_3->family != VAR_0 || VAR_3->user_family != VAR_0)
  return 1;

 VAR_4 = FUNC_1(&VAR_2, VAR_3->sk, 0,
          VAR_1);
 if (!VAR_4)
  return 1;

 VAR_4->cookie_value = 0xFF;
 VAR_4->cookie_key = FUNC_0(VAR_3);

 return 1;
}
