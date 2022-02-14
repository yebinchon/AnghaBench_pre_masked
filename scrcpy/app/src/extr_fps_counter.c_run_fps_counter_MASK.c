
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct fps_counter {scalar_t__ next_timestamp; int mutex; int state_cond; int started; int interrupted; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fps_counter*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_0) {
    struct fps_counter *VAR_1 = VAR_0;

    FUNC_6(VAR_1->mutex);
    while (!VAR_1->interrupted) {
        while (!VAR_1->interrupted && !FUNC_0(&VAR_1->started)) {
            FUNC_4(VAR_1->state_cond, VAR_1->mutex);
        }
        while (!VAR_1->interrupted && FUNC_0(&VAR_1->started)) {
            uint32_t VAR_2 = FUNC_1();
            FUNC_3(VAR_1, VAR_2);

            FUNC_2(VAR_1->next_timestamp > VAR_2);
            uint32_t VAR_3 = VAR_1->next_timestamp - VAR_2;


            FUNC_5(VAR_1->state_cond, VAR_1->mutex, VAR_3);
        }
    }
    FUNC_7(VAR_1->mutex);
    return 0;
}
