
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; int fd; int probe_addr; int probe_offset; void* fd_type; void* prog_id; void* buf_len; int buf; void* flags; } ;
union bpf_attr {TYPE_1__ task_fd_query; } ;
typedef int attr ;
typedef int __u64 ;
typedef void* __u32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,union bpf_attr*,int) ;

int FUNC_2(int VAR_1, int VAR_2, __u32 VAR_3, char *VAR_4, __u32 *VAR_5,
        __u32 *VAR_6, __u32 *VAR_7, __u64 *VAR_8,
        __u64 *VAR_9)
{
 union bpf_attr VAR_10 = {};
 int VAR_11;

 VAR_10.task_fd_query.pid = VAR_1;
 VAR_10.task_fd_query.fd = VAR_2;
 VAR_10.task_fd_query.flags = VAR_3;
 VAR_10.task_fd_query.buf = FUNC_0(VAR_4);
 VAR_10.task_fd_query.buf_len = *VAR_5;

 VAR_11 = FUNC_1(VAR_0, &VAR_10, sizeof(VAR_10));
 *VAR_5 = VAR_10.task_fd_query.buf_len;
 *VAR_6 = VAR_10.task_fd_query.prog_id;
 *VAR_7 = VAR_10.task_fd_query.fd_type;
 *VAR_8 = VAR_10.task_fd_query.probe_offset;
 *VAR_9 = VAR_10.task_fd_query.probe_addr;

 return VAR_11;
}
