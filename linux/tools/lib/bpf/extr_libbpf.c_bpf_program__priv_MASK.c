
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {void* priv; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

void *FUNC_1(const struct bpf_program *VAR_1)
{
 return VAR_1 ? VAR_1->priv : FUNC_0(-VAR_0);
}
