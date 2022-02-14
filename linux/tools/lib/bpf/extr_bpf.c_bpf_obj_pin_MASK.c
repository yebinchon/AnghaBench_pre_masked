
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int bpf_fd; int pathname; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, const char *VAR_2)
{
 union bpf_attr VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.pathname = FUNC_1((void *)VAR_2);
 VAR_3.bpf_fd = VAR_1;

 return FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
}
