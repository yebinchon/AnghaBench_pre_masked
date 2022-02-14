
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {int Data; struct TYPE_9__* Next; } ;
struct TYPE_8__ {TYPE_3__* FirstField; int Key; scalar_t__ FieldCount; } ;
struct TYPE_7__ {int Inf; } ;
typedef scalar_t__ SIZE_T ;
typedef int * PWSTR ;
typedef int PWCHAR ;
typedef scalar_t__* PULONG ;
typedef TYPE_1__* PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef TYPE_3__* PINFCACHEFIELD ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int *,scalar_t__) ;

INFSTATUS
FUNC_3(PINFCONTEXT VAR_3,
                   ULONG VAR_4,
                   PWSTR VAR_5,
                   ULONG VAR_6,
                   PULONG VAR_7)
{
  PINFCACHELINE VAR_8;
  PINFCACHEFIELD VAR_9;
  ULONG VAR_10;
  PWCHAR VAR_11;
  SIZE_T VAR_12;

  if (VAR_3 == ((void*)0))
    {
      FUNC_0("Invalid parameter\n");
      return VAR_1;
    }

  if (VAR_7 != ((void*)0))
    *VAR_7 = 0;

  VAR_8 = FUNC_1(VAR_3);

  if (VAR_4 > (ULONG)VAR_8->FieldCount)
    return VAR_1;

  if (VAR_4 == 0)
    {
      VAR_11 = VAR_8->Key;
    }
  else
    {
      VAR_9 = VAR_8->FirstField;
      for (VAR_10 = 1; VAR_10 < VAR_4; VAR_10++)
        VAR_9 = VAR_9->Next;

      VAR_11 = VAR_9->Data;
    }


  VAR_12 = FUNC_2(VAR_3->Inf,
                              VAR_11,
                              ((void*)0),
                              0);

  if (VAR_7 != ((void*)0))
    *VAR_7 = (ULONG)VAR_12 + 1;

  if (VAR_5 != ((void*)0))
    {
      if (VAR_6 <= VAR_12)
        return VAR_0;


      FUNC_2(VAR_3->Inf,
                           VAR_11,
                           VAR_5,
                           VAR_6);
    }

  return VAR_2;
}
