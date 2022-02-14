
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,int *,int ,float) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7(fz_context *VAR_4, pdf_annot *VAR_5, float VAR_6)
{
 pdf_obj *VAR_7 = FUNC_2(VAR_4, VAR_5->obj, FUNC_0(VAR_1));
 if (!FUNC_6(VAR_4, VAR_7))
  VAR_7 = FUNC_3(VAR_4, VAR_5->obj, FUNC_0(VAR_1), 1);
 FUNC_4(VAR_4, VAR_7, FUNC_0(VAR_3), VAR_6);

 FUNC_1(VAR_4, VAR_5->obj, FUNC_0(VAR_2));
 FUNC_1(VAR_4, VAR_5->obj, FUNC_0(VAR_0));

 FUNC_5(VAR_4, VAR_5);
}
