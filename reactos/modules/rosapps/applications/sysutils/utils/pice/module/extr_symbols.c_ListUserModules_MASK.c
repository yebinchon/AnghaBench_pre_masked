
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_17__ {struct TYPE_17__* next; int name; scalar_t__ EntryPoint; int BaseAddress; int size; } ;
struct TYPE_12__ {scalar_t__ Length; int Buffer; } ;
struct TYPE_11__ {int Buffer; } ;
struct TYPE_16__ {TYPE_2__ BaseDllName; scalar_t__ EntryPoint; int BaseAddress; int SizeOfImage; TYPE_1__ FullDllName; } ;
struct TYPE_15__ {struct TYPE_15__* Flink; } ;
struct TYPE_14__ {TYPE_3__* Ldr; } ;
struct TYPE_13__ {TYPE_5__ InLoadOrderModuleList; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_3__* PPEB_LDR_DATA ;
typedef TYPE_4__* PPEB ;
typedef TYPE_5__* PLIST_ENTRY ;
typedef TYPE_6__* PLDR_DATA_TABLE_ENTRY ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;

BOOLEAN FUNC_7( PPEB VAR_5 )
{
 PLIST_ENTRY VAR_6;
 PLIST_ENTRY VAR_7;
 PLDR_DATA_TABLE_ENTRY VAR_8;
 PPEB_LDR_DATA VAR_9;

 FUNC_3();

 VAR_9 = VAR_5->Ldr;
 if( VAR_9 && FUNC_4((ULONG)VAR_9)){
  VAR_6 = &VAR_9->InLoadOrderModuleList;
  FUNC_0(FUNC_4((ULONG)VAR_6));
  VAR_7 = VAR_6->Flink;
  while (VAR_7 != VAR_6)
  {
   VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_1);


   FUNC_2((0,"FullName: %S, BaseName: %S, Length: %ld, EntryPoint: %x, BaseAddress: %x\n", VAR_8->FullDllName.Buffer,
     VAR_8->BaseDllName.Buffer, VAR_8->SizeOfImage, VAR_8->EntryPoint, VAR_8->BaseAddress ));

   VAR_4->size = VAR_8->SizeOfImage;
   VAR_4->BaseAddress = VAR_8->BaseAddress;
   VAR_4->EntryPoint = (PVOID)(VAR_8->EntryPoint);
   FUNC_0(VAR_8->BaseDllName.Length<VAR_0);
   FUNC_6( VAR_4->name, VAR_8->BaseDllName.Buffer );
   VAR_4 = VAR_4->next;

   VAR_7 = VAR_7->Flink;
  }
 }
 FUNC_5();
 return VAR_3;
}
