
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {scalar_t__ toProcessId; scalar_t__ fromProcessId; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef TYPE_1__* PMIMIDRV_PROCESS_TOKEN_FROM_TO ;
typedef int PKIWI_BUFFER ;
typedef scalar_t__ PEPROCESS ;
typedef int NTSTATUS ;
typedef int MIMIDRV_PROCESS_TOKEN_FROM_TO ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int *,int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,scalar_t__*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int,int ,int ,int ,scalar_t__) ;
 int FUNC_10 (int ,char*,int ,int ) ;

NTSTATUS FUNC_11(SIZE_T VAR_6, PVOID VAR_7, PKIWI_BUFFER VAR_8)
{
 NTSTATUS VAR_9 = VAR_4;
 PMIMIDRV_PROCESS_TOKEN_FROM_TO VAR_10 = (PMIMIDRV_PROCESS_TOKEN_FROM_TO) VAR_7;
 ULONG VAR_11, VAR_12;
 HANDLE VAR_13, VAR_14;
 PEPROCESS VAR_15 = VAR_2, VAR_16 = ((void*)0);

 if(VAR_10 && (VAR_6 == sizeof(MIMIDRV_PROCESS_TOKEN_FROM_TO)))
 {
  if(VAR_10->fromProcessId)
   VAR_9 = FUNC_5((HANDLE) VAR_10->fromProcessId, &VAR_15);
  if(FUNC_0(VAR_9) && VAR_10->toProcessId)
   VAR_9 = FUNC_5((HANDLE) VAR_10->toProcessId, &VAR_16);
 }

 if(FUNC_0(VAR_9))
 {
  VAR_9 = FUNC_2(VAR_15, VAR_1, ((void*)0), 0, *VAR_3, VAR_0, &VAR_13);
  if(FUNC_0(VAR_9))
  {
   VAR_9 = FUNC_7(VAR_13, 0, VAR_1, &VAR_14);
   if(FUNC_0(VAR_9))
   {
    VAR_9 = FUNC_10(VAR_8, L"Token from %u/%-14S\n", FUNC_3(VAR_15), FUNC_4(VAR_15));
    if(FUNC_0(VAR_9))
    {
     if(VAR_16)
      VAR_9 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_14, VAR_16);
     else
      VAR_9 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_5, VAR_14);
    }
    FUNC_6(VAR_14);
   }
   FUNC_6(VAR_13);
  }
 }

 if(VAR_16)
  FUNC_1(VAR_16);

 if(VAR_15 && (VAR_15 != VAR_2))
  FUNC_1(VAR_15);

 return VAR_9;
}
