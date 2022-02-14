
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int* VAR_6 ;
 int* VAR_7 ;

void
FUNC_7(bool VAR_8)
{
 int VAR_9;
 if (FUNC_3(VAR_6[VAR_4]) != 0)
  FUNC_4(VAR_0,
    (FUNC_5(),
     FUNC_6("could not close postmaster death monitoring pipe in child process: %m")));
 VAR_6[VAR_4] = -1;



 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
 {
  if (VAR_1[VAR_9] != VAR_3)
  {
   FUNC_2(VAR_1[VAR_9]);
   VAR_1[VAR_9] = VAR_3;
  }
 }


 if (!VAR_8)
 {

  if (VAR_7[0] >= 0)
   FUNC_3(VAR_7[0]);
  VAR_7[0] = -1;





 }






}
