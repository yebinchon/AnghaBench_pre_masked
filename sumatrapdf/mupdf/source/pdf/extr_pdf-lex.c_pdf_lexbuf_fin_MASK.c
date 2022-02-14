
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ base_size; int scratch; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(fz_context *VAR_0, pdf_lexbuf *VAR_1)
{
 if (VAR_1 && VAR_1->size != VAR_1->base_size)
  FUNC_0(VAR_0, VAR_1->scratch);
}
