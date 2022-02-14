
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int dwPageSize; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef char* PCHAR ;
typedef int * PBYTE ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int ,int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int) ;
 int FUNC_8 (char*) ;

int FUNC_9()
{
   DWORD VAR_6;
   SYSTEM_INFO VAR_7;
   HANDLE VAR_8;
   PBYTE VAR_9;
   PCHAR VAR_10 = "test.txt";
   ULONG VAR_11 = FUNC_8(VAR_10);

   FUNC_2("Calling CreateFileMappingA\n");
   VAR_8 = FUNC_1(VAR_2, ((void*)0),
      VAR_4 | VAR_5, 0, VAR_11, VAR_10);
   if (!VAR_8)
   {
      FUNC_2("CreateFileMappingA failed\n");
      return 1;
   }

   VAR_6 = FUNC_3();
   FUNC_2("Calling MapViewOfFile\n");
   VAR_9 = (BYTE *)FUNC_5(VAR_8, VAR_1, 0, 0, 0);
   if (!VAR_9)
   {
      FUNC_2("MapViewOfFile failed\n");
      return 1;
   }

   FUNC_4(&VAR_7);

   if (VAR_6 == VAR_0)
   {
      FUNC_2("MapViewOfFile returned ERROR_ALREADY_EXISTS\n");
      FUNC_2("This really shouldn't happen, but it's not fatal.\n");
      FUNC_6(VAR_9);
      FUNC_0(VAR_8);
      return 1;
   }
   else
   {
      FUNC_2("Calling VirtualAlloc\n");
      if (!FUNC_7(VAR_9, VAR_7.dwPageSize, VAR_3, VAR_4))
      {
         FUNC_2("VirtualAlloc failed\n");
         FUNC_6(VAR_9);
         FUNC_0(VAR_8);
         return 1;
      }
   }

   FUNC_2("Hurray!\n");

   FUNC_6(VAR_9);
   FUNC_0(VAR_8);

   return 0;
}
