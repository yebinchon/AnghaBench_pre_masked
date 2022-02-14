
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int VAR_2 ;

int
FUNC_5(char * VAR_3)
{
 HANDLE VAR_4;
 DWORD VAR_5;

 VAR_5 = (DWORD) FUNC_3(VAR_3);
  FUNC_4( VAR_2, "Killing PID %ld...\n",VAR_5);
 VAR_4 = FUNC_1(
   VAR_1,
   VAR_0,
   VAR_5
   );
 if (((void*)0) == VAR_4)
 {
  FUNC_4( VAR_2, "Could not open the process with PID = %ld\n", VAR_5);
  return 0;
 }
 if (VAR_0 == FUNC_2(
   VAR_4,
   0
   )
 ) {
  FUNC_4( VAR_2, "Could not terminate the process with PID = %ld\n", VAR_5);
  return 0;
 }
 FUNC_0(VAR_4);
 return 0;
}
