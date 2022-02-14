
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union sidtab_entry_inner {TYPE_3__* ptr_leaf; TYPE_1__* ptr_inner; } ;
typedef scalar_t__ u32 ;
struct sidtab_convert_params {int (* func ) (int *,int *,int ) ;int args; } ;
struct TYPE_6__ {TYPE_2__* entries; } ;
struct TYPE_5__ {int context; } ;
struct TYPE_4__ {union sidtab_entry_inner* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_3(union sidtab_entry_inner *VAR_5,
          union sidtab_entry_inner *VAR_6,
          u32 *VAR_7, u32 VAR_8, u32 VAR_9,
          struct sidtab_convert_params *VAR_10)
{
 int VAR_11;
 u32 VAR_12;

 if (VAR_9 != 0) {
  if (!VAR_5->ptr_inner) {
   VAR_5->ptr_inner = FUNC_1(VAR_4,
        VAR_1);
   if (!VAR_5->ptr_inner)
    return -VAR_0;
  }
  VAR_12 = 0;
  while (VAR_12 < VAR_2 && *VAR_7 < VAR_8) {
   VAR_11 = FUNC_3(&VAR_5->ptr_inner->entries[VAR_12],
       &VAR_6->ptr_inner->entries[VAR_12],
       VAR_7, VAR_8, VAR_9 - 1,
       VAR_10);
   if (VAR_11)
    return VAR_11;
   VAR_12++;
  }
 } else {
  if (!VAR_5->ptr_leaf) {
   VAR_5->ptr_leaf = FUNC_1(VAR_4,
       VAR_1);
   if (!VAR_5->ptr_leaf)
    return -VAR_0;
  }
  VAR_12 = 0;
  while (VAR_12 < VAR_3 && *VAR_7 < VAR_8) {
   VAR_11 = VAR_10->func(&VAR_6->ptr_leaf->entries[VAR_12].context,
        &VAR_5->ptr_leaf->entries[VAR_12].context,
        VAR_10->args);
   if (VAR_11)
    return VAR_11;
   (*VAR_7)++;
   VAR_12++;
  }
  FUNC_0();
 }
 return 0;
}
