
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int prog_ifindex; } ;
typedef int __u32 ;



void FUNC_0(struct bpf_program *VAR_0, __u32 VAR_1)
{
 VAR_0->prog_ifindex = VAR_1;
}
