
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_widget ;
struct TYPE_2__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int VAR_0 ;

 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(fz_context *VAR_1, pdf_widget *VAR_2)
{
 pdf_annot *VAR_3 = (pdf_annot *)VAR_2;

 if (!VAR_3) return 0;

 switch (FUNC_1(VAR_1, VAR_3->obj))
 {
 case 128:
  return (FUNC_0(VAR_1, VAR_3->obj) & VAR_0) != 0;
 default:
  return 0;
 }
}
