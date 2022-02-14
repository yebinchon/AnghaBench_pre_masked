
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int queued_events; int lock; int wakeup; } ;
struct vo {struct vo_internal* in; } ;
struct timespec {int dummy; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct timespec FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,struct timespec*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_1, int64_t VAR_2)
{
    struct vo_internal *VAR_3 = VAR_1->in;
    struct timespec VAR_4 = FUNC_1(VAR_2);
    FUNC_3(&VAR_3->lock);
    while (VAR_2 > FUNC_0()) {
        if (VAR_3->queued_events & VAR_0)
            break;
        if (FUNC_2(&VAR_3->wakeup, &VAR_3->lock, &VAR_4))
            break;
    }
    FUNC_4(&VAR_3->lock);
}
