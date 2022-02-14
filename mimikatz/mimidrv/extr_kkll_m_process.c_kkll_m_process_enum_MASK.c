
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int SIZE_T ;
typedef scalar_t__ PVOID ;
typedef int (* PKKLL_M_PROCESS_CALLBACK ) (int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
typedef int PKIWI_BUFFER ;
typedef scalar_t__ PEPROCESS ;
typedef int NTSTATUS ;


 scalar_t__** VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

NTSTATUS FUNC_1(SIZE_T VAR_5, PVOID VAR_6, PKIWI_BUFFER VAR_7, PKKLL_M_PROCESS_CALLBACK VAR_8, PVOID VAR_9)
{
 NTSTATUS VAR_10 = VAR_4;
 PEPROCESS VAR_11 = ((void*)0);
 for(
  VAR_11 = VAR_3;
  FUNC_0(VAR_10) && (PEPROCESS) ((ULONG_PTR) (*(PVOID *) (((ULONG_PTR) VAR_11) + VAR_0[VAR_2][VAR_1])) - VAR_0[VAR_2][VAR_1]) != VAR_3;
  VAR_11 = (PEPROCESS) ((ULONG_PTR) (*(PVOID *) (((ULONG_PTR) VAR_11) + VAR_0[VAR_2][VAR_1])) - VAR_0[VAR_2][VAR_1])
  )
 {
  VAR_10 = VAR_8(VAR_5, VAR_6, VAR_7, VAR_11, VAR_9);
 }
 return VAR_10;
}
