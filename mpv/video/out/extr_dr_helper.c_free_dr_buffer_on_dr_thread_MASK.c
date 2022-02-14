
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct free_dr_context {struct dr_helper* dr; } ;
struct dr_helper {int dispatch; int thread_lock; int thread; scalar_t__ thread_valid; } ;


 int FUNC_0 (struct free_dr_context*) ;
 int FUNC_1 (int ,int (*) (struct free_dr_context*),struct free_dr_context*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void *VAR_0, uint8_t *VAR_1)
{
    struct free_dr_context *VAR_2 = VAR_0;
    struct dr_helper *VAR_3 = VAR_2->dr;

    FUNC_3(&VAR_3->thread_lock);
    bool VAR_4 =
        VAR_3->thread_valid && FUNC_2(VAR_2->dr->thread, FUNC_5());
    FUNC_4(&VAR_3->thread_lock);



    if (VAR_4) {
        FUNC_0(VAR_2);
    } else {
        FUNC_1(VAR_3->dispatch, FUNC_0, VAR_2);
    }
}
