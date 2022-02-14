
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rec_size; } ;
struct btf_ext {TYPE_1__ func_info; } ;
typedef int __u32 ;



__u32 FUNC_0(const struct btf_ext *VAR_0)
{
 return VAR_0->func_info.rec_size;
}
