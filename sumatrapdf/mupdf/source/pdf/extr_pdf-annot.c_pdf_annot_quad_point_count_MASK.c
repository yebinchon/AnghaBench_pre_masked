
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;

int
FUNC_4(fz_context *VAR_2, pdf_annot *VAR_3)
{
 pdf_obj *VAR_4;
 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), VAR_1);
 VAR_4 = FUNC_3(VAR_2, VAR_3->obj, FUNC_0(VAR_0));
 return FUNC_2(VAR_2, VAR_4) / 8;
}
