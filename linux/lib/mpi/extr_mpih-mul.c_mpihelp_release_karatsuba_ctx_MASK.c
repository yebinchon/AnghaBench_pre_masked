
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct karatsuba_ctx {scalar_t__ tspace; scalar_t__ tp; struct karatsuba_ctx* next; } ;


 int FUNC_0 (struct karatsuba_ctx*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct karatsuba_ctx *VAR_0)
{
 struct karatsuba_ctx *VAR_1;

 if (VAR_0->tp)
  FUNC_1(VAR_0->tp);
 if (VAR_0->tspace)
  FUNC_1(VAR_0->tspace);
 for (VAR_0 = VAR_0->next; VAR_0; VAR_0 = VAR_1) {
  VAR_1 = VAR_0->next;
  if (VAR_0->tp)
   FUNC_1(VAR_0->tp);
  if (VAR_0->tspace)
   FUNC_1(VAR_0->tspace);
  FUNC_0(VAR_0);
 }
}
