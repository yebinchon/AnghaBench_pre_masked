
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sidtab_entry_inner {int context; struct sidtab_node_leaf* ptr_leaf; struct sidtab_node_leaf* ptr_inner; } ;
typedef scalar_t__ u32 ;
struct sidtab_node_leaf {union sidtab_entry_inner* entries; } ;
struct sidtab_node_inner {union sidtab_entry_inner* entries; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sidtab_node_leaf*) ;

__attribute__((used)) static void FUNC_2(union sidtab_entry_inner VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 if (VAR_3 != 0) {
  struct sidtab_node_inner *VAR_5 = VAR_2.ptr_inner;

  if (!VAR_5)
   return;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_2(VAR_5->entries[VAR_4], VAR_3 - 1);
  FUNC_1(VAR_5);
 } else {
  struct sidtab_node_leaf *VAR_6 = VAR_2.ptr_leaf;

  if (!VAR_6)
   return;

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(&VAR_6->entries[VAR_4].context);
  FUNC_1(VAR_6);
 }
}
