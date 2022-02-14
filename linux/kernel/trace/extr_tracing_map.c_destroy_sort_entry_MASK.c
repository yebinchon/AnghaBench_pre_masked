
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_sort_entry {int elt; scalar_t__ elt_copied; } ;


 int FUNC_0 (struct tracing_map_sort_entry*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tracing_map_sort_entry *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->elt_copied)
  FUNC_1(VAR_0->elt);

 FUNC_0(VAR_0);
}
