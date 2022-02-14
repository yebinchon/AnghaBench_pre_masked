
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int lock; int wakeup; int need_wakeup; } ;
struct vo {struct vo_internal* in; } ;
struct timespec {int dummy; } ;
typedef int int64_t ;


 struct timespec FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,struct timespec*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct vo *VAR_0, int64_t VAR_1)
{
    struct vo_internal *VAR_2 = VAR_0->in;

    FUNC_2(&VAR_2->lock);
    if (!VAR_2->need_wakeup) {
        struct timespec VAR_3 = FUNC_0(VAR_1);
        FUNC_1(&VAR_2->wakeup, &VAR_2->lock, &VAR_3);
    }
    FUNC_3(&VAR_2->lock);
}
