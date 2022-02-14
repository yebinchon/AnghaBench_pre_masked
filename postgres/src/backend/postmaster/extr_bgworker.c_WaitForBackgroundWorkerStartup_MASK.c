
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int,int ,int ) ;

BgwHandleStatus
FUNC_4(BackgroundWorkerHandle *VAR_7, pid_t *VAR_8)
{
 BgwHandleStatus VAR_9;
 int VAR_10;

 for (;;)
 {
  pid_t VAR_11;

  FUNC_0();

  VAR_9 = FUNC_1(VAR_7, &VAR_11);
  if (VAR_9 == VAR_2)
   *VAR_8 = VAR_11;
  if (VAR_9 != VAR_0)
   break;

  VAR_10 = FUNC_3(VAR_3,
        VAR_5 | VAR_6, 0,
        VAR_4);

  if (VAR_10 & VAR_6)
  {
   VAR_9 = VAR_1;
   break;
  }

  FUNC_2(VAR_3);
 }

 return VAR_9;
}
