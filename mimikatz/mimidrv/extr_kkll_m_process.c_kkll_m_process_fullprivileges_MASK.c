
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_2__ {int* Present; int* Enabled; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PKIWI_NT6_PRIVILEGES ;
typedef int PKIWI_BUFFER ;
typedef scalar_t__ PEPROCESS ;
typedef int * PACCESS_TOKEN ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 scalar_t__** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int * FUNC_7 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_8 (int ,char*,int ,int ) ;

NTSTATUS FUNC_9(SIZE_T VAR_6, PVOID VAR_7, PKIWI_BUFFER VAR_8)
{
 NTSTATUS VAR_9 = VAR_4;
 PEPROCESS VAR_10 = ((void*)0);
 PACCESS_TOKEN VAR_11 = ((void*)0);
 PKIWI_NT6_PRIVILEGES VAR_12;
 PULONG VAR_13 = (PULONG) VAR_7;

 if(VAR_1 >= VAR_2)
 {
  if(VAR_13 && (VAR_6 == sizeof(ULONG)))
   VAR_9 = FUNC_6((HANDLE) *VAR_13, &VAR_10);
  else
   VAR_10 = FUNC_3();

  if(FUNC_0(VAR_9) && VAR_10)
  {
   if((VAR_11 = FUNC_7(VAR_10)))
   {
    VAR_9 = FUNC_8(VAR_8, L"All privileges for the access token from %u/%-14S\n", FUNC_4(VAR_10), FUNC_5(VAR_10));

    VAR_12 = (PKIWI_NT6_PRIVILEGES) (((ULONG_PTR) VAR_11) + VAR_0[VAR_1][VAR_5]);
    VAR_12->Present[0] = VAR_12->Enabled[0] = 0xfc;
    VAR_12->Present[1] = VAR_12->Enabled[1] =
    VAR_12->Present[2] = VAR_12->Enabled[2] =
    VAR_12->Present[3] = VAR_12->Enabled[3] = 0xff;
    VAR_12->Present[4] = VAR_12->Enabled[4] = 0x0f;

    FUNC_2(VAR_11);
   }

   if(VAR_10 != FUNC_3())
    FUNC_1(VAR_10);
  }
 }
 else VAR_9 = VAR_3;

 return VAR_9;
}
