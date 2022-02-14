
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mpv_handle {scalar_t__ reserved_events; int lock; } ;
struct mpv_event {int reply_userdata; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct mpv_handle*,struct mpv_event,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mpv_handle *VAR_0, uint64_t VAR_1,
                       struct mpv_event *VAR_2)
{
    VAR_2->reply_userdata = VAR_1;
    FUNC_3(&VAR_0->lock);

    FUNC_2(VAR_0->reserved_events > 0);
    VAR_0->reserved_events--;
    if (FUNC_1(VAR_0, *VAR_2, 0) < 0)
        FUNC_0();
    FUNC_4(&VAR_0->lock);
}
