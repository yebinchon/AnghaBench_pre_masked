
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int LPTSTR ;
typedef int LPTHREAD_START_ROUTINE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*) ;
 int VAR_10 ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_11, char *VAR_12[])
{
   BOOL VAR_13;
   DWORD VAR_14;
   HANDLE VAR_15, VAR_16;
   LPTSTR VAR_17 = FUNC_7("\\\\.\\pipe\\mynamedpipe");



 VAR_15 = FUNC_2(VAR_17,
    VAR_4,
    VAR_7 |
    VAR_5 |
    VAR_9,
    VAR_8,
    VAR_0,
    VAR_0,
    VAR_6,
    ((void*)0));
 if (VAR_15 == VAR_2)
   {
      FUNC_8("CreateNamedPipe() failed\n");
      return 0;
   }

 VAR_13 = FUNC_1(VAR_15,
          ((void*)0)) ? VAR_10 : (FUNC_5 () ==
         VAR_1);
 if (VAR_13)
   {
      FUNC_8("Pipe connected!\n");

      FUNC_4(VAR_15);
   }
 else
   {

   }


   FUNC_0(VAR_15);

   return 0;
}
