
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int module; } ;
struct probe_trace_event {char* group; char* event; TYPE_1__ point; } ;
struct perf_probe_event {int ntevs; struct probe_trace_event* tevs; int uprobes; } ;
struct TYPE_4__ {char command; } ;


 int FUNC_0 (struct perf_probe_event*,int) ;
 int FUNC_1 (struct perf_probe_event*,int) ;
 int FUNC_2 (struct perf_probe_event*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*,struct perf_probe_event*,int ,int) ;
 int FUNC_7 (struct perf_probe_event*,int) ;

__attribute__((used)) static int FUNC_8(struct perf_probe_event *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 const char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

 VAR_3 = FUNC_4(VAR_1->uprobes);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out_cleanup;

 if (VAR_0.command == 'D') {
  VAR_3 = FUNC_7(VAR_1, VAR_2);
  goto out_cleanup;
 }

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out_cleanup;

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_5 += VAR_1[VAR_4].ntevs;

 FUNC_5("Added new event%s\n", (VAR_5 > 1) ? "s:" : ":");
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct perf_probe_event *VAR_8 = &VAR_1[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_8->ntevs; VAR_5++) {
   struct probe_trace_event *VAR_9 = &VAR_8->tevs[VAR_5];


   FUNC_6(VAR_9->group, VAR_9->event, VAR_8,
           VAR_9->point.module, 0);


   VAR_6 = VAR_9->event;
   VAR_7 = VAR_9->group;
  }
 }


 if (VAR_6) {

  FUNC_5("\nYou can now use it in all perf tools, such as:\n\n");
  FUNC_5("\tperf record -e %s:%s -aR sleep 1\n\n", VAR_7, VAR_6);
 }

out_cleanup:
 FUNC_1(VAR_1, VAR_2);
 FUNC_3();
 return VAR_3;
}
