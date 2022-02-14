
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sidtab_entry_inner {struct sidtab_node_leaf* ptr_leaf; struct sidtab_node_inner* ptr_inner; } ;
typedef scalar_t__ u32 ;
struct sidtab_node_leaf {TYPE_1__* entries; } ;
struct sidtab_node_inner {union sidtab_entry_inner* entries; } ;
struct context {int dummy; } ;
struct TYPE_2__ {int context; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,struct context*) ;

__attribute__((used)) static int FUNC_1(union sidtab_entry_inner VAR_3,
          u32 *VAR_4, u32 VAR_5, u32 VAR_6,
          struct context *VAR_7, u32 *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 if (VAR_6 != 0) {
  struct sidtab_node_inner *VAR_11 = VAR_3.ptr_inner;

  VAR_10 = 0;
  while (VAR_10 < VAR_1 && *VAR_4 < VAR_5) {
   VAR_9 = FUNC_1(VAR_11->entries[VAR_10],
       VAR_4, VAR_5, VAR_6 - 1,
       VAR_7, VAR_8);
   if (VAR_9 == 0)
    return 0;
   VAR_10++;
  }
 } else {
  struct sidtab_node_leaf *VAR_12 = VAR_3.ptr_leaf;

  VAR_10 = 0;
  while (VAR_10 < VAR_2 && *VAR_4 < VAR_5) {
   if (FUNC_0(&VAR_12->entries[VAR_10].context, VAR_7)) {
    *VAR_8 = *VAR_4;
    return 0;
   }
   (*VAR_4)++;
   VAR_10++;
  }
 }
 return -VAR_0;
}
