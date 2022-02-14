
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_fd; int attach_type; void* prog_cnt; void* attach_flags; int prog_ids; void* query_flags; } ;
union bpf_attr {TYPE_1__ query; } ;
typedef enum bpf_attach_type { ____Placeholder_bpf_attach_type } bpf_attach_type ;
typedef int attr ;
typedef void* __u32 ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, enum bpf_attach_type VAR_2, __u32 VAR_3,
     __u32 *VAR_4, __u32 *VAR_5, __u32 *VAR_6)
{
 union bpf_attr VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.query.target_fd = VAR_1;
 VAR_7.query.attach_type = VAR_2;
 VAR_7.query.query_flags = VAR_3;
 VAR_7.query.prog_cnt = *VAR_6;
 VAR_7.query.prog_ids = FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_0, &VAR_7, sizeof(VAR_7));
 if (VAR_4)
  *VAR_4 = VAR_7.query.attach_flags;
 *VAR_6 = VAR_7.query.prog_cnt;
 return VAR_8;
}
