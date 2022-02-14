
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_buf_desc {int * in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct jit_buf_desc *VAR_0)
{
 if (!(VAR_0 && VAR_0->in))
  return;
 FUNC_1(VAR_0->in);
 FUNC_0(VAR_0->in);
 VAR_0->in = ((void*)0);
}
