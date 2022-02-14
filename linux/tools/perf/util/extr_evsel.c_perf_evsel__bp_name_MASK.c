
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_attr {int bp_type; int bp_addr; } ;
struct TYPE_2__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;


 int FUNC_0 (char*,size_t,int ,int ) ;
 int FUNC_1 (struct evsel*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct perf_event_attr *VAR_3 = &VAR_0->core.attr;
 int VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3->bp_addr, VAR_3->bp_type);
 return VAR_4 + FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_2 - VAR_4);
}
