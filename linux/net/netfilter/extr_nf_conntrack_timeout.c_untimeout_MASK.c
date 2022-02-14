
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conn_timeout {void* timeout; } ;
struct nf_conn {int dummy; } ;


 int FUNC_0 (void*,int *) ;
 struct nf_conn_timeout* FUNC_1 (struct nf_conn*) ;

__attribute__((used)) static int FUNC_2(struct nf_conn *VAR_0, void *VAR_1)
{
 struct nf_conn_timeout *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2 && (!VAR_1 || VAR_2->timeout == VAR_1))
  FUNC_0(VAR_2->timeout, ((void*)0));


 return 0;
}
