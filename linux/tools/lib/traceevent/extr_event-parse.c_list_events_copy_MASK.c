
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int nr_events; int events; } ;
struct tep_event {int dummy; } ;


 struct tep_event** FUNC_0 (int) ;
 int FUNC_1 (struct tep_event**,int ,int) ;

__attribute__((used)) static struct tep_event **FUNC_2(struct tep_handle *VAR_0)
{
 struct tep_event **VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_0(sizeof(*VAR_1) * (VAR_0->nr_events + 1));
 if (!VAR_1)
  return ((void*)0);

 FUNC_1(VAR_1, VAR_0->events, sizeof(*VAR_1) * VAR_0->nr_events);
 VAR_1[VAR_0->nr_events] = ((void*)0);
 return VAR_1;
}
