
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPVOID ;
typedef char* LPTSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int,scalar_t__*,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,char*,scalar_t__,scalar_t__*,int *) ;
 scalar_t__ FUNC_9 (char*) ;

int FUNC_10(int VAR_8, char *VAR_9[])
{
   HANDLE VAR_10;
   LPVOID VAR_11;
   CHAR VAR_12[512];
   BOOL VAR_13;
   DWORD VAR_14, VAR_15, VAR_16;
   LPTSTR VAR_17 = "\\\\.\\pipe\\mynamedpipe";



   while (1)
   {
      VAR_10 = FUNC_1(
         VAR_17,
         VAR_2 |
         VAR_3,
         0,
         ((void*)0),
         VAR_5,
         0,
         ((void*)0));



      if (VAR_10 != VAR_4)
         break;



      if (FUNC_2() != VAR_1)
         FUNC_4("Could not open pipe");



      if (! FUNC_7(VAR_17, 20000) )
         FUNC_4("Could not open pipe");
   }



   VAR_16 = VAR_6;
   VAR_13 = FUNC_6(
      VAR_10,
      &VAR_16,
      ((void*)0),
      ((void*)0));
   if (!VAR_13)
      FUNC_4("SetNamedPipeHandleState");



   VAR_11 = (VAR_8 > 1) ? VAR_9[1] : "default message";

   VAR_13 = FUNC_8(
      VAR_10,
      VAR_11,
      FUNC_9(VAR_11) + 1,
      &VAR_15,
      ((void*)0));
   if (! VAR_13)
      FUNC_4("WriteFile");

   do
   {


      VAR_13 = FUNC_5(
         VAR_10,
         VAR_12,
         512,
         &VAR_14,
         ((void*)0));

      if (! VAR_13 && FUNC_2() != VAR_0)
         break;



      if (! FUNC_8(FUNC_3(VAR_7),
         VAR_12, VAR_14, &VAR_15, ((void*)0)))
      {
         break;
      }

   } while (! VAR_13);

   FUNC_0(VAR_10);

   return 0;
}
