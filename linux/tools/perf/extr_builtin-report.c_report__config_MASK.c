
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct report {double min_percent; int queue_size; } ;
struct TYPE_4__ {double min_percent; } ;
struct TYPE_3__ {void* cumulate_callchain; void* event_group; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*) ;
 double FUNC_4 (char const*,int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 struct report *VAR_6 = VAR_5;

 if (!FUNC_2(VAR_3, "report.group")) {
  VAR_2.event_group = FUNC_0(VAR_3, VAR_4);
  return 0;
 }
 if (!FUNC_2(VAR_3, "report.percent-limit")) {
  double VAR_7 = FUNC_4(VAR_4, ((void*)0));

  VAR_6->min_percent = VAR_7;
  VAR_0.min_percent = VAR_7;
  return 0;
 }
 if (!FUNC_2(VAR_3, "report.children")) {
  VAR_2.cumulate_callchain = FUNC_0(VAR_3, VAR_4);
  return 0;
 }
 if (!FUNC_2(VAR_3, "report.queue-size"))
  return FUNC_1(&VAR_6->queue_size, VAR_3, VAR_4);

 if (!FUNC_2(VAR_3, "report.sort_order")) {
  VAR_1 = FUNC_3(VAR_4);
  return 0;
 }

 return 0;
}
