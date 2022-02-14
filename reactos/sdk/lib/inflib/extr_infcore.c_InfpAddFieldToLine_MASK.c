
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_6__ {struct TYPE_6__* Prev; struct TYPE_6__* Next; int Data; } ;
struct TYPE_5__ {int FieldCount; TYPE_2__* LastField; TYPE_2__* FirstField; } ;
typedef int * PVOID ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_2__* PINFCACHEFIELD ;
typedef int * PCWSTR ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

PVOID
FUNC_6(PINFCACHELINE VAR_1,
                   PCWSTR VAR_2)
{
  PINFCACHEFIELD VAR_3;
  ULONG VAR_4;

  VAR_4 = (ULONG)FUNC_1(VAR_0,
                             VAR_2[FUNC_5(VAR_2) + 1]);
  VAR_3 = (PINFCACHEFIELD)FUNC_2(VAR_4);
  if (VAR_3 == ((void*)0))
    {
      FUNC_0("MALLOC() failed\n");
      return ((void*)0);
    }
  FUNC_3 (VAR_3,
              VAR_4);
  FUNC_4(VAR_3->Data, VAR_2);


  if (VAR_1->FirstField == ((void*)0))
    {
      VAR_1->FirstField = VAR_3;
      VAR_1->LastField = VAR_3;
    }
  else
    {
      VAR_1->LastField->Next = VAR_3;
      VAR_3->Prev = VAR_1->LastField;
      VAR_1->LastField = VAR_3;
    }
  VAR_1->FieldCount++;

  return (PVOID)VAR_3;
}
