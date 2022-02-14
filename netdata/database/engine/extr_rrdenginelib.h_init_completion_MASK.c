
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int mutex; int cond; scalar_t__ completed; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct completion *VAR_0)
{
    VAR_0->completed = 0;
    FUNC_0(0 == FUNC_1(&VAR_0->cond));
    FUNC_0(0 == FUNC_2(&VAR_0->mutex));
}
