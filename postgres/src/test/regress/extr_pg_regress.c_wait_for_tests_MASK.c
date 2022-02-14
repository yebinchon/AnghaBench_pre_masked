
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int instr_time ;
typedef scalar_t__ PID_TYPE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 char* FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,scalar_t__*,int ,int ) ;
 char* FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__* FUNC_10 (int) ;
 int FUNC_11 (char*,char*) ;
 int VAR_5 ;
 char* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int*) ;

__attribute__((used)) static void
FUNC_14(PID_TYPE * VAR_6, int *VAR_7, instr_time *VAR_8,
      char **VAR_9, int VAR_10)
{
 int VAR_11;
 int VAR_12;







 VAR_11 = VAR_10;
 while (VAR_11 > 0)
 {
  PID_TYPE VAR_13;


  int VAR_14;

  VAR_13 = FUNC_13(&VAR_14);

  if (VAR_13 == VAR_2)
  {
   FUNC_7(VAR_5, FUNC_5("failed to wait for subprocesses: %s\n"),
     FUNC_12(VAR_4));
   FUNC_6(2);
  }
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  {
   if (VAR_13 == VAR_6[VAR_12])
   {




    VAR_6[VAR_12] = VAR_2;
    VAR_7[VAR_12] = (int) VAR_14;
    FUNC_3(VAR_8[VAR_12]);
    if (VAR_9)
     FUNC_11(" %s", VAR_9[VAR_12]);
    VAR_11--;
    break;
   }
  }
 }




}
