
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_14__ {struct TYPE_14__* next; int EntryPoint; int name; scalar_t__ size; scalar_t__ BaseAddress; } ;
struct TYPE_13__ {struct TYPE_13__* Flink; } ;
struct TYPE_11__ {int Buffer; } ;
struct TYPE_10__ {int Buffer; } ;
struct TYPE_12__ {scalar_t__ Length; scalar_t__ Base; TYPE_2__ BaseName; int EntryPoint; TYPE_1__ FullName; } ;
typedef int POBJECT_HEADER ;
typedef TYPE_3__* PMODULE_OBJECT ;
typedef TYPE_4__* PLIST_ENTRY ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,char*) ;
 scalar_t__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 TYPE_5__* VAR_5 ;

BOOLEAN FUNC_7( void )
{
    PLIST_ENTRY VAR_6;
 PMODULE_OBJECT VAR_7;
    POBJECT_HEADER VAR_8;

 FUNC_3();

 FUNC_0( VAR_4 );

 VAR_6 = VAR_4->Flink;

   while (VAR_6 != (VAR_4)){

  VAR_7 = FUNC_1(VAR_6,VAR_1,VAR_0);

  FUNC_2((0,"FullName: %S, BaseName: %S, Length: %ld, EntryPoint: %x\n", VAR_7->FullName.Buffer,
    VAR_7->BaseName.Buffer, VAR_7->Length, VAR_7->EntryPoint ));

  VAR_5->BaseAddress = VAR_7->Base;
  VAR_5->size = VAR_7->Length;
  FUNC_5( VAR_5->name, VAR_7->BaseName.Buffer);
  VAR_5->EntryPoint = VAR_7->EntryPoint;

  VAR_5 = VAR_5->next;

  if (VAR_7 && FUNC_6(VAR_7->BaseName.Buffer, L"ntoskrnl")==0)
  {
     VAR_3 = (ULONG)VAR_7->Base + VAR_7->Length;
  }
  VAR_6 = VAR_6->Flink;
 }

 FUNC_4();
 return VAR_2;
}
