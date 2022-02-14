
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_cgroup_dev_ctx {int access_type; int major; int minor; } ;
typedef int fmt ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;


 int FUNC_0 (char*,int,int,int ) ;

int FUNC_1(struct bpf_cgroup_dev_ctx *VAR_3)
{
 short VAR_4 = VAR_3->access_type & 0xFFFF;
 if (VAR_3->major != 1 || VAR_4 != 128)
  return 0;

 switch (VAR_3->minor) {
 case 5:
 case 9:
  return 1;
 }

 return 0;
}
