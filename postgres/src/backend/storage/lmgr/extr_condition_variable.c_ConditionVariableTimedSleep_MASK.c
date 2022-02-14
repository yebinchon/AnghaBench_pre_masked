
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int instr_time ;
typedef int WaitEvent ;
struct TYPE_7__ {int pgprocno; } ;
struct TYPE_6__ {int mutex; int wakeup; } ;
typedef TYPE_1__ ConditionVariable ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 long VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,long,int *,int,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ,int ) ;

bool
FUNC_12(ConditionVariable *VAR_6, long VAR_7,
       uint32 VAR_8)
{
 long VAR_9 = -1;
 instr_time VAR_10;
 instr_time VAR_11;
 if (VAR_4 != VAR_6)
 {
  FUNC_2(VAR_6);
  return 0;
 }





 if (VAR_7 >= 0)
 {
  FUNC_4(VAR_10);
  FUNC_0(VAR_7 >= 0 && VAR_7 <= VAR_0);
  VAR_9 = VAR_7;
 }

 while (1)
 {
  WaitEvent VAR_12;
  bool VAR_13 = 0;





  (void) FUNC_9(VAR_5, VAR_9, &VAR_12, 1,
        VAR_8);


  FUNC_6(VAR_1);

  FUNC_1();
  FUNC_7(&VAR_6->mutex);
  if (!FUNC_10(&VAR_6->wakeup, VAR_2->pgprocno, VAR_3))
  {
   VAR_13 = 1;
   FUNC_11(&VAR_6->wakeup, VAR_2->pgprocno, VAR_3);
  }
  FUNC_8(&VAR_6->mutex);


  if (VAR_13)
   return 0;


  if (VAR_7 >= 0)
  {
   FUNC_4(VAR_11);
   FUNC_5(VAR_11, VAR_10);
   VAR_9 = VAR_7 - (long) FUNC_3(VAR_11);


   if (VAR_9 <= 0)
    return 1;
  }
 }
}
