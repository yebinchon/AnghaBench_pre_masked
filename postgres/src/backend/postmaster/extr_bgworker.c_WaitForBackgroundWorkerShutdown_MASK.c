
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int ,int ) ;

BgwHandleStatus
FUNC_4(BackgroundWorkerHandle *VAR_6)
{
 BgwHandleStatus VAR_7;
 int VAR_8;

 for (;;)
 {
  pid_t VAR_9;

  FUNC_0();

  VAR_7 = FUNC_1(VAR_6, &VAR_9);
  if (VAR_7 == VAR_1)
   break;

  VAR_8 = FUNC_3(VAR_2,
        VAR_4 | VAR_5, 0,
        VAR_3);

  if (VAR_8 & VAR_5)
  {
   VAR_7 = VAR_0;
   break;
  }

  FUNC_2(VAR_2);
 }

 return VAR_7;
}
