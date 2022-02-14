
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char const* file; int prog_type; int log_level; int prog_flags; } ;
struct bpf_object {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_object*) ;
 int FUNC_1 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_2 (struct bpf_prog_load_attr*,int ,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, enum bpf_prog_type VAR_2)
{
 struct bpf_prog_load_attr VAR_3;
 struct bpf_object *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;

 FUNC_2(&VAR_3, 0, sizeof(struct bpf_prog_load_attr));
 VAR_3.file = VAR_1;
 VAR_3.prog_type = VAR_2;
 VAR_3.log_level = 4;
 VAR_3.prog_flags = VAR_0;
 VAR_5 = FUNC_1(&VAR_3, &VAR_4, &VAR_6);
 FUNC_0(VAR_4);
 return VAR_5;
}
