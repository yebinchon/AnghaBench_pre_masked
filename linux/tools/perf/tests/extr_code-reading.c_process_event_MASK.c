
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
union perf_event {TYPE_1__ header; } ;
struct state {int dummy; } ;
struct machine {int dummy; } ;
struct evlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct machine*,union perf_event*,int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct machine*,struct evlist*,union perf_event*,struct state*) ;

__attribute__((used)) static int FUNC_3(struct machine *VAR_4, struct evlist *VAR_5,
    union perf_event *VAR_6, struct state *VAR_7)
{
 if (VAR_6->header.type == VAR_1)
  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_6->header.type == VAR_2 ||
     VAR_6->header.type == VAR_3)
  return 0;

 if (VAR_6->header.type < VAR_0) {
  int VAR_8;

  VAR_8 = FUNC_0(VAR_4, VAR_6, ((void*)0));
  if (VAR_8 < 0)
   FUNC_1("machine__process_event failed, event type %u\n",
     VAR_6->header.type);
  return VAR_8;
 }

 return 0;
}
