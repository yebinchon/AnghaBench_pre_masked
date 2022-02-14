
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int dummy; } ;
typedef int __u64 ;



__attribute__((used)) static void FUNC_0(struct bpf_prog_info *VAR_0, int VAR_1,
      __u64 VAR_2)
{
 __u64 *VAR_3 = (__u64 *)VAR_0;

 if (VAR_1 >= 0)
  VAR_3[VAR_1 / sizeof(__u64)] = VAR_2;
}
