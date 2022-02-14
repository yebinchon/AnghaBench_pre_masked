
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
struct btf_raw_test {int mapv_kind; char* descr; char* map_name; unsigned int max_entries; int percpu_map; int ordered_map; int lossless_map; int value_type_id; int key_type_id; int value_size; int key_size; int map_type; int str_sec_size; int str_sec; int raw_types; } ;
struct bpf_create_map_attr {char* name; unsigned int max_entries; int btf_fd; int btf_value_type_id; int btf_key_type_id; int value_size; int key_size; int map_type; } ;
typedef scalar_t__ ssize_t ;
typedef int pin_path ;
typedef int expected_line ;
typedef enum pprint_mapv_kind_t { ____Placeholder_pprint_mapv_kind_t } pprint_mapv_kind_t ;
struct TYPE_2__ {scalar_t__ always_log; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,...) ;
 TYPE_1__ VAR_1 ;
 unsigned int FUNC_1 (char*) ;
 int FUNC_2 (struct bpf_create_map_attr*) ;
 int FUNC_3 (char*,unsigned int,char*,int ,scalar_t__) ;
 int FUNC_4 (int,unsigned int*,void*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 char* VAR_2 ;
 char* FUNC_7 (int *,int ,int ,int ,unsigned int*,int *) ;
 void* FUNC_8 (int,int) ;
 int FUNC_9 (char*,scalar_t__,int,char*) ;
 int FUNC_10 (int) ;
 char* VAR_3 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (char*,char*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int,char*,int,int,unsigned int,int,void*) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (char**,size_t*,int *) ;
 int VAR_4 ;
 struct btf_raw_test* VAR_5 ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int,void*,unsigned int,int,int) ;
 void* FUNC_20 (char*,int,char*,...) ;
 int VAR_6 ;
 int FUNC_21 (char*) ;

__attribute__((used)) static int FUNC_22(int VAR_7)
{
 const struct btf_raw_test *VAR_8 = &VAR_5[VAR_7];
 enum pprint_mapv_kind_t VAR_9 = VAR_8->mapv_kind;
 struct bpf_create_map_attr VAR_10 = {};
 bool VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18, VAR_19;
 int VAR_20 = -1, VAR_21 = -1;
 unsigned int VAR_22;
 char VAR_23[255];
 FILE *VAR_24 = ((void*)0);
 char VAR_25[255];
 size_t VAR_26 = 0;
 char *VAR_27 = ((void*)0);
 void *VAR_28 = ((void*)0);
 uint8_t *VAR_29;
 ssize_t VAR_30;

 FUNC_13(VAR_6, "%s(#%d)......", VAR_8->descr, VAR_7);
 VAR_29 = FUNC_7(&VAR_4, VAR_8->raw_types,
     VAR_8->str_sec, VAR_8->str_sec_size,
     &VAR_22, ((void*)0));

 if (!VAR_29)
  return -1;

 *VAR_2 = '\0';
 VAR_21 = FUNC_3(VAR_29, VAR_22,
         VAR_2, VAR_0,
         VAR_1.always_log);
 FUNC_14(VAR_29);

 if (FUNC_0(VAR_21 == -1, "errno:%d", VAR_3)) {
  VAR_14 = -1;
  goto done;
 }

 VAR_10.name = VAR_8->map_name;
 VAR_10.map_type = VAR_8->map_type;
 VAR_10.key_size = VAR_8->key_size;
 VAR_10.value_size = VAR_8->value_size;
 VAR_10.max_entries = VAR_8->max_entries;
 VAR_10.btf_fd = VAR_21;
 VAR_10.btf_key_type_id = VAR_8->key_type_id;
 VAR_10.btf_value_type_id = VAR_8->value_type_id;

 VAR_20 = FUNC_2(&VAR_10);
 if (FUNC_0(VAR_20 == -1, "errno:%d", VAR_3)) {
  VAR_14 = -1;
  goto done;
 }

 VAR_15 = FUNC_20(VAR_25, sizeof(VAR_25), "%s/%s",
         "/sys/fs/bpf", VAR_8->map_name);

 if (FUNC_0(VAR_15 == sizeof(VAR_25), "pin_path %s/%s is too long",
    "/sys/fs/bpf", VAR_8->map_name)) {
  VAR_14 = -1;
  goto done;
 }

 VAR_14 = FUNC_6(VAR_20, VAR_25);
 if (FUNC_0(VAR_14, "bpf_obj_pin(%s): errno:%d.", VAR_25, VAR_3))
  goto done;

 VAR_13 = VAR_8->percpu_map;
 VAR_16 = VAR_13 ? FUNC_5() : 1;
 VAR_17 = FUNC_18(FUNC_16(VAR_9), 8);
 VAR_28 = FUNC_8(VAR_16, VAR_17);
 if (FUNC_0(!VAR_28, "mapv allocation failure")) {
  VAR_14 = -1;
  goto done;
 }

 for (VAR_18 = 0; VAR_18 < VAR_8->max_entries; VAR_18++) {
  FUNC_19(VAR_9, VAR_28, VAR_18, VAR_16, VAR_17);
  FUNC_4(VAR_20, &VAR_18, VAR_28, 0);
 }

 VAR_24 = FUNC_12(VAR_25, "r");
 if (FUNC_0(!VAR_24, "fopen(%s): errno:%d", VAR_25, VAR_3)) {
  VAR_14 = -1;
  goto done;
 }


 while ((VAR_30 = FUNC_17(&VAR_27, &VAR_26, VAR_24)) > 0 &&
        *VAR_27 == '#')
  ;

 if (FUNC_0(VAR_30 <= 0, "Unexpected EOF")) {
  VAR_14 = -1;
  goto done;
 }

 VAR_19 = 0;
 VAR_11 = VAR_8->ordered_map;
 VAR_12 = VAR_8->lossless_map;
 do {
  ssize_t VAR_31;
  unsigned int VAR_32;
  void *VAR_33;
  int VAR_34;

  VAR_32 = VAR_11 ? VAR_19 : FUNC_1(VAR_27);
  FUNC_19(VAR_9, VAR_28, VAR_32, VAR_16, VAR_17);
  VAR_33 = VAR_28;

  for (VAR_34 = 0; VAR_34 < VAR_16; VAR_34++) {
   if (VAR_13) {
    if (VAR_34 == 0) {
     VAR_31 = FUNC_20(VAR_23,
          sizeof(VAR_23),
          "%u: {\n",
          VAR_32);

     VAR_14 = FUNC_9(VAR_23, VAR_31,
        sizeof(VAR_23), VAR_27);
     if (VAR_14 == -1)
      goto done;
    }


    VAR_30 = FUNC_17(&VAR_27, &VAR_26, VAR_24);
    if (VAR_30 < 0)
     break;
   }

   VAR_31 = FUNC_15(VAR_9, VAR_23,
          sizeof(VAR_23),
          VAR_13, VAR_32,
          VAR_34, VAR_33);
   VAR_14 = FUNC_9(VAR_23, VAR_31,
      sizeof(VAR_23), VAR_27);
   if (VAR_14 == -1)
    goto done;

   VAR_33 = VAR_33 + VAR_17;
  }

  if (VAR_13) {

   VAR_30 = FUNC_17(&VAR_27, &VAR_26, VAR_24);
   if (VAR_30 < 0)
    break;
  }

  VAR_30 = FUNC_17(&VAR_27, &VAR_26, VAR_24);
 } while (++VAR_19 < VAR_8->max_entries && VAR_30 > 0);

 if (VAR_12 &&
     FUNC_0(VAR_19 < VAR_8->max_entries,
    "Unexpected EOF. nr_read_elems:%u test->max_entries:%u",
    VAR_19, VAR_8->max_entries)) {
  VAR_14 = -1;
  goto done;
 }

 if (FUNC_0(VAR_30 > 0, "Unexpected extra pprint output: %s", VAR_27)) {
  VAR_14 = -1;
  goto done;
 }

 VAR_14 = 0;

done:
 if (VAR_28)
  FUNC_14(VAR_28);
 if (!VAR_14)
  FUNC_13(VAR_6, "OK");
 if (*VAR_2 && (VAR_14 || VAR_1.always_log))
  FUNC_13(VAR_6, "\n%s", VAR_2);
 if (VAR_21 != -1)
  FUNC_10(VAR_21);
 if (VAR_20 != -1)
  FUNC_10(VAR_20);
 if (VAR_24)
  FUNC_11(VAR_24);
 FUNC_21(VAR_25);
 FUNC_14(VAR_27);

 return VAR_14;
}
