
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_output ;
struct TYPE_4__ {int (* output_accelerator ) (int *,TYPE_1__*,int *) ;} ;
typedef TYPE_1__ fz_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;

void FUNC_3(fz_context *VAR_1, fz_document *VAR_2, fz_output *VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return;
 if (VAR_2->output_accelerator == ((void*)0))
 {
  FUNC_0(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_0, "Document does not support writing an accelerator");
 }

 VAR_2->output_accelerator(VAR_1, VAR_2, VAR_3);
}
