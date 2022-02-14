
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; } ;
typedef TYPE_1__ pdf_font_desc ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int *,int *) ;
 TYPE_1__* FUNC_2 (int *,int *,TYPE_1__*,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int *,int *,int *) ;

pdf_font_desc *
FUNC_4(fz_context *VAR_3, pdf_document *VAR_4)
{
 pdf_font_desc *VAR_5;
 pdf_font_desc *VAR_6;

 if ((VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_0, &VAR_1)) != ((void*)0))
 {
  return VAR_5;
 }


 VAR_5 = FUNC_3(VAR_3, VAR_4, ((void*)0));

 VAR_6 = FUNC_2(VAR_3, &VAR_0, VAR_5, VAR_5->size, &VAR_1);
 FUNC_0(VAR_6 == ((void*)0));
 (void)VAR_6;

 return VAR_5;
}
