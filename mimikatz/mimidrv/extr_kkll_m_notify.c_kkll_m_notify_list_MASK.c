
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_2__ {int callback; } ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef size_t* PULONG ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_1__* PKKLL_M_NOTIFY_CALLBACK ;
typedef int PKKLL_M_MEMORY_GENERIC ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,scalar_t__*,size_t*,int *) ;
 int FUNC_4 (int ,char*,size_t) ;

NTSTATUS FUNC_5(PKIWI_BUFFER VAR_1, PKKLL_M_MEMORY_GENERIC VAR_2, SIZE_T VAR_3, PUCHAR * VAR_4, PULONG VAR_5)
{
 NTSTATUS VAR_6 = VAR_0;
 PKKLL_M_NOTIFY_CALLBACK VAR_7;
 ULONG VAR_8;

 if(!*VAR_4)
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0));

 if(*VAR_4)
 {
  for(VAR_8 = 0; FUNC_1(VAR_6) && (VAR_8 < *VAR_5); VAR_8++)
  {
   if((VAR_7 = (PKKLL_M_NOTIFY_CALLBACK) FUNC_0(((PVOID *) *VAR_4)[VAR_8])))
   {
    VAR_6 = FUNC_4(VAR_1, L"[%.2u] ", VAR_8);
    if(FUNC_1(VAR_6))
     VAR_6 = FUNC_2(VAR_1, VAR_7->callback);
   }
  }
 }
 return VAR_6;
}
