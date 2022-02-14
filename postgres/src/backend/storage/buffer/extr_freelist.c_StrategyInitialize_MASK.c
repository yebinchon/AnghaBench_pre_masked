
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bgwprocno; int numBufferAllocs; scalar_t__ completePasses; int nextVictimBuffer; scalar_t__ lastFreeBuffer; scalar_t__ firstFreeBuffer; int buffer_strategy_lock; } ;
typedef TYPE_1__ BufferStrategyControl ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,int,int*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(bool VAR_3)
{
 bool VAR_4;
 FUNC_1(VAR_0 + VAR_1);




 VAR_2 = (BufferStrategyControl *)
  FUNC_2("Buffer Strategy Status",
      sizeof(BufferStrategyControl),
      &VAR_4);

 if (!VAR_4)
 {



  FUNC_0(VAR_3);

  FUNC_3(&VAR_2->buffer_strategy_lock);





  VAR_2->firstFreeBuffer = 0;
  VAR_2->lastFreeBuffer = VAR_0 - 1;


  FUNC_4(&VAR_2->nextVictimBuffer, 0);


  VAR_2->completePasses = 0;
  FUNC_4(&VAR_2->numBufferAllocs, 0);


  VAR_2->bgwprocno = -1;
 }
 else
  FUNC_0(!VAR_3);
}
