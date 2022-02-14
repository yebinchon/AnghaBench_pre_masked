
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sembuf {int sem_op; int sem_num; int sem_flg; } ;
struct TYPE_3__ {int semId; int semNum; } ;
typedef TYPE_1__* PGSemaphore ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,struct sembuf*,int) ;

bool
FUNC_2(PGSemaphore VAR_6)
{
 int VAR_7;
 struct sembuf VAR_8;

 VAR_8.sem_op = -1;
 VAR_8.sem_flg = VAR_4;
 VAR_8.sem_num = VAR_6->semNum;






 do
 {
  VAR_7 = FUNC_1(VAR_6->semId, &VAR_8, 1);
 } while (VAR_7 < 0 && VAR_5 == VAR_1);

 if (VAR_7 < 0)
 {
  FUNC_0(VAR_3, "semop(id=%d) failed: %m", VAR_6->semId);
 }

 return 1;
}
