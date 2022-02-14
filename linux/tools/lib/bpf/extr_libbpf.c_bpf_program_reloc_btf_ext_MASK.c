
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int line_info_rec_size; int line_info; int line_info_cnt; int func_info_rec_size; int func_info; int func_info_cnt; } ;
struct bpf_object {int btf_ext; int btf; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char const*,int ,int *,int *) ;
 int FUNC_3 (int ,int ,char const*,int ,int *,int *) ;
 int FUNC_4 (struct bpf_program*,int,int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct bpf_program *VAR_0, struct bpf_object *VAR_1,
     const char *VAR_2, __u32 VAR_3)
{
 int VAR_4;

 if (!VAR_3 || VAR_0->func_info) {






  VAR_4 = FUNC_2(VAR_1->btf, VAR_1->btf_ext,
            VAR_2, VAR_3,
            &VAR_0->func_info,
            &VAR_0->func_info_cnt);
  if (VAR_4)
   return FUNC_4(VAR_0, VAR_4,
             VAR_0->func_info,
             "bpf_func_info");

  VAR_0->func_info_rec_size = FUNC_0(VAR_1->btf_ext);
 }

 if (!VAR_3 || VAR_0->line_info) {
  VAR_4 = FUNC_3(VAR_1->btf, VAR_1->btf_ext,
            VAR_2, VAR_3,
            &VAR_0->line_info,
            &VAR_0->line_info_cnt);
  if (VAR_4)
   return FUNC_4(VAR_0, VAR_4,
             VAR_0->line_info,
             "bpf_line_info");

  VAR_0->line_info_rec_size = FUNC_1(VAR_1->btf_ext);
 }

 return 0;
}
