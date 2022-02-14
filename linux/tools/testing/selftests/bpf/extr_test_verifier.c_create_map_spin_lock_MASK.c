
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_create_map_attr {char* name; int key_size; int value_size; int max_entries; int btf_key_type_id; int btf_value_type_id; int btf_fd; int map_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_create_map_attr*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct bpf_create_map_attr VAR_1 = {
  .name = "test_map",
  .map_type = VAR_0,
  .key_size = 4,
  .value_size = 8,
  .max_entries = 1,
  .btf_key_type_id = 1,
  .btf_value_type_id = 3,
 };
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3 < 0)
  return -1;
 VAR_1.btf_fd = VAR_3;
 VAR_2 = FUNC_0(&VAR_1);
 if (VAR_2 < 0)
  FUNC_2("Failed to create map with spin_lock\n");
 return VAR_2;
}
