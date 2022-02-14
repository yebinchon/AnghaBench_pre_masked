
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target {int uid; } ;
struct TYPE_3__ {int enable_on_exec; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct evsel* FUNC_0 (struct evlist*) ;
 int FUNC_1 (struct evlist*) ;
 int FUNC_2 (struct evlist*,struct target*) ;
 int FUNC_3 (struct evlist*,struct target*,char const**,int,int *) ;
 int FUNC_4 (struct evlist*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct evlist *VAR_5)
{
 struct evsel *VAR_6 = FUNC_0(VAR_5);
 struct target VAR_7 = {
  .uid = VAR_3,
 };
 const char *VAR_8[] = { "true", ((void*)0), };
 char VAR_9[VAR_0];
 int VAR_10;

 FUNC_5("attaching to spawned child, enable on exec\n");

 VAR_10 = FUNC_2(VAR_5, &VAR_7);
 if (VAR_10 < 0) {
  FUNC_5("Not enough memory to create thread/cpu maps\n");
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_5, &VAR_7, VAR_8, 0, ((void*)0));
 if (VAR_10 < 0) {
  FUNC_5("Couldn't run the workload!\n");
  return VAR_10;
 }

 VAR_6->core.attr.enable_on_exec = 1;

 VAR_10 = FUNC_1(VAR_5);
 if (VAR_10 < 0) {
  FUNC_5("perf_evlist__open: %s\n",
    FUNC_6(VAR_4, VAR_9, sizeof(VAR_9)));
  return VAR_10;
 }

 return FUNC_4(VAR_5) == 1 ? VAR_2 : VAR_1;
}
