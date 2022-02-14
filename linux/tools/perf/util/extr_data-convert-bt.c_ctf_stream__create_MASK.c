
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ctf_writer {int stream_class; int writer; } ;
struct ctf_stream {int cpu; struct bt_ctf_stream* stream; } ;
struct bt_ctf_stream {int dummy; } ;
struct bt_ctf_field {int dummy; } ;


 int FUNC_0 (struct bt_ctf_field*) ;
 struct bt_ctf_field* FUNC_1 (struct bt_ctf_field*,char*) ;
 int FUNC_2 (struct bt_ctf_field*,int ) ;
 struct bt_ctf_field* FUNC_3 (struct bt_ctf_stream*) ;
 int FUNC_4 (struct bt_ctf_stream*) ;
 struct bt_ctf_stream* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ctf_stream*) ;
 int FUNC_7 (char*) ;
 struct ctf_stream* FUNC_8 (int) ;

__attribute__((used)) static struct ctf_stream *FUNC_9(struct ctf_writer *VAR_0, int VAR_1)
{
 struct ctf_stream *VAR_2;
 struct bt_ctf_field *VAR_3 = ((void*)0);
 struct bt_ctf_field *VAR_4 = ((void*)0);
 struct bt_ctf_stream *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_2 = FUNC_8(sizeof(*VAR_2));
 if (!VAR_2) {
  FUNC_7("Failed to allocate ctf stream\n");
  return ((void*)0);
 }

 VAR_5 = FUNC_5(VAR_0->writer, VAR_0->stream_class);
 if (!VAR_5) {
  FUNC_7("Failed to create CTF stream\n");
  goto out;
 }

 VAR_3 = FUNC_3(VAR_5);
 if (!VAR_3) {
  FUNC_7("Failed to obtain packet context\n");
  goto out;
 }

 VAR_4 = FUNC_1(VAR_3, "cpu_id");
 FUNC_0(VAR_3);
 if (!VAR_4) {
  FUNC_7("Failed to obtain cpu field\n");
  goto out;
 }

 VAR_6 = FUNC_2(VAR_4, (u32) VAR_1);
 if (VAR_6) {
  FUNC_7("Failed to update CPU number\n");
  goto out;
 }

 FUNC_0(VAR_4);

 VAR_2->cpu = VAR_1;
 VAR_2->stream = VAR_5;
 return VAR_2;

out:
 if (VAR_4)
  FUNC_0(VAR_4);
 if (VAR_5)
  FUNC_4(VAR_5);

 FUNC_6(VAR_2);
 return ((void*)0);
}
