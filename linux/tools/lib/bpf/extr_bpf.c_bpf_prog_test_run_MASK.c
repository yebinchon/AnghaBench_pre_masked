
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prog_fd; int repeat; int duration; int retval; int data_size_out; int data_size_in; void* data_out; void* data_in; } ;
union bpf_attr {TYPE_1__ test; } ;
typedef int attr ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(int VAR_1, int VAR_2, void *VAR_3, __u32 VAR_4,
        void *VAR_5, __u32 *VAR_6, __u32 *VAR_7,
        __u32 *VAR_8)
{
 union bpf_attr VAR_9;
 int VAR_10;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.test.prog_fd = VAR_1;
 VAR_9.test.data_in = FUNC_1(VAR_3);
 VAR_9.test.data_out = FUNC_1(VAR_5);
 VAR_9.test.data_size_in = VAR_4;
 VAR_9.test.repeat = VAR_2;

 VAR_10 = FUNC_2(VAR_0, &VAR_9, sizeof(VAR_9));
 if (VAR_6)
  *VAR_6 = VAR_9.test.data_size_out;
 if (VAR_7)
  *VAR_7 = VAR_9.test.retval;
 if (VAR_8)
  *VAR_8 = VAR_9.test.duration;
 return VAR_10;
}
