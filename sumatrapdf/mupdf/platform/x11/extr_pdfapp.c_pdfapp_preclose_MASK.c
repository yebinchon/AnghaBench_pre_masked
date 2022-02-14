
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ctx; int doc; } ;
typedef TYPE_1__ pdfapp_t ;
typedef int pdf_document ;





 scalar_t__ FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(pdfapp_t *VAR_0)
{
 pdf_document *VAR_1 = FUNC_1(VAR_0->ctx, VAR_0->doc);

 if (VAR_1 && FUNC_0(VAR_0->ctx, VAR_1))
 {
  switch (FUNC_3(VAR_0))
  {
  case 129:
   return 1;

  case 130:
   return 0;

  case 128:
   return FUNC_2(VAR_0);
  }
 }

 return 1;
}
