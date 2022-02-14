
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int event_mask; int lock; } ;
typedef TYPE_1__ mpv_handle ;
typedef int mpv_event_id ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(mpv_handle *VAR_3, mpv_event_id VAR_4, int VAR_5)
{
    if (!FUNC_1(VAR_4) || VAR_5 < 0 || VAR_5 > 1)
        return VAR_1;
    if (VAR_4 == VAR_2 && !VAR_5)
        return VAR_1;
    FUNC_0(VAR_4 < (int)VAR_0);
    FUNC_2(&VAR_3->lock);
    uint64_t VAR_6 = 1ULL << VAR_4;
    VAR_3->event_mask = VAR_5 ? VAR_3->event_mask | VAR_6 : VAR_3->event_mask & ~VAR_6;
    FUNC_3(&VAR_3->lock);
    return 0;
}
