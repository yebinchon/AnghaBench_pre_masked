
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_object {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 struct bpf_program* FUNC_0 (struct bpf_object*,char const*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct bpf_program*) ;
 int FUNC_3 (char const*,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct bpf_object *VAR_0, int VAR_1, const char *VAR_2)
{
 enum bpf_attach_type VAR_3;
 enum bpf_prog_type VAR_4;
 struct bpf_program *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, &VAR_4, &VAR_3);
 if (VAR_6)
  return -1;

 VAR_5 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_5)
  return -1;

 VAR_6 = FUNC_1(FUNC_2(VAR_5), VAR_1,
          VAR_3);
 if (VAR_6)
  return -1;

 return 0;
}
