
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * output_accelerator; } ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;



int FUNC_0(fz_context *VAR_0, fz_document *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 0;
 return (VAR_1->output_accelerator) != ((void*)0);
}
