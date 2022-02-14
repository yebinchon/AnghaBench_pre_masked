
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; struct TYPE_5__* next; } ;
typedef TYPE_1__ xps_fixpage ;
struct TYPE_6__ {int * last_page; TYPE_1__* first_page; } ;
typedef TYPE_2__ xps_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, xps_document *VAR_1)
{
 xps_fixpage *VAR_2 = VAR_1->first_page;
 while (VAR_2)
 {
  xps_fixpage *VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2->name);
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
 VAR_1->first_page = ((void*)0);
 VAR_1->last_page = ((void*)0);
}
