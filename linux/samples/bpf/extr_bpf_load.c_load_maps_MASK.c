
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int map_flags; int numa_node; scalar_t__ type; size_t inner_map_idx; int max_entries; int value_size; int key_size; } ;
struct bpf_map_data {int fd; char* name; TYPE_1__ def; } ;
typedef int (* fixup_map_cb ) (struct bpf_map_data*,int) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__,char*,int ,int,int ,int,int) ;
 void* FUNC_1 (scalar_t__,char*,int ,int ,int ,int,int) ;
 int VAR_4 ;
 void** VAR_5 ;
 int FUNC_2 (char*,int,char*,int,char*) ;
 void* VAR_6 ;
 char* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bpf_map_data *VAR_7, int VAR_8,
       fixup_map_cb VAR_9)
{
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  if (VAR_9) {
   VAR_9(&VAR_7[VAR_10], VAR_10);

   if (VAR_7[VAR_10].fd != -1) {
    VAR_5[VAR_10] = VAR_7[VAR_10].fd;
    continue;
   }
  }

  VAR_11 = VAR_7[VAR_10].def.map_flags & VAR_0 ?
   VAR_7[VAR_10].def.numa_node : -1;

  if (VAR_7[VAR_10].def.type == VAR_1 ||
      VAR_7[VAR_10].def.type == VAR_2) {
   int VAR_12 = VAR_5[VAR_7[VAR_10].def.inner_map_idx];

   VAR_5[VAR_10] = FUNC_0(VAR_7[VAR_10].def.type,
       VAR_7[VAR_10].name,
       VAR_7[VAR_10].def.key_size,
       VAR_12,
       VAR_7[VAR_10].def.max_entries,
       VAR_7[VAR_10].def.map_flags,
       VAR_11);
  } else {
   VAR_5[VAR_10] = FUNC_1(VAR_7[VAR_10].def.type,
       VAR_7[VAR_10].name,
       VAR_7[VAR_10].def.key_size,
       VAR_7[VAR_10].def.value_size,
       VAR_7[VAR_10].def.max_entries,
       VAR_7[VAR_10].def.map_flags,
       VAR_11);
  }
  if (VAR_5[VAR_10] < 0) {
   FUNC_2("failed to create map %d (%s): %d %s\n",
          VAR_10, VAR_7[VAR_10].name, VAR_4, FUNC_3(VAR_4));
   return 1;
  }
  VAR_7[VAR_10].fd = VAR_5[VAR_10];

  if (VAR_7[VAR_10].def.type == VAR_3)
   VAR_6 = VAR_5[VAR_10];
 }
 return 0;
}
