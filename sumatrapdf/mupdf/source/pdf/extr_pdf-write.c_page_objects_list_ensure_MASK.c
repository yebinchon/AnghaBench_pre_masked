
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cap; int * page; } ;
typedef TYPE_1__ page_objects_list ;
typedef int page_objects ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, page_objects_list **VAR_1, int VAR_2)
{
 int VAR_3 = (*VAR_1)->cap;
 if (VAR_2 <= VAR_3)
  return;
 *VAR_1 = FUNC_0(VAR_0, *VAR_1, sizeof(page_objects_list) + (VAR_2-1)*sizeof(page_objects *));
 FUNC_1(&(*VAR_1)->page[VAR_3], 0, (VAR_2-VAR_3)*sizeof(page_objects *));
 (*VAR_1)->cap = VAR_2;
}
