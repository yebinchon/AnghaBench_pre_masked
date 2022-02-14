
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_filter {int code; int jt; int jf; int k; } ;


 int FUNC_0 (char*,int,int,int,int) ;

void FUNC_1(struct sock_filter *VAR_0, size_t VAR_1)
{
 struct sock_filter *VAR_2 = VAR_0 + VAR_1;
 for ( ; VAR_0 < VAR_2; ++VAR_0)
  FUNC_0("{ code=%u,jt=%u,jf=%u,k=%u },\n",
   VAR_0->code, VAR_0->jt, VAR_0->jf, VAR_0->k);
}
