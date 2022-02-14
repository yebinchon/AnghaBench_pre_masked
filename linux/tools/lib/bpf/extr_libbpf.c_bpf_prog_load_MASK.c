
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char const* file; int prog_type; scalar_t__ expected_attach_type; } ;
struct bpf_object {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int FUNC_0 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_1 (struct bpf_prog_load_attr*,int ,int) ;

int FUNC_2(const char *VAR_0, enum bpf_prog_type VAR_1,
    struct bpf_object **VAR_2, int *VAR_3)
{
 struct bpf_prog_load_attr VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(struct bpf_prog_load_attr));
 VAR_4.file = VAR_0;
 VAR_4.prog_type = VAR_1;
 VAR_4.expected_attach_type = 0;

 return FUNC_0(&VAR_4, VAR_2, VAR_3);
}
