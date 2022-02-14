
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_filter_type {int dummy; } ;
struct tep_event_filter {int filters; } ;


 struct tep_filter_type* FUNC_0 (struct tep_event_filter*,int) ;

int FUNC_1(struct tep_event_filter *VAR_0, int VAR_1)
{
 struct tep_filter_type *VAR_2;

 if (!VAR_0->filters)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ? 1 : 0;
}
