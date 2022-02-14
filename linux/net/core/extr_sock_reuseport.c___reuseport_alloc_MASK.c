
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {unsigned int max_socks; int prog; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct sock_reuseport* FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static struct sock_reuseport *FUNC_2(unsigned int VAR_1)
{
 unsigned int VAR_2 = sizeof(struct sock_reuseport) +
        sizeof(struct sock *) * VAR_1;
 struct sock_reuseport *VAR_3 = FUNC_1(VAR_2, VAR_0);

 if (!VAR_3)
  return ((void*)0);

 VAR_3->max_socks = VAR_1;

 FUNC_0(VAR_3->prog, ((void*)0));
 return VAR_3;
}
