
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {TYPE_1__* tp_event; struct bpf_prog* prog; } ;
struct bpf_prog_array {int dummy; } ;
struct bpf_prog {scalar_t__ kprobe_override; } ;
struct TYPE_3__ {int prog_array; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bpf_prog_array* FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_prog_array*,int *,struct bpf_prog*,struct bpf_prog_array**) ;
 int FUNC_2 (struct bpf_prog_array*) ;
 scalar_t__ FUNC_3 (struct bpf_prog_array*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct bpf_prog_array*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

int FUNC_9(struct perf_event *VAR_5,
          struct bpf_prog *VAR_6)
{
 struct bpf_prog_array *VAR_7;
 struct bpf_prog_array *VAR_8;
 int VAR_9 = -VAR_2;





 if (VAR_6->kprobe_override &&
     (!FUNC_8(VAR_5->tp_event) ||
      !FUNC_7(VAR_5->tp_event)))
  return -VAR_3;

 FUNC_4(&VAR_4);

 if (VAR_5->prog)
  goto unlock;

 VAR_7 = FUNC_0(VAR_5->tp_event->prog_array);
 if (VAR_7 &&
     FUNC_3(VAR_7) >= VAR_0) {
  VAR_9 = -VAR_1;
  goto unlock;
 }

 VAR_9 = FUNC_1(VAR_7, ((void*)0), VAR_6, &VAR_8);
 if (VAR_9 < 0)
  goto unlock;


 VAR_5->prog = VAR_6;
 FUNC_6(VAR_5->tp_event->prog_array, VAR_8);
 FUNC_2(VAR_7);

unlock:
 FUNC_5(&VAR_4);
 return VAR_9;
}
