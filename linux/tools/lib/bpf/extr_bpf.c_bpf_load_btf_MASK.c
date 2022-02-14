
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int btf_log_level; void* btf_log_buf; void* btf_log_size; void* btf_size; void* btf; } ;
typedef int attr ;
typedef void* __u32 ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (int ,union bpf_attr*,int) ;

int FUNC_2(void *VAR_1, __u32 VAR_2, char *VAR_3, __u32 VAR_4,
   bool VAR_5)
{
 union bpf_attr VAR_6 = {};
 int VAR_7;

 VAR_6.btf = FUNC_0(VAR_1);
 VAR_6.btf_size = VAR_2;

retry:
 if (VAR_5 && VAR_3 && VAR_4) {
  VAR_6.btf_log_level = 1;
  VAR_6.btf_log_size = VAR_4;
  VAR_6.btf_log_buf = FUNC_0(VAR_3);
 }

 VAR_7 = FUNC_1(VAR_0, &VAR_6, sizeof(VAR_6));
 if (VAR_7 == -1 && !VAR_5 && VAR_3 && VAR_4) {
  VAR_5 = 1;
  goto retry;
 }

 return VAR_7;
}
