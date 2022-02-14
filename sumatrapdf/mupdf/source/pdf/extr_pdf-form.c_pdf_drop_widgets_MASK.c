
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ pdf_widget ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(fz_context *VAR_0, pdf_widget *VAR_1)
{
 while (VAR_1)
 {
  pdf_widget *VAR_2 = VAR_1->next;
  FUNC_0(VAR_0, VAR_1);
  VAR_1 = VAR_2;
 }
}
