
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_3__ {int Token; int * member_1; int * member_0; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int* PULONG ;
typedef TYPE_1__ PROCESS_ACCESS_TOKEN ;
typedef int PKIWI_BUFFER ;
typedef scalar_t__ PEPROCESS ;
typedef int PCHAR ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 scalar_t__** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ,int *,int ,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int ,int ,int *) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int) ;
 int FUNC_7 (int ,char*,int ,int ,...) ;

NTSTATUS FUNC_8(SIZE_T VAR_11, PVOID VAR_12, PKIWI_BUFFER VAR_13, HANDLE VAR_14, PEPROCESS VAR_15)
{
 PROCESS_ACCESS_TOKEN VAR_16 = {((void*)0), ((void*)0)};
 HANDLE VAR_17;
 PULONG VAR_18 = ((void*)0);
 NTSTATUS VAR_19;
 HANDLE VAR_20 = FUNC_2(VAR_15);
 PCHAR VAR_21 = FUNC_3(VAR_15);

 VAR_19 = FUNC_1(VAR_15, VAR_6, ((void*)0), 0, *VAR_8, VAR_3, &VAR_17);
 if(FUNC_0(VAR_19))
 {
  VAR_19 = FUNC_5(VAR_14, 0, ((void*)0), VAR_2, VAR_10, &VAR_16.Token);
  if(FUNC_0(VAR_19))
  {
   if(VAR_4 >= VAR_5)
   {
    VAR_18 = (PULONG) (((ULONG_PTR) VAR_15) + VAR_0[VAR_4][VAR_1]);
    if(*VAR_18 & VAR_9)
     *VAR_18 &= ~VAR_9;
    else
     VAR_18 = ((void*)0);
   }

   VAR_19 = FUNC_6(VAR_17, VAR_7, &VAR_16, sizeof(PROCESS_ACCESS_TOKEN));
   if(FUNC_0(VAR_19))
    VAR_19 = FUNC_7(VAR_13, L" * to %u/%-14S\n", VAR_20, VAR_21);
   else
    VAR_19 = FUNC_7(VAR_13, L" ! ZwSetInformationProcess 0x%08x for %u/%-14S\n", VAR_19, VAR_20, VAR_21);

   if((VAR_4 >= VAR_5) && VAR_18)
    *VAR_18 |= VAR_9;

   FUNC_4(VAR_16.Token);
  }
  FUNC_4(VAR_17);
 }
 return VAR_19;
}
