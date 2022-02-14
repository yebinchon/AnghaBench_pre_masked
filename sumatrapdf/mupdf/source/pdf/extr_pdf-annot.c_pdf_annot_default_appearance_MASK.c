
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {TYPE_1__* page; int obj; } ;
typedef TYPE_2__ pdf_annot ;
typedef int fz_context ;
struct TYPE_4__ {int doc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int ,char const**,float*,float*) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int ) ;

void
FUNC_6(fz_context *VAR_3, pdf_annot *VAR_4, const char **VAR_5, float *VAR_6, float VAR_7[3])
{
 pdf_obj *VAR_8 = FUNC_1(VAR_3, VAR_4->obj, FUNC_0(VAR_1));
 if (!VAR_8)
 {
  pdf_obj *VAR_9 = FUNC_5(VAR_3, VAR_4->page->doc);
  VAR_8 = FUNC_2(VAR_3, VAR_9, FUNC_0(VAR_2), FUNC_0(VAR_0), FUNC_0(VAR_1), ((void*)0));
 }
 FUNC_3(VAR_3, FUNC_4(VAR_3, VAR_8), VAR_5, VAR_6, VAR_7);
}
