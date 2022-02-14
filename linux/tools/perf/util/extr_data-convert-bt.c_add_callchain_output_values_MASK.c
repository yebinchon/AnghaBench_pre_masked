
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct ip_callchain {unsigned int nr; scalar_t__ ips; } ;
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

__attribute__((used)) static int
FUNC_9(struct bt_ctf_event_class *VAR_0,
        struct bt_ctf_event *VAR_1,
        struct ip_callchain *VAR_2)
{
 struct bt_ctf_field_type *VAR_3, *VAR_4;
 struct bt_ctf_field *VAR_5, *VAR_6;
 unsigned int VAR_7 = VAR_2->nr;
 unsigned int VAR_8;
 int VAR_9;

 VAR_3 = FUNC_0(
   VAR_0, "perf_callchain_size");
 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5) {
  FUNC_8("failed to create 'perf_callchain_size' for callchain output event\n");
  VAR_9 = -1;
  goto put_len_type;
 }

 VAR_9 = FUNC_7(VAR_5, VAR_7);
 if (VAR_9) {
  FUNC_8("failed to set field value for perf_callchain_size\n");
  goto put_len_field;
 }
 VAR_9 = FUNC_1(VAR_1, "perf_callchain_size", VAR_5);
 if (VAR_9) {
  FUNC_8("failed to set payload to perf_callchain_size\n");
  goto put_len_field;
 }

 VAR_4 = FUNC_0(
   VAR_0, "perf_callchain");
 VAR_6 = FUNC_2(VAR_4);
 if (!VAR_6) {
  FUNC_8("failed to create 'perf_callchain' for callchain output event\n");
  VAR_9 = -1;
  goto put_seq_type;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_5);
 if (VAR_9) {
  FUNC_8("failed to set length of 'perf_callchain'\n");
  goto put_seq_field;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  struct bt_ctf_field *VAR_10 =
   FUNC_4(VAR_6, VAR_8);

  VAR_9 = FUNC_7(VAR_10,
    ((u64 *)(VAR_2->ips))[VAR_8]);

  FUNC_3(VAR_10);
  if (VAR_9) {
   FUNC_8("failed to set callchain[%d]\n", VAR_8);
   goto put_seq_field;
  }
 }

 VAR_9 = FUNC_1(VAR_1, "perf_callchain", VAR_6);
 if (VAR_9)
  FUNC_8("failed to set payload for raw_data\n");

put_seq_field:
 FUNC_3(VAR_6);
put_seq_type:
 FUNC_6(VAR_4);
put_len_field:
 FUNC_3(VAR_5);
put_len_type:
 FUNC_6(VAR_3);
 return VAR_9;
}
