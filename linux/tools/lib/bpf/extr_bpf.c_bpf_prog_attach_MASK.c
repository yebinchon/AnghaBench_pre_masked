
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int target_fd; int attach_bpf_fd; int attach_type; unsigned int attach_flags; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (int ,union bpf_attr*,int) ;

int FUNC_2(int VAR_1, int VAR_2, enum bpf_attach_type VAR_3,
      unsigned int VAR_4)
{
 union bpf_attr VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.target_fd = VAR_2;
 VAR_5.attach_bpf_fd = VAR_1;
 VAR_5.attach_type = VAR_3;
 VAR_5.attach_flags = VAR_4;

 return FUNC_1(VAR_0, &VAR_5, sizeof(VAR_5));
}
