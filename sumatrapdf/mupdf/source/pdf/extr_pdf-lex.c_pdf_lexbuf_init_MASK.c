
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int base_size; int * buffer; int * scratch; scalar_t__ len; } ;
typedef TYPE_1__ pdf_lexbuf ;
typedef int fz_context ;



void FUNC_0(fz_context *VAR_0, pdf_lexbuf *VAR_1, int VAR_2)
{
 VAR_1->size = VAR_1->base_size = VAR_2;
 VAR_1->len = 0;
 VAR_1->scratch = &VAR_1->buffer[0];
}
