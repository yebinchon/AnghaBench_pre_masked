
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_create_map_attr {char* name; int key_size; int value_size; int btf_key_type_id; int btf_value_type_id; int btf_fd; int map_flags; int max_entries; int map_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_create_map_attr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct bpf_create_map_attr VAR_2 = {
  .name = "test_map",
  .map_type = VAR_1,
  .key_size = 4,
  .value_size = 8,
  .max_entries = 0,
  .map_flags = VAR_0,
  .btf_key_type_id = 1,
  .btf_value_type_id = 3,
 };
 int VAR_3, VAR_4;

 VAR_4 = FUNC_2();
 if (VAR_4 < 0)
  return -1;
 VAR_2.btf_fd = VAR_4;
 VAR_3 = FUNC_0(&VAR_2);
 FUNC_1(VAR_2.btf_fd);
 if (VAR_3 < 0)
  FUNC_3("Failed to create sk_storage_map\n");
 return VAR_3;
}
