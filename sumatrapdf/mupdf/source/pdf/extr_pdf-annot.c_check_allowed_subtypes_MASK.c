
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int *,int **) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(fz_context *VAR_2, pdf_annot *VAR_3, pdf_obj *VAR_4, pdf_obj **VAR_5)
{
 pdf_obj *VAR_6 = FUNC_3(VAR_2, VAR_3->obj, FUNC_0(VAR_1));
 if (!FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5))
  FUNC_1(VAR_2, VAR_0, "%s annotations have no %s property", FUNC_4(VAR_2, VAR_6), FUNC_4(VAR_2, VAR_4));
}
