
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strlist {int dummy; } ;
struct TYPE_4__ {char* realname; int retprobe; } ;
struct probe_trace_event {char* event; char* group; TYPE_2__ point; } ;
struct TYPE_3__ {char* function; } ;
struct perf_probe_event {char* event; char* group; int sdt; TYPE_1__ point; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int,char const*,struct strlist*,int ,int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct strlist*,char const*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct probe_trace_event *VAR_2,
           struct perf_probe_event *VAR_3,
           struct strlist *VAR_4,
           bool VAR_5)
{
 const char *VAR_6, *VAR_7;
 char VAR_8[64];
 int VAR_9;


 if (VAR_3->event && !VAR_3->sdt)
  VAR_6 = VAR_3->event;
 else if (VAR_2->event)
  VAR_6 = VAR_2->event;
 else {

  if (VAR_3->point.function &&
   (FUNC_4(VAR_3->point.function, "0x", 2) != 0) &&
   !FUNC_2(VAR_3->point.function))
   VAR_6 = VAR_3->point.function;
  else
   VAR_6 = VAR_2->point.realname;
 }
 if (VAR_3->group && !VAR_3->sdt)
  VAR_7 = VAR_3->group;
 else if (VAR_2->group)
  VAR_7 = VAR_2->group;
 else
  VAR_7 = VAR_1;


 VAR_9 = FUNC_0(VAR_8, 64, VAR_6, VAR_4,
     VAR_2->point.retprobe, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_6 = VAR_8;

 VAR_2->event = FUNC_1(VAR_6);
 VAR_2->group = FUNC_1(VAR_7);
 if (VAR_2->event == ((void*)0) || VAR_2->group == ((void*)0))
  return -VAR_0;


 FUNC_3(VAR_4, VAR_6);
 return 0;
}
