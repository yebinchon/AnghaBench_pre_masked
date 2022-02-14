
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_handle {size_t num_events; size_t reserved_events; size_t max_events; size_t first_event; unsigned long long event_mask; struct mpv_event* events; } ;
struct mpv_event {unsigned long long event_id; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct mpv_event*) ;
 int FUNC_1 (struct mpv_handle*) ;

__attribute__((used)) static int FUNC_2(struct mpv_handle *VAR_1, struct mpv_event VAR_2, bool VAR_3)
{
    if (VAR_1->num_events + VAR_1->reserved_events >= VAR_1->max_events)
        return -1;
    if (VAR_3)
        FUNC_0(&VAR_2);
    VAR_1->events[(VAR_1->first_event + VAR_1->num_events) % VAR_1->max_events] = VAR_2;
    VAR_1->num_events++;
    FUNC_1(VAR_1);
    if (VAR_2.event_id == VAR_0)
        VAR_1->event_mask &= VAR_1->event_mask & ~(1ULL << VAR_0);
    return 0;
}
