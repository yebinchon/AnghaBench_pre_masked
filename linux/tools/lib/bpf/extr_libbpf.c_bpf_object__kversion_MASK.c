
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_object {unsigned int kern_version; } ;



unsigned int FUNC_0(const struct bpf_object *VAR_0)
{
 return VAR_0 ? VAR_0->kern_version : 0;
}
