
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PVOID ;
typedef int * PBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2()
{
   PBYTE VAR_3;
   PVOID VAR_4;

   VAR_3 = FUNC_0(((void*)0),
         1048576,
         VAR_1,
         VAR_2);
   if (VAR_3 == ((void*)0))
     {
 FUNC_1("VirtualAlloc failed 1\n");
     }

   VAR_4 = FUNC_0(VAR_3 + 4096,
        4096,
        VAR_0,
        VAR_2);
   if (VAR_4 == ((void*)0))
     {
 FUNC_1("VirtualAlloc failed 2\n");
     }

   VAR_4 = FUNC_0(VAR_3 + 12288,
        4096,
        VAR_0,
        VAR_2);
   if (VAR_4 == ((void*)0))
     {
 FUNC_1("VirtualAlloc failed 3\n");
     }

   VAR_4 = FUNC_0(VAR_3 + 20480,
        4096,
        VAR_0,
        VAR_2);
   if (VAR_4 == ((void*)0))
     {
 FUNC_1("VirtualAlloc failed 4\n");
     }

   VAR_4 = FUNC_0(VAR_3 + 4096,
        28672,
        VAR_1,
        VAR_2);
   if (VAR_4 == ((void*)0))
     {
 FUNC_1("VirtualAlloc failed 5\n");
     }
   return 0;
}
