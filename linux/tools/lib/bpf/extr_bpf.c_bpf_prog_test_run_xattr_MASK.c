
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data_size_out; int duration; int retval; int ctx_size_out; int repeat; int ctx_size_in; void* ctx_out; void* ctx_in; int data_size_in; void* data_out; void* data_in; int prog_fd; } ;
union bpf_attr {TYPE_1__ test; } ;
struct bpf_prog_test_run_attr {scalar_t__ data_size_out; int duration; int retval; int ctx_size_out; int repeat; int ctx_size_in; int ctx_out; int ctx_in; int data_size_in; int data_out; int data_in; int prog_fd; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union bpf_attr*,int ,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,union bpf_attr*,int) ;

int FUNC_3(struct bpf_prog_test_run_attr *VAR_2)
{
 union bpf_attr VAR_3;
 int VAR_4;

 if (!VAR_2->data_out && VAR_2->data_size_out > 0)
  return -VAR_1;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.test.prog_fd = VAR_2->prog_fd;
 VAR_3.test.data_in = FUNC_1(VAR_2->data_in);
 VAR_3.test.data_out = FUNC_1(VAR_2->data_out);
 VAR_3.test.data_size_in = VAR_2->data_size_in;
 VAR_3.test.data_size_out = VAR_2->data_size_out;
 VAR_3.test.ctx_in = FUNC_1(VAR_2->ctx_in);
 VAR_3.test.ctx_out = FUNC_1(VAR_2->ctx_out);
 VAR_3.test.ctx_size_in = VAR_2->ctx_size_in;
 VAR_3.test.ctx_size_out = VAR_2->ctx_size_out;
 VAR_3.test.repeat = VAR_2->repeat;

 VAR_4 = FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
 VAR_2->data_size_out = VAR_3.test.data_size_out;
 VAR_2->ctx_size_out = VAR_3.test.ctx_size_out;
 VAR_2->retval = VAR_3.test.retval;
 VAR_2->duration = VAR_3.test.duration;
 return VAR_4;
}
