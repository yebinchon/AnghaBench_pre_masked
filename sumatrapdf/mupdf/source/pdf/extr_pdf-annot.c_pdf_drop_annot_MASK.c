
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int obj; int ap; int refs; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(fz_context *VAR_0, pdf_annot *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  FUNC_2(VAR_0, VAR_1->ap);
  FUNC_2(VAR_0, VAR_1->obj);
  FUNC_1(VAR_0, VAR_1);
 }
}
