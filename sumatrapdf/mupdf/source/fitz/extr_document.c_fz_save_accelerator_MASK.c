
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * output_accelerator; } ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;

void FUNC_2(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->output_accelerator == ((void*)0))
  return;

 FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0, VAR_2, 0));
}
