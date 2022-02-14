
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* t3doc; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;

void FUNC_2(fz_context *VAR_1, fz_font *VAR_2, void *VAR_3)
{
 if (!VAR_2 || !VAR_3 || VAR_2->t3doc == ((void*)0))
  return;

 if (VAR_2->t3doc != VAR_3)
  FUNC_1(VAR_1, VAR_0, "can't decouple type3 font from a different doc");

 VAR_2->t3doc = ((void*)0);
 FUNC_0(VAR_1, VAR_2);
}
