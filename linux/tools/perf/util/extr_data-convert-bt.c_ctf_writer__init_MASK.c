
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int u32; } ;
struct ctf_writer {TYPE_1__ data; struct bt_ctf_stream_class* stream_class; struct bt_ctf_clock* clock; struct bt_ctf_writer* writer; } ;
struct bt_ctf_writer {int dummy; } ;
struct bt_ctf_stream_class {int dummy; } ;
struct bt_ctf_field_type {int dummy; } ;
struct bt_ctf_clock {int dummy; } ;


 struct bt_ctf_clock* FUNC_0 (char*) ;
 int FUNC_1 (struct bt_ctf_field_type*) ;
 int FUNC_2 (struct bt_ctf_field_type*,int ,char*) ;
 struct bt_ctf_stream_class* FUNC_3 (char*) ;
 struct bt_ctf_field_type* FUNC_4 (struct bt_ctf_stream_class*) ;
 scalar_t__ FUNC_5 (struct bt_ctf_stream_class*,struct bt_ctf_clock*) ;
 scalar_t__ FUNC_6 (struct bt_ctf_writer*,struct bt_ctf_clock*) ;
 struct bt_ctf_writer* FUNC_7 (char const*) ;
 int FUNC_8 (struct ctf_writer*) ;
 scalar_t__ FUNC_9 (struct ctf_writer*) ;
 scalar_t__ FUNC_10 (struct ctf_writer*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(struct ctf_writer *VAR_0, const char *VAR_1)
{
 struct bt_ctf_writer *VAR_2;
 struct bt_ctf_stream_class *VAR_3;
 struct bt_ctf_clock *VAR_4;
 struct bt_ctf_field_type *VAR_5;
 int VAR_6;


 VAR_2 = FUNC_7(VAR_1);
 if (!VAR_2)
  goto err;

 VAR_0->writer = VAR_2;


 VAR_4 = FUNC_0("perf_clock");
 if (!VAR_4) {
  FUNC_11("Failed to create CTF clock.\n");
  goto err_cleanup;
 }

 VAR_0->clock = VAR_4;

 if (FUNC_10(VAR_0)) {
  FUNC_11("Failed to setup CTF clock.\n");
  goto err_cleanup;
 }


 VAR_3 = FUNC_3("perf_stream");
 if (!VAR_3) {
  FUNC_11("Failed to create CTF stream class.\n");
  goto err_cleanup;
 }

 VAR_0->stream_class = VAR_3;


 if (FUNC_5(VAR_3, VAR_4)) {
  FUNC_11("Failed to assign CTF clock to stream class.\n");
  goto err_cleanup;
 }

 if (FUNC_9(VAR_0))
  goto err_cleanup;


 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  goto err_cleanup;

 VAR_6 = FUNC_2(VAR_5, VAR_0->data.u32, "cpu_id");
 FUNC_1(VAR_5);
 if (VAR_6)
  goto err_cleanup;


 if (FUNC_6(VAR_2, VAR_4)) {
  FUNC_11("Failed to assign CTF clock to writer.\n");
  goto err_cleanup;
 }

 return 0;

err_cleanup:
 FUNC_8(VAR_0);
err:
 FUNC_12("Failed to setup CTF writer.\n");
 return -1;
}
