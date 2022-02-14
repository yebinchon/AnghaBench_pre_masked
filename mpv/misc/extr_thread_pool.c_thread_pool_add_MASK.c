
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work {void (* member_0 ) (void*) ;void* member_1; } ;
struct mp_thread_pool {scalar_t__ busy_threads; scalar_t__ num_work; scalar_t__ num_threads; scalar_t__ max_threads; int lock; int wakeup; int work; } ;


 int FUNC_0 (struct mp_thread_pool*,int ,scalar_t__,int ,struct work) ;
 int FUNC_1 (struct mp_thread_pool*) ;
 int FUNC_2 (void (*) (void*)) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct mp_thread_pool *VAR_0, void (*VAR_1)(void *VAR_2),
                            void *VAR_3, bool VAR_4)
{
    bool VAR_5 = 1;

    FUNC_2(VAR_1);

    FUNC_4(&VAR_0->lock);
    struct work VAR_6 = {VAR_1, VAR_3};





    if (VAR_0->busy_threads + VAR_0->num_work + 1 > VAR_0->num_threads &&
        VAR_0->num_threads < VAR_0->max_threads)
    {
        if (!FUNC_1(VAR_0)) {

            VAR_5 = VAR_4 && VAR_0->num_threads > 0;
        }
    }

    if (VAR_5) {
        FUNC_0(VAR_0, VAR_0->work, VAR_0->num_work, 0, VAR_6);
        FUNC_3(&VAR_0->wakeup);
    }

    FUNC_5(&VAR_0->lock);
    return VAR_5;
}
