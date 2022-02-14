
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int completed; int mutex; int cond; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct completion *VAR_0)
{
    FUNC_2(&VAR_0->mutex);
    while (0 == VAR_0->completed) {
        FUNC_1(&VAR_0->cond, &VAR_0->mutex);
    }
    FUNC_0(1 == VAR_0->completed);
    FUNC_3(&VAR_0->mutex);
}
