
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cv; int mutex; int state; } ;
typedef TYPE_1__ ParallelBitmapHeapState ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(ParallelBitmapHeapState *VAR_1)
{
 FUNC_1(&VAR_1->mutex);
 VAR_1->state = VAR_0;
 FUNC_2(&VAR_1->mutex);
 FUNC_0(&VAR_1->cv);
}
