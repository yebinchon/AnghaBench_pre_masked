
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int section_name; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;


 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static int
FUNC_1(struct bpf_program *VAR_0,
         enum bpf_prog_type *VAR_1,
         enum bpf_attach_type *VAR_2)
{
 return FUNC_0(VAR_0->section_name, VAR_1,
     VAR_2);
}
