
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_xprt {int error_worker; int sock_state; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned int,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sock_xprt *VAR_1, unsigned int VAR_2)
{
 FUNC_1(VAR_2, &VAR_1->sock_state);
 FUNC_0(VAR_0, &VAR_1->error_worker);
}
