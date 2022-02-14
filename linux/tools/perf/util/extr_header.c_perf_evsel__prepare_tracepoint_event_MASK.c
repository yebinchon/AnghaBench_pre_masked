
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_handle {int dummy; } ;
struct tep_event {char* system; char* name; } ;
struct TYPE_3__ {scalar_t__ config; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {struct tep_event* tp_format; int * name; TYPE_2__ core; } ;
typedef int bf ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int * FUNC_2 (char*) ;
 struct tep_event* FUNC_3 (struct tep_handle*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct evsel *VAR_0,
      struct tep_handle *VAR_1)
{
 struct tep_event *VAR_2;
 char VAR_3[128];


 if (VAR_0->tp_format)
  return 0;

 if (VAR_1 == ((void*)0)) {
  FUNC_0("broken or missing trace data\n");
  return -1;
 }

 VAR_2 = FUNC_3(VAR_1, VAR_0->core.attr.config);
 if (VAR_2 == ((void*)0)) {
  FUNC_0("cannot find event format for %d\n", (int)VAR_0->core.attr.config);
  return -1;
 }

 if (!VAR_0->name) {
  FUNC_1(VAR_3, sizeof(VAR_3), "%s:%s", VAR_2->system, VAR_2->name);
  VAR_0->name = FUNC_2(VAR_3);
  if (VAR_0->name == ((void*)0))
   return -1;
 }

 VAR_0->tp_format = VAR_2;
 return 0;
}
