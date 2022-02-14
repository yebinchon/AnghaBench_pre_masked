
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_object {char* name; struct bpf_map* maps; } ;
struct bpf_map_def {int key_size; int max_entries; int map_flags; int value_size; int type; } ;
struct bpf_map {int libbpf_type; int sec_idx; int name; struct bpf_map_def def; scalar_t__ sec_offset; } ;
typedef int map_name ;
typedef enum libbpf_map_type { ____Placeholder_libbpf_map_type } libbpf_map_type ;
struct TYPE_3__ {int d_size; int d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct bpf_map*) ;
 int VAR_4 ;
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (struct bpf_object*) ;
 int * VAR_5 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct bpf_object *VAR_6, enum libbpf_map_type VAR_7,
         int VAR_8, Elf_Data *VAR_9, void **VAR_10)
{
 char VAR_11[VAR_2];
 struct bpf_map_def *VAR_12;
 struct bpf_map *VAR_13;

 VAR_13 = FUNC_2(VAR_6);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_13->libbpf_type = VAR_7;
 VAR_13->sec_idx = VAR_8;
 VAR_13->sec_offset = 0;
 FUNC_7(VAR_11, sizeof(VAR_11), "%.8s%.7s", VAR_6->name,
   VAR_5[VAR_7]);
 VAR_13->name = FUNC_8(VAR_11);
 if (!VAR_13->name) {
  FUNC_6("failed to alloc map name\n");
  return -VAR_3;
 }
 FUNC_5("map '%s' (global data): at sec_idx %d, offset %zu.\n",
   VAR_11, VAR_13->sec_idx, VAR_13->sec_offset);

 VAR_12 = &VAR_13->def;
 VAR_12->type = VAR_1;
 VAR_12->key_size = sizeof(int);
 VAR_12->value_size = VAR_9->d_size;
 VAR_12->max_entries = 1;
 VAR_12->map_flags = VAR_7 == VAR_4 ? VAR_0 : 0;
 if (VAR_10) {
  *VAR_10 = FUNC_3(VAR_9->d_size);
  if (!*VAR_10) {
   FUNC_9(&VAR_13->name);
   FUNC_6("failed to alloc map content buffer\n");
   return -VAR_3;
  }
  FUNC_4(*VAR_10, VAR_9->d_buf, VAR_9->d_size);
 }

 FUNC_5("map %td is \"%s\"\n", VAR_13 - VAR_6->maps, VAR_13->name);
 return 0;
}
