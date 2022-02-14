
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char const* file; int prog_type; int prog_flags; scalar_t__ expected_attach_type; } ;
struct bpf_object {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_1 (struct bpf_prog_load_attr*,int ,int) ;

int FUNC_2(const char *VAR_1, enum bpf_prog_type VAR_2,
         struct bpf_object **VAR_3, int *VAR_4)
{
 struct bpf_prog_load_attr VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(struct bpf_prog_load_attr));
 VAR_5.file = VAR_1;
 VAR_5.prog_type = VAR_2;
 VAR_5.expected_attach_type = 0;
 VAR_5.prog_flags = VAR_0;

 return FUNC_0(&VAR_5, VAR_3, VAR_4);
}
