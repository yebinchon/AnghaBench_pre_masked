
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,float) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void FUNC_4(fz_context *VAR_1, pdf_annot *VAR_2, float VAR_3)
{
 if (VAR_3 != 1)
  FUNC_2(VAR_1, VAR_2->obj, FUNC_0(VAR_0), VAR_3);
 else
  FUNC_1(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 FUNC_3(VAR_1, VAR_2);
}
