
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int cv; int mutex; } ;
typedef scalar_t__ SharedBitmapState ;
typedef TYPE_1__ ParallelBitmapHeapState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_4(ParallelBitmapHeapState *VAR_3)
{
 SharedBitmapState VAR_4;

 while (1)
 {
  FUNC_2(&VAR_3->mutex);
  VAR_4 = VAR_3->state;
  if (VAR_3->state == VAR_0)
   VAR_3->state = VAR_1;
  FUNC_3(&VAR_3->mutex);


  if (VAR_4 != VAR_1)
   break;


  FUNC_1(&VAR_3->cv, VAR_2);
 }

 FUNC_0();

 return (VAR_4 == VAR_0);
}
