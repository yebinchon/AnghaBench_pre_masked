
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter {int dummy; } ;
struct probe_trace_event {char* event; int group; } ;


 scalar_t__ FUNC_0 (char*,int,char*,int ,char*) ;
 int FUNC_1 (struct strfilter*,char*) ;

__attribute__((used)) static bool FUNC_2(struct probe_trace_event *VAR_0,
         struct strfilter *VAR_1)
{
 char VAR_2[128];


 if (FUNC_1(VAR_1, VAR_0->event))
  return 1;


 if (FUNC_0(VAR_2, 128, "%s:%s", VAR_0->group, VAR_0->event) < 0)
  return 0;
 return FUNC_1(VAR_1, VAR_2);
}
