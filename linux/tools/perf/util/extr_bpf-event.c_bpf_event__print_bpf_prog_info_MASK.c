
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_env {int dummy; } ;
struct btf_node {int data_size; scalar_t__ data; } ;
struct btf {int dummy; } ;
struct bpf_prog_info {int nr_jited_ksyms; int nr_prog_tags; int nr_jited_func_lens; int id; scalar_t__ btf_id; scalar_t__ jited_ksyms; scalar_t__ jited_func_lens; } ;
typedef int __u8 ;
typedef int __u64 ;
typedef int __u32 ;
typedef int FILE ;


 int VAR_0 ;
 struct btf* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct btf_node* FUNC_2 (struct perf_env*,scalar_t__) ;
 int FUNC_3 (char*,int,struct bpf_prog_info*,struct btf*,int) ;

void FUNC_4(struct bpf_prog_info *VAR_1,
        struct perf_env *VAR_2,
        FILE *VAR_3)
{
 __u32 *VAR_4 = (__u32 *)(uintptr_t)(VAR_1->jited_func_lens);
 __u64 *VAR_5 = (__u64 *)(uintptr_t)(VAR_1->jited_ksyms);
 char VAR_6[VAR_0];
 struct btf *VAR_7 = ((void*)0);
 u32 VAR_8, VAR_9;

 VAR_8 = VAR_1->nr_jited_ksyms;
 if (VAR_8 != VAR_1->nr_prog_tags ||
     VAR_8 != VAR_1->nr_jited_func_lens)
  return;

 if (VAR_1->btf_id) {
  struct btf_node *VAR_10;

  VAR_10 = FUNC_2(VAR_2, VAR_1->btf_id);
  if (VAR_10)
   VAR_7 = FUNC_0((__u8 *)(VAR_10->data),
           VAR_10->data_size);
 }

 if (VAR_8 == 1) {
  FUNC_3(VAR_6, VAR_0, VAR_1, VAR_7, 0);
  FUNC_1(VAR_3, "# bpf_prog_info %u: %s addr 0x%llx size %u\n",
   VAR_1->id, VAR_6, VAR_5[0], VAR_4[0]);
  return;
 }

 FUNC_1(VAR_3, "# bpf_prog_info %u:\n", VAR_1->id);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_3(VAR_6, VAR_0, VAR_1, VAR_7, VAR_9);

  FUNC_1(VAR_3, "# \tsub_prog %u: %s addr 0x%llx size %u\n",
   VAR_9, VAR_6, VAR_5[VAR_9], VAR_4[VAR_9]);
 }
}
