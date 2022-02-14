
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {char* group; char* event; int sdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 void* FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;
 int FUNC_4 (char**) ;

__attribute__((used)) static int FUNC_5(char **VAR_2, struct perf_probe_event *VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_3(*VAR_2, ":");
 if (VAR_4) {
  *VAR_4 = '\0';
  if (!VAR_3->sdt && !FUNC_0(*VAR_2))
   goto ng_name;
  VAR_3->group = FUNC_2(*VAR_2);
  if (!VAR_3->group)
   return -VAR_1;
  *VAR_2 = VAR_4 + 1;
 } else
  VAR_3->group = ((void*)0);

 VAR_3->event = FUNC_2(*VAR_2);
 if (VAR_3->event == ((void*)0))
  return -VAR_1;

 if (!VAR_3->sdt && !FUNC_0(VAR_3->event)) {
  FUNC_4(&VAR_3->event);
ng_name:
  FUNC_4(&VAR_3->group);
  FUNC_1("%s is bad for event name -it must "
          "follow C symbol-naming rule.\n", *VAR_2);
  return -VAR_0;
 }
 return 0;
}
