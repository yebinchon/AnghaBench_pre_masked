
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int * prog; TYPE_1__* tp_event; } ;
struct bpf_prog_array {int dummy; } ;
struct TYPE_2__ {int prog_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog_array* FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_prog_array*,int *,int *,struct bpf_prog_array**) ;
 int FUNC_2 (struct bpf_prog_array*,int *) ;
 int FUNC_3 (struct bpf_prog_array*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct bpf_prog_array*) ;

void FUNC_8(struct perf_event *VAR_2)
{
 struct bpf_prog_array *VAR_3;
 struct bpf_prog_array *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_1);

 if (!VAR_2->prog)
  goto unlock;

 VAR_3 = FUNC_0(VAR_2->tp_event->prog_array);
 VAR_5 = FUNC_1(VAR_3, VAR_2->prog, ((void*)0), &VAR_4);
 if (VAR_5 == -VAR_0)
  goto unlock;
 if (VAR_5 < 0) {
  FUNC_2(VAR_3, VAR_2->prog);
 } else {
  FUNC_7(VAR_2->tp_event->prog_array, VAR_4);
  FUNC_3(VAR_3);
 }

 FUNC_4(VAR_2->prog);
 VAR_2->prog = ((void*)0);

unlock:
 FUNC_6(&VAR_1);
}
