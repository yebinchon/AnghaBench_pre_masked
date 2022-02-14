
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; struct TYPE_4__** page; } ;
typedef TYPE_1__ page_objects_list ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, page_objects_list *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++)
 {
  FUNC_0(VAR_0, VAR_1->page[VAR_2]);
 }
 FUNC_0(VAR_0, VAR_1);
}
