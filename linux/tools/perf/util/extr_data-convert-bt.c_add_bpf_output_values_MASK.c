
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct perf_sample {unsigned int raw_size; scalar_t__ raw_data; } ;
struct bt_ctf_field_type {int dummy; } ;
struct bt_ctf_field {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;
struct bt_ctf_event {int dummy; } ;


 struct bt_ctf_field_type* FUNC_0 (struct bt_ctf_event_class*,char*) ;
 int FUNC_1 (struct bt_ctf_event*,char*,struct bt_ctf_field*) ;
 struct bt_ctf_field* FUNC_2 (struct bt_ctf_field_type*) ;
 int FUNC_3 (struct bt_ctf_field*) ;
 struct bt_ctf_field* FUNC_4 (struct bt_ctf_field*,unsigned int) ;
 int FUNC_5 (struct bt_ctf_field*,struct bt_ctf_field*) ;
 int FUNC_6 (struct bt_ctf_field_type*) ;
 int FUNC_7 (struct bt_ctf_field*,unsigned int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_10(struct bt_ctf_event_class *VAR_0,
        struct bt_ctf_event *VAR_1,
        struct perf_sample *VAR_2)
{
 struct bt_ctf_field_type *VAR_3, *VAR_4;
 struct bt_ctf_field *VAR_5, *VAR_6;
 unsigned int VAR_7 = VAR_2->raw_size;
 unsigned int VAR_8 = VAR_7 / sizeof(u32);
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_8 * sizeof(u32) != VAR_7)
  FUNC_9("Incorrect raw_size (%u) in bpf output event, skip %zu bytes\n",
      VAR_7, VAR_8 * sizeof(u32) - VAR_7);

 VAR_3 = FUNC_0(VAR_0, "raw_len");
 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5) {
  FUNC_8("failed to create 'raw_len' for bpf output event\n");
  VAR_10 = -1;
  goto put_len_type;
 }

 VAR_10 = FUNC_7(VAR_5, VAR_8);
 if (VAR_10) {
  FUNC_8("failed to set field value for raw_len\n");
  goto put_len_field;
 }
 VAR_10 = FUNC_1(VAR_1, "raw_len", VAR_5);
 if (VAR_10) {
  FUNC_8("failed to set payload to raw_len\n");
  goto put_len_field;
 }

 VAR_4 = FUNC_0(VAR_0, "raw_data");
 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6) {
  FUNC_8("failed to create 'raw_data' for bpf output event\n");
  VAR_10 = -1;
  goto put_seq_type;
 }

 VAR_10 = FUNC_5(VAR_6, VAR_5);
 if (VAR_10) {
  FUNC_8("failed to set length of 'raw_data'\n");
  goto put_seq_field;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct bt_ctf_field *VAR_11 =
   FUNC_4(VAR_6, VAR_9);

  VAR_10 = FUNC_7(VAR_11,
    ((u32 *)(VAR_2->raw_data))[VAR_9]);

  FUNC_3(VAR_11);
  if (VAR_10) {
   FUNC_8("failed to set raw_data[%d]\n", VAR_9);
   goto put_seq_field;
  }
 }

 VAR_10 = FUNC_1(VAR_1, "raw_data", VAR_6);
 if (VAR_10)
  FUNC_8("failed to set payload for raw_data\n");

put_seq_field:
 FUNC_3(VAR_6);
put_seq_type:
 FUNC_6(VAR_4);
put_len_field:
 FUNC_3(VAR_5);
put_len_type:
 FUNC_6(VAR_3);
 return VAR_10;
}
