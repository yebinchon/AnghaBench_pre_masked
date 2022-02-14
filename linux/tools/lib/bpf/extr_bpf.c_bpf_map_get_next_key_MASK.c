
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_fd; void* next_key; void* key; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, const void *VAR_2, void *VAR_3)
{
 union bpf_attr VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.map_fd = VAR_1;
 VAR_4.key = FUNC_1(VAR_2);
 VAR_4.next_key = FUNC_1(VAR_3);

 return FUNC_2(VAR_0, &VAR_4, sizeof(VAR_4));
}
