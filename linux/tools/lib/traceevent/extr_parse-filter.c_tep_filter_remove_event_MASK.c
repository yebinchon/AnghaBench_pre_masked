
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_filter_type {int dummy; } ;
struct tep_event_filter {int filters; int * event_filters; } ;


 struct tep_filter_type* FUNC_0 (struct tep_event_filter*,int) ;
 int FUNC_1 (struct tep_filter_type*) ;
 int FUNC_2 (struct tep_filter_type*,struct tep_filter_type*,unsigned long) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(struct tep_event_filter *VAR_0,
       int VAR_1)
{
 struct tep_filter_type *VAR_2;
 unsigned long VAR_3;

 if (!VAR_0->filters)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  return 0;

 FUNC_1(VAR_2);


 VAR_3 = (unsigned long)(VAR_0->event_filters + VAR_0->filters) -
  (unsigned long)(VAR_2 + 1);

 FUNC_2(VAR_2, VAR_2 + 1, VAR_3);
 VAR_0->filters--;

 FUNC_3(&VAR_0->event_filters[VAR_0->filters], 0,
        sizeof(*VAR_2));

 return 1;
}
