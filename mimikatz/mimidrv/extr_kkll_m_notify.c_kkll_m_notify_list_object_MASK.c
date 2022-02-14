
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef size_t ULONG ;
struct TYPE_12__ {TYPE_2__** HashBuckets; } ;
struct TYPE_11__ {scalar_t__ off2; scalar_t__ off3; scalar_t__ off1; } ;
struct TYPE_8__ {scalar_t__ Flink; } ;
struct TYPE_10__ {TYPE_1__ CallbackList; } ;
struct TYPE_9__ {scalar_t__ Object; struct TYPE_9__* ChainLink; } ;
typedef int PVOID ;
typedef int PUCHAR ;
typedef TYPE_2__* POBJECT_DIRECTORY_ENTRY ;
typedef TYPE_3__* POBJECT_CALLBACK_ENTRY ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_7__** VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int *,int *,TYPE_4__**) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 TYPE_4__* VAR_6 ;
 scalar_t__* VAR_7 ;

NTSTATUS FUNC_6(PKIWI_BUFFER VAR_8)
{
 NTSTATUS VAR_9 = VAR_5;
 POBJECT_DIRECTORY_ENTRY VAR_10;
 ULONG_PTR VAR_11;
 POBJECT_CALLBACK_ENTRY VAR_12;
 ULONG VAR_13, VAR_14;
 PVOID VAR_15;

 if(!VAR_4)
  VAR_9 = FUNC_4(VAR_3, FUNC_0(VAR_3), (PUCHAR *) &VAR_4, ((void*)0), &VAR_6);

 if(VAR_4)
 {
  for(VAR_13 = 0; FUNC_1(VAR_9) && (VAR_13 < VAR_2); VAR_13++)
  {
   for(VAR_10 = (*VAR_4)->HashBuckets[VAR_13]; FUNC_1(VAR_9) && VAR_10; VAR_10 = VAR_10->ChainLink)
   {
    if((VAR_11 = (ULONG_PTR) VAR_10->Object))
    {
     VAR_9 = FUNC_5(VAR_8, L"\n * %wZ\n", VAR_11 + VAR_6->off1);
     if(VAR_0 >= VAR_1)
     {
      for(VAR_12 = *(POBJECT_CALLBACK_ENTRY *) (VAR_11 + VAR_6->off3) ; FUNC_1(VAR_9) && (VAR_12 != (POBJECT_CALLBACK_ENTRY) (VAR_11 + VAR_6->off3)) ; VAR_12 = (POBJECT_CALLBACK_ENTRY) VAR_12->CallbackList.Flink)
       VAR_9 = FUNC_3(VAR_12, VAR_8);
     }
     for(VAR_14 = 0; FUNC_1(VAR_9) && (VAR_14 < 8) ; VAR_14++)
     {
      if((VAR_15 = *(PVOID *) (VAR_11 + VAR_6->off2 + (sizeof(PVOID) * VAR_14))))
      {
       VAR_9 = FUNC_5(VAR_8, L"\t%s - ", VAR_7[VAR_14]);
       if(FUNC_1(VAR_9))
        VAR_9 = FUNC_2(VAR_8, VAR_15);
      }
     }
    }
   }
  }
 }
 return VAR_9;
}
