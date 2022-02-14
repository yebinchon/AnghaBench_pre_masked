
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {int completePasses; int buffer_strategy_lock; int numBufferAllocs; int nextVictimBuffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(uint32 *VAR_2, uint32 *VAR_3)
{
 uint32 VAR_4;
 int VAR_5;

 FUNC_0(&VAR_1->buffer_strategy_lock);
 VAR_4 = FUNC_3(&VAR_1->nextVictimBuffer);
 VAR_5 = VAR_4 % VAR_0;

 if (VAR_2)
 {
  *VAR_2 = VAR_1->completePasses;





  *VAR_2 += VAR_4 / VAR_0;
 }

 if (VAR_3)
 {
  *VAR_3 = FUNC_2(&VAR_1->numBufferAllocs, 0);
 }
 FUNC_1(&VAR_1->buffer_strategy_lock);
 return VAR_5;
}
