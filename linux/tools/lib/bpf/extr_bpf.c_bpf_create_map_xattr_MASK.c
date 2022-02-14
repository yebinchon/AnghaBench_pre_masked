
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int inner_map_fd; int map_ifindex; int btf_value_type_id; int btf_key_type_id; int btf_fd; int numa_node; int map_name; int map_flags; int max_entries; int value_size; int key_size; int map_type; } ;
struct bpf_create_map_attr {int inner_map_fd; int map_ifindex; int btf_value_type_id; int btf_key_type_id; int btf_fd; int numa_node; int name; int map_flags; int max_entries; int value_size; int key_size; int map_type; } ;
typedef int attr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (union bpf_attr*,char,int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,union bpf_attr*,int) ;

int FUNC_5(const struct bpf_create_map_attr *VAR_2)
{
 union bpf_attr VAR_3;

 FUNC_1(&VAR_3, '\0', sizeof(VAR_3));

 VAR_3.map_type = VAR_2->map_type;
 VAR_3.key_size = VAR_2->key_size;
 VAR_3.value_size = VAR_2->value_size;
 VAR_3.max_entries = VAR_2->max_entries;
 VAR_3.map_flags = VAR_2->map_flags;
 if (VAR_2->name)
  FUNC_0(VAR_3.map_name, VAR_2->name,
         FUNC_2(FUNC_3(VAR_2->name), VAR_1 - 1));
 VAR_3.numa_node = VAR_2->numa_node;
 VAR_3.btf_fd = VAR_2->btf_fd;
 VAR_3.btf_key_type_id = VAR_2->btf_key_type_id;
 VAR_3.btf_value_type_id = VAR_2->btf_value_type_id;
 VAR_3.map_ifindex = VAR_2->map_ifindex;
 VAR_3.inner_map_fd = VAR_2->inner_map_fd;

 return FUNC_4(VAR_0, &VAR_3, sizeof(VAR_3));
}
