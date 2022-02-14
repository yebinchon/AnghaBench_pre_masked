
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ header; } ;
struct switch_tracking {int dummy; } ;
struct evlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct switch_tracking*,union perf_event*,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct evlist*,union perf_event*,struct switch_tracking*) ;

__attribute__((used)) static int FUNC_3(struct evlist *VAR_2, union perf_event *VAR_3,
    struct switch_tracking *VAR_4)
{
 if (VAR_3->header.type == VAR_1)
  return FUNC_2(VAR_2, VAR_3, VAR_4);

 if (VAR_3->header.type == VAR_0) {
  int VAR_5, VAR_6 = 0;

  VAR_5 = FUNC_0(VAR_4, VAR_3, "Test COMM 1", 0);
  if (VAR_5 < 0)
   return -1;
  VAR_6 += VAR_5;
  VAR_5 = FUNC_0(VAR_4, VAR_3, "Test COMM 2", 1);
  if (VAR_5 < 0)
   return -1;
  VAR_6 += VAR_5;
  VAR_5 = FUNC_0(VAR_4, VAR_3, "Test COMM 3", 2);
  if (VAR_5 < 0)
   return -1;
  VAR_6 += VAR_5;
  VAR_5 = FUNC_0(VAR_4, VAR_3, "Test COMM 4", 3);
  if (VAR_5 < 0)
   return -1;
  VAR_6 += VAR_5;
  if (VAR_6 != 1) {
   FUNC_1("Unexpected comm event\n");
   return -1;
  }
 }

 return 0;
}
