
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ semNum; int semId; } ;
typedef TYPE_1__* PGSemaphore ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__* VAR_9 ;

PGSemaphore
FUNC_4(void)
{
 PGSemaphore VAR_10;


 FUNC_0(!VAR_0);

 if (VAR_6 >= VAR_2)
 {

  if (VAR_7 >= VAR_3)
   FUNC_3(VAR_1, "too many semaphores created");
  VAR_5[VAR_7] = FUNC_1(VAR_2);
  VAR_7++;
  VAR_6 = 0;
 }

 if (VAR_8 >= VAR_4)
  FUNC_3(VAR_1, "too many semaphores created");
 VAR_10 = &VAR_9[VAR_8++];

 VAR_10->semId = VAR_5[VAR_7 - 1];
 VAR_10->semNum = VAR_6++;

 FUNC_2(VAR_10->semId, VAR_10->semNum, 1);

 return VAR_10;
}
