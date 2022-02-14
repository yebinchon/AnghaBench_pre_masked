
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPTSTR ;
typedef int HANDLE ;
typedef int DWORD ;
typedef char CHAR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,char*,int,int *,int *) ;
 int FUNC_3 (char*,...) ;

int FUNC_4(int VAR_2, char *VAR_3[])
{
   HANDLE VAR_4;
   CHAR VAR_5[512];
   BOOL VAR_6;
   DWORD VAR_7;
   LPTSTR VAR_8 = "\\\\.\\mailslot\\mymailslot";

   VAR_4 = FUNC_1(VAR_8,
         512,
         VAR_1,
         ((void*)0));
for (;;)
{
   VAR_6 = FUNC_2(VAR_4,
        VAR_5,
        512,
        &VAR_7,
        ((void*)0));
   if (VAR_6 == VAR_0)
     {
 FUNC_3("ReadFile() failed!\n");
 FUNC_0(VAR_4);
 return 0;
     }

   FUNC_3("Data read: %s\n", VAR_5);
}

   FUNC_0(VAR_4);

   return 0;
}
