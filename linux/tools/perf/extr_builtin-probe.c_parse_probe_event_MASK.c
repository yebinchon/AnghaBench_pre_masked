
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_probe_event {int nargs; int nsi; int target; int uprobes; } ;
struct TYPE_2__ {size_t nevents; int target_used; int nsi; scalar_t__ target; int uprobes; struct perf_probe_event* events; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char const*,struct perf_probe_event*) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(const char *VAR_3)
{
 struct perf_probe_event *VAR_4 = &VAR_2.events[VAR_2.nevents];
 int VAR_5;

 FUNC_2("probe-definition(%d): %s\n", VAR_2.nevents, VAR_3);
 if (++VAR_2.nevents == VAR_1) {
  FUNC_3("Too many probes (> %d) were specified.", VAR_1);
  return -1;
 }

 VAR_4->uprobes = VAR_2.uprobes;
 if (VAR_2.target) {
  VAR_4->target = FUNC_4(VAR_2.target);
  if (!VAR_4->target)
   return -VAR_0;
  VAR_2.target_used = 1;
 }

 VAR_4->nsi = FUNC_0(VAR_2.nsi);


 VAR_5 = FUNC_1(VAR_3, VAR_4);
 FUNC_2("%d arguments\n", VAR_4->nargs);

 return VAR_5;
}
