
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; struct TYPE_6__* ocgs; int obj; int intent; } ;
typedef TYPE_1__ pdf_ocg_descriptor ;
struct TYPE_7__ {TYPE_1__* ocg; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(fz_context *VAR_0, pdf_document *VAR_1)
{
 pdf_ocg_descriptor *VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;
 VAR_2 = VAR_1->ocg;
 if (!VAR_2)
  return;

 FUNC_0(VAR_0, VAR_2);
 FUNC_2(VAR_0, VAR_2->intent);
 for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++)
  FUNC_2(VAR_0, VAR_2->ocgs[VAR_3].obj);
 FUNC_1(VAR_0, VAR_2->ocgs);
 FUNC_1(VAR_0, VAR_2);
}
