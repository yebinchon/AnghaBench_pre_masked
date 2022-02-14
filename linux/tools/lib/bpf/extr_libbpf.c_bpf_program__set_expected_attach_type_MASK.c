
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int expected_attach_type; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;



void FUNC_0(struct bpf_program *VAR_0,
        enum bpf_attach_type VAR_1)
{
 VAR_0->expected_attach_type = VAR_1;
}
