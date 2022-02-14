
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct mpv_handle {int need_wakeup; int lock; int wakeup_lock; int wakeup; } ;
typedef int int64_t ;


 struct timespec FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,struct timespec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mpv_handle *VAR_0, int64_t VAR_1)
{
    int VAR_2 = 0;
    FUNC_3(&VAR_0->lock);
    FUNC_2(&VAR_0->wakeup_lock);
    if (!VAR_0->need_wakeup) {
        struct timespec VAR_3 = FUNC_0(VAR_1);
        VAR_2 = FUNC_1(&VAR_0->wakeup, &VAR_0->wakeup_lock, &VAR_3);
    }
    if (VAR_2 == 0)
        VAR_0->need_wakeup = 0;
    FUNC_3(&VAR_0->wakeup_lock);
    FUNC_2(&VAR_0->lock);
    return VAR_2;
}
