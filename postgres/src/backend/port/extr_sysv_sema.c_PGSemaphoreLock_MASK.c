
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sembuf {int sem_op; int sem_num; scalar_t__ sem_flg; } ;
struct TYPE_3__ {int semId; int semNum; } ;
typedef TYPE_1__* PGSemaphore ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct sembuf*,int) ;

void
FUNC_2(PGSemaphore VAR_3)
{
 int VAR_4;
 struct sembuf VAR_5;

 VAR_5.sem_op = -1;
 VAR_5.sem_flg = 0;
 VAR_5.sem_num = VAR_3->semNum;
 do
 {
  VAR_4 = FUNC_1(VAR_3->semId, &VAR_5, 1);
 } while (VAR_4 < 0 && VAR_2 == VAR_0);

 if (VAR_4 < 0)
  FUNC_0(VAR_1, "semop(id=%d) failed: %m", VAR_3->semId);
}
