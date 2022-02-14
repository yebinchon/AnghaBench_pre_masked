
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int obj; TYPE_1__* page; } ;
typedef TYPE_2__ pdf_widget ;
typedef int fz_context ;
struct TYPE_5__ {int doc; } ;




 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(fz_context *VAR_0, pdf_widget *VAR_1)
{
 switch (FUNC_0(VAR_0, VAR_1))
 {
 default:
  return 0;
 case 129:
 case 128:
  FUNC_1(VAR_0, VAR_1->page->doc, VAR_1->obj);
  return 1;
 }
 return 0;
}
