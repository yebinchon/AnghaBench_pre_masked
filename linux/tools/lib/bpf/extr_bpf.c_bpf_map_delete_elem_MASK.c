
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_fd; int key; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, const void *VAR_2)
{
 union bpf_attr VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.map_fd = VAR_1;
 VAR_3.key = FUNC_1(VAR_2);

 return FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
}
