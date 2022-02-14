
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union semun {scalar_t__ val; } ;
typedef scalar_t__ pid_t ;
struct TYPE_3__ {int semNum; scalar_t__ semId; } ;
typedef TYPE_1__ PGSemaphoreData ;
typedef scalar_t__ IpcSemaphoreId ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,union semun) ;
 scalar_t__ FUNC_8 (int ,int,int ) ;

__attribute__((used)) static IpcSemaphoreId
FUNC_9(int VAR_5)
{
 IpcSemaphoreId VAR_6;
 union semun VAR_7;
 PGSemaphoreData VAR_8;


 for (VAR_4++;; VAR_4++)
 {
  pid_t VAR_9;


  VAR_6 = FUNC_0(VAR_4, VAR_5 + 1);
  if (VAR_6 >= 0)
   break;


  VAR_6 = FUNC_8(VAR_4, VAR_5 + 1, 0);
  if (VAR_6 < 0)
   continue;
  if (FUNC_2(VAR_6, VAR_5) != VAR_2)
   continue;





  VAR_9 = FUNC_1(VAR_6, VAR_5);
  if (VAR_9 <= 0)
   continue;
  if (VAR_9 != FUNC_5())
  {
   if (FUNC_6(VAR_9, 0) == 0 || VAR_3 != VAR_0)
    continue;
  }







  VAR_7.val = 0;
  if (FUNC_7(VAR_6, 0, VAR_1, VAR_7) < 0)
   continue;




  VAR_6 = FUNC_0(VAR_4, VAR_5 + 1);
  if (VAR_6 >= 0)
   break;






 }







 FUNC_3(VAR_6, VAR_5, VAR_2 - 1);
 VAR_8.semId = VAR_6;
 VAR_8.semNum = VAR_5;
 FUNC_4(&VAR_8);

 return VAR_6;
}
