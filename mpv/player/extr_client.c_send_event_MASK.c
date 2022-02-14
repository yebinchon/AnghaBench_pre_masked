
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mpv_handle {int property_event_masks; int event_mask; int choked; int lock; } ;
struct mpv_event {unsigned long long event_id; } ;


 int FUNC_0 (struct mpv_handle*,char*) ;
 int FUNC_1 (struct mpv_handle*,struct mpv_event,int) ;
 int FUNC_2 (struct mpv_handle*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mpv_handle *VAR_0, struct mpv_event *VAR_1, bool VAR_2)
{
    FUNC_3(&VAR_0->lock);
    uint64_t VAR_3 = 1ULL << VAR_1->event_id;
    if (VAR_0->property_event_masks & VAR_3)
        FUNC_2(VAR_0, VAR_3);
    int VAR_4;
    if (!(VAR_0->event_mask & VAR_3)) {
        VAR_4 = 0;
    } else if (VAR_0->choked) {
        VAR_4 = -1;
    } else {
        VAR_4 = FUNC_1(VAR_0, *VAR_1, VAR_2);
        if (VAR_4 < 0) {
            FUNC_0(VAR_0, "Too many events queued.\n");
            VAR_0->choked = 1;
        }
    }
    FUNC_4(&VAR_0->lock);
    return VAR_4;
}
