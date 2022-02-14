
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int id; } ;
struct TYPE_3__ {scalar_t__ type; } ;
union perf_event {TYPE_2__ bpf; TYPE_1__ header; } ;
struct perf_env {int dummy; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (struct perf_env*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(union perf_event *VAR_1, void *VAR_2)
{
 struct perf_env *VAR_3 = VAR_2;

 if (VAR_1->header.type != VAR_0)
  return -1;

 switch (VAR_1->bpf.type) {
 case 129:
  FUNC_0(VAR_3, VAR_1->bpf.id);

 case 128:





  break;
 default:
  FUNC_1("unexpected bpf event type of %d\n", VAR_1->bpf.type);
  break;
 }

 return 0;
}
