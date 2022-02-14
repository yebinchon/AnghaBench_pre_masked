
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* tlm; void* tm; } ;
struct TYPE_4__ {TYPE_1__ tos; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(fz_context *VAR_1, pdf_processor *VAR_2)
{
 pdf_run_processor *VAR_3 = (pdf_run_processor *)VAR_2;
 VAR_3->tos.tm = VAR_0;
 VAR_3->tos.tlm = VAR_0;
}
