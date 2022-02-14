
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_object {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int VAR_0 ;
 struct bpf_program* FUNC_0 (struct bpf_object*,char const*) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (struct bpf_program*) ;
 int FUNC_3 (char const*,int*,int*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct bpf_object *VAR_1, int VAR_2, const char *VAR_3)
{
 enum bpf_attach_type VAR_4;
 enum bpf_prog_type VAR_5;
 struct bpf_program *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, &VAR_5, &VAR_4);
 if (VAR_7) {
  FUNC_4("Failed to deduct types for %s BPF program", VAR_3);
  return -1;
 }

 VAR_6 = FUNC_0(VAR_1, VAR_3);
 if (!VAR_6) {
  FUNC_4("Failed to find %s BPF program", VAR_3);
  return -1;
 }

 VAR_7 = FUNC_1(FUNC_2(VAR_6), VAR_2,
         VAR_4, VAR_0);
 if (VAR_7) {
  FUNC_4("Failed to attach %s BPF program", VAR_3);
  return -1;
 }

 return 0;
}
