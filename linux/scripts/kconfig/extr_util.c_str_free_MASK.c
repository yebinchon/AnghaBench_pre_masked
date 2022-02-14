
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gstr {scalar_t__ len; int * s; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gstr *VAR_0)
{
 if (VAR_0->s)
  FUNC_0(VAR_0->s);
 VAR_0->s = ((void*)0);
 VAR_0->len = 0;
}
