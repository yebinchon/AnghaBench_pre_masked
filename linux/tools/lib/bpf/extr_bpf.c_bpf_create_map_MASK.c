
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_create_map_attr {int map_type; int key_size; int value_size; int max_entries; int map_flags; } ;
typedef enum bpf_map_type { ____Placeholder_bpf_map_type } bpf_map_type ;
typedef int __u32 ;


 int FUNC_0 (struct bpf_create_map_attr*) ;

int FUNC_1(enum bpf_map_type VAR_0, int VAR_1,
     int VAR_2, int VAR_3, __u32 VAR_4)
{
 struct bpf_create_map_attr VAR_5 = {};

 VAR_5.map_type = VAR_0;
 VAR_5.map_flags = VAR_4;
 VAR_5.key_size = VAR_1;
 VAR_5.value_size = VAR_2;
 VAR_5.max_entries = VAR_3;

 return FUNC_0(&VAR_5);
}
