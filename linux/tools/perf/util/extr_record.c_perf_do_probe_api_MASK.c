
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attr; } ;
struct evsel {TYPE_1__ core; } ;
struct evlist {int dummy; } ;
typedef int (* setup_probe_fn_t ) (struct evsel*) ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct evlist*) ;
 struct evsel* FUNC_2 (struct evlist*) ;
 struct evlist* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct evlist*,char const*,int *) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (int *,int,int,int,unsigned long) ;

__attribute__((used)) static int FUNC_7(setup_probe_fn_t VAR_5, int VAR_6, const char *VAR_7)
{
 struct evlist *VAR_8;
 struct evsel *VAR_9;
 unsigned long VAR_10 = FUNC_5();
 int VAR_11 = -VAR_1, VAR_12;
 static pid_t VAR_13 = -1;

 VAR_8 = FUNC_3();
 if (!VAR_8)
  return -VAR_3;

 if (FUNC_4(VAR_8, VAR_7, ((void*)0)))
  goto out_delete;

 VAR_9 = FUNC_2(VAR_8);

 while (1) {
  VAR_12 = FUNC_6(&VAR_9->core.attr, VAR_13, VAR_6, -1, VAR_10);
  if (VAR_12 < 0) {
   if (VAR_13 == -1 && VAR_4 == VAR_0) {
    VAR_13 = 0;
    continue;
   }
   goto out_delete;
  }
  break;
 }
 FUNC_0(VAR_12);

 VAR_5(VAR_9);

 VAR_12 = FUNC_6(&VAR_9->core.attr, VAR_13, VAR_6, -1, VAR_10);
 if (VAR_12 < 0) {
  if (VAR_4 == VAR_2)
   VAR_11 = -VAR_2;
  goto out_delete;
 }
 FUNC_0(VAR_12);
 VAR_11 = 0;

out_delete:
 FUNC_1(VAR_8);
 return VAR_11;
}
