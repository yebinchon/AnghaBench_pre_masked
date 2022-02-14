
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_raw_test {char* descr; int btf_load_err; int map_create_err; int value_type_id; int key_type_id; int max_entries; int value_size; int key_size; int map_type; int map_name; int err_str; scalar_t__ str_len_delta; scalar_t__ str_off_delta; scalar_t__ type_off_delta; scalar_t__ hdr_len_delta; int str_sec_size; int str_sec; int raw_types; } ;
struct btf_header {scalar_t__ str_len; scalar_t__ str_off; scalar_t__ type_off; scalar_t__ hdr_len; } ;
struct bpf_create_map_attr {int btf_fd; int btf_value_type_id; int btf_key_type_id; int max_entries; int value_size; int key_size; int map_type; int name; } ;
struct TYPE_2__ {scalar_t__ always_log; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct bpf_create_map_attr*) ;
 int FUNC_2 (void*,unsigned int,char*,int ,scalar_t__) ;
 char* VAR_2 ;
 void* FUNC_3 (int *,int ,int ,int ,unsigned int*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (void*) ;
 int VAR_3 ;
 struct btf_raw_test* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_6)
{
 struct btf_raw_test *VAR_7 = &VAR_4[VAR_6 - 1];
 struct bpf_create_map_attr VAR_8 = {};
 int VAR_9 = -1, VAR_10 = -1;
 unsigned int VAR_11;
 struct btf_header *VAR_12;
 void *VAR_13;
 int VAR_14;

 FUNC_5(VAR_5, "BTF raw test[%u] (%s): ", VAR_6, VAR_7->descr);
 VAR_13 = FUNC_3(&VAR_3,
     VAR_7->raw_types,
     VAR_7->str_sec,
     VAR_7->str_sec_size,
     &VAR_11, ((void*)0));

 if (!VAR_13)
  return -1;

 VAR_12 = VAR_13;

 VAR_12->hdr_len = (int)VAR_12->hdr_len + VAR_7->hdr_len_delta;
 VAR_12->type_off = (int)VAR_12->type_off + VAR_7->type_off_delta;
 VAR_12->str_off = (int)VAR_12->str_off + VAR_7->str_off_delta;
 VAR_12->str_len = (int)VAR_12->str_len + VAR_7->str_len_delta;

 *VAR_2 = '\0';
 VAR_10 = FUNC_2(VAR_13, VAR_11,
         VAR_2, VAR_0,
         VAR_1.always_log);
 FUNC_6(VAR_13);

 VAR_14 = ((VAR_10 == -1) != VAR_7->btf_load_err);
 if (FUNC_0(VAR_14, "btf_fd:%d test->btf_load_err:%u",
    VAR_10, VAR_7->btf_load_err) ||
     FUNC_0(VAR_7->err_str && !FUNC_7(VAR_2, VAR_7->err_str),
    "expected err_str:%s", VAR_7->err_str)) {
  VAR_14 = -1;
  goto done;
 }

 if (VAR_14 || VAR_10 == -1)
  goto done;

 VAR_8.name = VAR_7->map_name;
 VAR_8.map_type = VAR_7->map_type;
 VAR_8.key_size = VAR_7->key_size;
 VAR_8.value_size = VAR_7->value_size;
 VAR_8.max_entries = VAR_7->max_entries;
 VAR_8.btf_fd = VAR_10;
 VAR_8.btf_key_type_id = VAR_7->key_type_id;
 VAR_8.btf_value_type_id = VAR_7->value_type_id;

 VAR_9 = FUNC_1(&VAR_8);

 VAR_14 = ((VAR_9 == -1) != VAR_7->map_create_err);
 FUNC_0(VAR_14, "map_fd:%d test->map_create_err:%u",
       VAR_9, VAR_7->map_create_err);

done:
 if (!VAR_14)
  FUNC_5(VAR_5, "OK");

 if (*VAR_2 && (VAR_14 || VAR_1.always_log))
  FUNC_5(VAR_5, "\n%s", VAR_2);

 if (VAR_10 != -1)
  FUNC_4(VAR_10);
 if (VAR_9 != -1)
  FUNC_4(VAR_9);

 return VAR_14;
}
