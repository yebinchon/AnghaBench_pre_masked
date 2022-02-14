
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_dimension {int dummy; } ;
struct perf_hpp_list {int dummy; } ;
struct hpp_sort_entry {int hpp; } ;


 struct hpp_sort_entry* FUNC_0 (struct sort_dimension*,int ) ;
 int FUNC_1 (struct perf_hpp_list*,int *) ;

__attribute__((used)) static int FUNC_2(struct sort_dimension *VAR_0,
         struct perf_hpp_list *VAR_1)
{
 struct hpp_sort_entry *VAR_2 = FUNC_0(VAR_0, 0);

 if (VAR_2 == ((void*)0))
  return -1;

 FUNC_1(VAR_1, &VAR_2->hpp);
 return 0;
}
