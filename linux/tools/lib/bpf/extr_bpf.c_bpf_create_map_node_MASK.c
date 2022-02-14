
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_create_map_attr {char const* name; int map_type; int key_size; int value_size; int max_entries; int numa_node; int map_flags; } ;
typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_create_map_attr*) ;

int FUNC_1(enum bpf_map_type VAR_1, const char *VAR_2,
   int VAR_3, int VAR_4, int VAR_5,
   __u32 VAR_6, int VAR_7)
{
 struct bpf_create_map_attr VAR_8 = {};

 VAR_8.name = VAR_2;
 VAR_8.map_type = VAR_1;
 VAR_8.map_flags = VAR_6;
 VAR_8.key_size = VAR_3;
 VAR_8.value_size = VAR_4;
 VAR_8.max_entries = VAR_5;
 if (VAR_7 >= 0) {
  VAR_8.numa_node = VAR_7;
  VAR_8.map_flags |= VAR_0;
 }

 return FUNC_0(&VAR_8);
}
