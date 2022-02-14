
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union perf_event {TYPE_1__ bpf; } ;
struct perf_sample {int dummy; } ;
struct machine {int dummy; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (struct machine*,union perf_event*,struct perf_sample*) ;
 int FUNC_1 (union perf_event*,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;

int FUNC_3(struct machine *VAR_2, union perf_event *VAR_3,
    struct perf_sample *VAR_4)
{
 if (VAR_0)
  FUNC_1(VAR_3, VAR_1);

 switch (VAR_3->bpf.type) {
 case 129:
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 case 128:





  break;
 default:
  FUNC_2("unexpected bpf event type of %d\n", VAR_3->bpf.type);
  break;
 }
 return 0;
}
