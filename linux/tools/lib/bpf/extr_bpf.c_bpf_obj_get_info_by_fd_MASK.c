
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bpf_fd; int info_len; int info; } ;
union bpf_attr {TYPE_1__ info; } ;
typedef int attr ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, void *VAR_2, __u32 *VAR_3)
{
 union bpf_attr VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.info.bpf_fd = VAR_1;
 VAR_4.info.info_len = *VAR_3;
 VAR_4.info.info = FUNC_1(VAR_2);

 VAR_5 = FUNC_2(VAR_0, &VAR_4, sizeof(VAR_4));
 if (!VAR_5)
  *VAR_3 = VAR_4.info.info_len;

 return VAR_5;
}
