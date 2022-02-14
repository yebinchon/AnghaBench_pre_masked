
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct btf_get_info_test {int str_sec_size; int str_sec; int raw_types; } ;
struct bpf_map_info {unsigned int btf_size; scalar_t__ id; scalar_t__ btf_id; int btf_key_type_id; int btf_value_type_id; int btf; } ;
struct bpf_create_map_attr {char* name; int key_size; int value_size; int max_entries; int btf_fd; int btf_key_type_id; int btf_value_type_id; int map_type; } ;
struct bpf_btf_info {unsigned int btf_size; scalar_t__ id; scalar_t__ btf_id; int btf_key_type_id; int btf_value_type_id; int btf; } ;
typedef int map_info ;
typedef int info ;
struct TYPE_2__ {scalar_t__ always_log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,...) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bpf_create_map_attr*) ;
 int FUNC_3 (int *,unsigned int,char*,int ,scalar_t__) ;
 int FUNC_4 (int,struct bpf_map_info*,int*) ;
 char* VAR_3 ;
 int * FUNC_5 (int *,int ,int ,int ,unsigned int*,int *) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 struct btf_get_info_test* VAR_5 ;
 int VAR_6 ;
 int * FUNC_9 (unsigned int) ;
 int FUNC_10 (int *,int *,unsigned int) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_12(unsigned int VAR_8)
{
 const struct btf_get_info_test *VAR_9 = &VAR_5[VAR_8 - 1];
 struct bpf_create_map_attr VAR_10 = {};
 uint8_t *VAR_11 = ((void*)0), *VAR_12[2] = {};
 int VAR_13[2] = {-1, -1}, VAR_14 = -1;
 struct bpf_map_info VAR_15 = {};
 struct bpf_btf_info VAR_16[2] = {};
 unsigned int VAR_17;
 uint32_t VAR_18;
 int VAR_19, VAR_20, VAR_21;

 VAR_11 = FUNC_5(&VAR_6,
     VAR_9->raw_types,
     VAR_9->str_sec,
     VAR_9->str_sec_size,
     &VAR_17, ((void*)0));

 if (!VAR_11)
  return -1;

 *VAR_3 = '\0';

 for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
  VAR_12[VAR_20] = FUNC_9(VAR_17);
  if (FUNC_0(!VAR_12[VAR_20], "!user_btf[%d]", VAR_20)) {
   VAR_19 = -1;
   goto done;
  }
  VAR_16[VAR_20].btf = FUNC_11(VAR_12[VAR_20]);
  VAR_16[VAR_20].btf_size = VAR_17;
 }

 VAR_13[0] = FUNC_3(VAR_11, VAR_17,
     VAR_3, VAR_1,
     VAR_2.always_log);
 if (FUNC_0(VAR_13[0] == -1, "errno:%d", VAR_4)) {
  VAR_19 = -1;
  goto done;
 }


 VAR_18 = sizeof(VAR_16[0]);
 VAR_19 = FUNC_4(VAR_13[0], &VAR_16[0], &VAR_18);
 if (FUNC_0(VAR_19, "errno:%d", VAR_4)) {
  VAR_19 = -1;
  goto done;
 }

 VAR_13[1] = FUNC_1(VAR_16[0].id);
 if (FUNC_0(VAR_13[1] == -1, "errno:%d", VAR_4)) {
  VAR_19 = -1;
  goto done;
 }

 VAR_21 = 0;
 VAR_19 = FUNC_4(VAR_13[1], &VAR_16[1], &VAR_18);
 if (FUNC_0(VAR_19 || VAR_16[0].id != VAR_16[1].id ||
    VAR_16[0].btf_size != VAR_16[1].btf_size ||
    (VAR_21 = FUNC_10(VAR_12[0], VAR_12[1], VAR_16[0].btf_size)),
    "err:%d errno:%d id0:%u id1:%u btf_size0:%u btf_size1:%u memcmp:%d",
    VAR_19, VAR_4, VAR_16[0].id, VAR_16[1].id,
    VAR_16[0].btf_size, VAR_16[1].btf_size, VAR_21)) {
  VAR_19 = -1;
  goto done;
 }


 VAR_10.name = "test_btf_id";
 VAR_10.map_type = VAR_0;
 VAR_10.key_size = sizeof(int);
 VAR_10.value_size = sizeof(unsigned int);
 VAR_10.max_entries = 4;
 VAR_10.btf_fd = VAR_13[0];
 VAR_10.btf_key_type_id = 1;
 VAR_10.btf_value_type_id = 2;

 VAR_14 = FUNC_2(&VAR_10);
 if (FUNC_0(VAR_14 == -1, "errno:%d", VAR_4)) {
  VAR_19 = -1;
  goto done;
 }

 VAR_18 = sizeof(VAR_15);
 VAR_19 = FUNC_4(VAR_14, &VAR_15, &VAR_18);
 if (FUNC_0(VAR_19 || VAR_15.btf_id != VAR_16[0].id ||
    VAR_15.btf_key_type_id != 1 || VAR_15.btf_value_type_id != 2,
    "err:%d errno:%d info.id:%u btf_id:%u btf_key_type_id:%u btf_value_type_id:%u",
    VAR_19, VAR_4, VAR_16[0].id, VAR_15.btf_id, VAR_15.btf_key_type_id,
    VAR_15.btf_value_type_id)) {
  VAR_19 = -1;
  goto done;
 }

 for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
  FUNC_6(VAR_13[VAR_20]);
  VAR_13[VAR_20] = -1;
 }


 VAR_13[0] = FUNC_1(VAR_15.btf_id);
 if (FUNC_0(VAR_13[0] == -1, "errno:%d", VAR_4)) {
  VAR_19 = -1;
  goto done;
 }
 FUNC_6(VAR_13[0]);
 VAR_13[0] = -1;


 FUNC_6(VAR_14);
 VAR_14 = -1;
 VAR_13[0] = FUNC_1(VAR_15.btf_id);
 if (FUNC_0(VAR_13[0] != -1, "BTF lingers")) {
  VAR_19 = -1;
  goto done;
 }

 FUNC_7(VAR_7, "OK");

done:
 if (*VAR_3 && (VAR_19 || VAR_2.always_log))
  FUNC_7(VAR_7, "\n%s", VAR_3);

 FUNC_8(VAR_11);
 if (VAR_14 != -1)
  FUNC_6(VAR_14);
 for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
  FUNC_8(VAR_12[VAR_20]);
  if (VAR_13[VAR_20] != -1)
   FUNC_6(VAR_13[VAR_20]);
 }

 return VAR_19;
}
