
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * text; } ;
typedef TYPE_1__ pdf_text_object_state ;
typedef int fz_text ;
typedef int fz_context ;



fz_text *
FUNC_0(fz_context *VAR_0, pdf_text_object_state *VAR_1)
{
 fz_text *VAR_2 = VAR_1->text;

 VAR_1->text = ((void*)0);

 return VAR_2;
}
