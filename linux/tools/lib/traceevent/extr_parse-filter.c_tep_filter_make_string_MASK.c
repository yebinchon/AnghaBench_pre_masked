
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_filter_type {int filter; } ;
struct tep_event_filter {int filters; } ;


 char* FUNC_0 (struct tep_event_filter*,int ) ;
 struct tep_filter_type* FUNC_1 (struct tep_event_filter*,int) ;

char *
FUNC_2(struct tep_event_filter *VAR_0, int VAR_1)
{
 struct tep_filter_type *VAR_2;

 if (!VAR_0->filters)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_0, VAR_2->filter);
}
