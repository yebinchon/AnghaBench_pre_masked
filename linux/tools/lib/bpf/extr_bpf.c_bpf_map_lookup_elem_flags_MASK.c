
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int map_fd; int flags; void* value; void* key; } ;
typedef int attr ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, const void *VAR_2, void *VAR_3, __u64 VAR_4)
{
 union bpf_attr VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.map_fd = VAR_1;
 VAR_5.key = FUNC_1(VAR_2);
 VAR_5.value = FUNC_1(VAR_3);
 VAR_5.flags = VAR_4;

 return FUNC_2(VAR_0, &VAR_5, sizeof(VAR_5));
}
