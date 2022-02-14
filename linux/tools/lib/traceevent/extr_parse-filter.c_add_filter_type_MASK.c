
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_filter_type {int event_id; int * filter; int event; } ;
struct tep_event_filter {int filters; int tep; struct tep_filter_type* event_filters; } ;


 struct tep_filter_type* FUNC_0 (struct tep_event_filter*,int) ;
 int FUNC_1 (struct tep_filter_type*,struct tep_filter_type*,int) ;
 struct tep_filter_type* FUNC_2 (struct tep_filter_type*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static struct tep_filter_type *
FUNC_4(struct tep_event_filter *VAR_0, int VAR_1)
{
 struct tep_filter_type *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0->event_filters,
         sizeof(*VAR_0->event_filters) *
         (VAR_0->filters + 1));
 if (!VAR_2)
  return ((void*)0);

 VAR_0->event_filters = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_0->filters; VAR_3++) {
  if (VAR_0->event_filters[VAR_3].event_id > VAR_1)
   break;
 }

 if (VAR_3 < VAR_0->filters)
  FUNC_1(&VAR_0->event_filters[VAR_3+1],
   &VAR_0->event_filters[VAR_3],
   sizeof(*VAR_0->event_filters) *
   (VAR_0->filters - VAR_3));

 VAR_2 = &VAR_0->event_filters[VAR_3];
 VAR_2->event_id = VAR_1;
 VAR_2->event = FUNC_3(VAR_0->tep, VAR_1);
 VAR_2->filter = ((void*)0);

 VAR_0->filters++;

 return VAR_2;
}
