
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_widget ;
typedef int pdf_document ;
struct TYPE_2__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;

void FUNC_5(fz_context *VAR_3, pdf_document *VAR_4, pdf_widget *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, ((pdf_annot *) VAR_5)->obj, FUNC_0(VAR_0));
 VAR_6 &= ~VAR_1;
 if (VAR_6)
  FUNC_3(VAR_3, ((pdf_annot *) VAR_5)->obj, FUNC_0(VAR_0), VAR_6);
 else
  FUNC_1(VAR_3, ((pdf_annot *) VAR_5)->obj, FUNC_0(VAR_0));

 FUNC_1(VAR_3, ((pdf_annot *) VAR_5)->obj, FUNC_0(VAR_2));

 FUNC_4(VAR_3, VAR_5, ((void*)0), ((void*)0), ((void*)0));
}
