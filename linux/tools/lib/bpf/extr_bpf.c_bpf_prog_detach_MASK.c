
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int target_fd; int attach_type; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (int ,union bpf_attr*,int) ;

int FUNC_2(int VAR_1, enum bpf_attach_type VAR_2)
{
 union bpf_attr VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.target_fd = VAR_1;
 VAR_3.attach_type = VAR_2;

 return FUNC_1(VAR_0, &VAR_3, sizeof(VAR_3));
}
