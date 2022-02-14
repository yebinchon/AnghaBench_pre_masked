
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* qsort_comparator ) (void const*,void const*) ;
typedef scalar_t__ list_sort_comparator ;
struct TYPE_5__ {int elements; } ;
typedef int ListCell ;
typedef TYPE_1__ List ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int,int (*) (void const*,void const*)) ;

void
FUNC_3(List *VAR_0, list_sort_comparator VAR_1)
{
 typedef int (*qsort_comparator) (const void *VAR_2, const void *VAR_3);
 int VAR_4;

 FUNC_0(VAR_0);


 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 > 1)
  FUNC_2(VAR_0->elements, VAR_4, sizeof(ListCell), (qsort_comparator) VAR_1);
}
