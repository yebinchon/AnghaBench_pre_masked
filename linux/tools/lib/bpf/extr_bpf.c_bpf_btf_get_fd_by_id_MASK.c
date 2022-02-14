
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int btf_id; } ;
typedef int attr ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (int ,union bpf_attr*,int) ;

int FUNC_2(__u32 VAR_1)
{
 union bpf_attr VAR_2;

 FUNC_0(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.btf_id = VAR_1;

 return FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2));
}
