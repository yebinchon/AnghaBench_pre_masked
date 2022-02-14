
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxtrace_mmap {int * base; int len; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct auxtrace_mmap *VAR_0)
{
 if (VAR_0->base) {
  FUNC_0(VAR_0->base, VAR_0->len);
  VAR_0->base = ((void*)0);
 }
}
