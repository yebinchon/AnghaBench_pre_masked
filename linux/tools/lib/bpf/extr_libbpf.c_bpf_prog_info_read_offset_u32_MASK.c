
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int dummy; } ;
typedef int __u32 ;



__attribute__((used)) static __u32 FUNC_0(struct bpf_prog_info *VAR_0, int VAR_1)
{
 __u32 *VAR_2 = (__u32 *)VAR_0;

 if (VAR_1 >= 0)
  return VAR_2[VAR_1 / sizeof(__u32)];
 return -(int)VAR_1;
}
