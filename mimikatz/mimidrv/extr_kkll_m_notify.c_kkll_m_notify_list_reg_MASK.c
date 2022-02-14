
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_7__ {scalar_t__ off1; } ;
struct TYPE_6__ {int callback; } ;
struct TYPE_5__ {scalar_t__ Flink; } ;
typedef int PVOID ;
typedef int PUCHAR ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PKKLL_M_NOTIFY_CALLBACK ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *,int *,TYPE_3__**) ;
 int FUNC_5 (int ,char*,size_t) ;
 TYPE_3__* VAR_6 ;

NTSTATUS FUNC_6(PKIWI_BUFFER VAR_7)
{
 NTSTATUS VAR_8 = VAR_5;
 PKKLL_M_NOTIFY_CALLBACK VAR_9;
 PLIST_ENTRY VAR_10;
 ULONG VAR_11;

 if(!VAR_1)
  VAR_8 = FUNC_4(VAR_4, FUNC_0(VAR_4), (PUCHAR *) &VAR_1, ((void*)0), &VAR_6);

 if(VAR_1)
 {
  if(VAR_2 < VAR_3)
  {
   for(VAR_11 = 0; FUNC_2(VAR_8) && (VAR_11 < VAR_0); VAR_11++)
   {
    if((VAR_9 = (PKKLL_M_NOTIFY_CALLBACK) FUNC_1(VAR_1[VAR_11])))
    {
     VAR_8 = FUNC_5(VAR_7, L"[%.2u] ", VAR_11);
     if(FUNC_2(VAR_8))
      VAR_8 = FUNC_3(VAR_7, VAR_9->callback);
    }
   }
  }
  else
  {
   for(VAR_10 = (PLIST_ENTRY) *VAR_1, VAR_11 = 0 ; FUNC_2(VAR_8) && (VAR_10 != (PLIST_ENTRY) VAR_1); VAR_10 = (PLIST_ENTRY) (VAR_10->Flink), VAR_11++)
   {
    VAR_8 = FUNC_5(VAR_7, L"[%.2u] ", VAR_11);
    if(FUNC_2(VAR_8))
     VAR_8 = FUNC_3(VAR_7, *(PVOID *) ((ULONG_PTR) VAR_10 + VAR_6->off1));
   }
  }
 }
 return VAR_8;
}
