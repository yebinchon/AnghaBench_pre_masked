
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;
struct TYPE_2__ {char type; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_0, pdf_document *VAR_1)
{
 pdf_obj *VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_0, VAR_1); VAR_3++)
 {
  if (FUNC_1(VAR_0, VAR_1, VAR_3)->type == 'o')
  {
   VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_3);
   FUNC_0(VAR_0, VAR_2);
  }
 }
}
