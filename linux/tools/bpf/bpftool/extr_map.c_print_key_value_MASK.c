
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_dumper {int is_plain_text; int * jw; struct btf* btf; } ;
struct btf {int dummy; } ;
struct bpf_map_info {int btf_id; } ;
typedef int json_writer_t ;


 int FUNC_0 (struct btf*) ;
 int FUNC_1 (int ,struct btf**) ;
 int FUNC_2 (struct btf_dumper*,struct bpf_map_info*,void*,void*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int **) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct bpf_map_info*,void*,void*,struct btf*) ;
 int FUNC_8 (struct bpf_map_info*,void*,void*) ;

__attribute__((used)) static void FUNC_9(struct bpf_map_info *VAR_1, void *VAR_2,
       void *VAR_3)
{
 json_writer_t *VAR_4;
 struct btf *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1->btf_id, &VAR_5);
 if (VAR_6) {
  FUNC_5("failed to get btf");
  return;
 }

 if (VAR_0) {
  FUNC_7(VAR_1, VAR_2, VAR_3, VAR_5);
 } else if (VAR_5) {



  VAR_4 = FUNC_3();
  if (!VAR_4) {
   FUNC_6("failed to create json writer for btf. falling back to plain output");
   FUNC_0(VAR_5);
   VAR_5 = ((void*)0);
   FUNC_8(VAR_1, VAR_2, VAR_3);
  } else {
   struct btf_dumper VAR_7 = {
    .btf = VAR_5,
    .jw = VAR_4,
    .is_plain_text = 1,
   };

   FUNC_2(&VAR_7, VAR_1, VAR_2, VAR_3);
   FUNC_4(&VAR_4);
  }
 } else {
  FUNC_8(VAR_1, VAR_2, VAR_3);
 }
 FUNC_0(VAR_5);
}
