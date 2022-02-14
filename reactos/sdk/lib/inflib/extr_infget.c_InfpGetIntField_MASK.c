
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int Data; struct TYPE_5__* Next; } ;
struct TYPE_4__ {TYPE_2__* FirstField; int Key; scalar_t__ FieldCount; } ;
typedef int PWCHAR ;
typedef int * PINFCONTEXT ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_2__* PINFCACHEFIELD ;
typedef scalar_t__ LONG ;
typedef scalar_t__ INT ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;

INFSTATUS
FUNC_3(PINFCONTEXT VAR_2,
                ULONG VAR_3,
                INT *VAR_4)
{
  PINFCACHELINE VAR_5;
  PINFCACHEFIELD VAR_6;
  ULONG VAR_7;
  PWCHAR VAR_8;

  if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
    {
      FUNC_0("Invalid parameter\n");
      return VAR_0;
    }

  VAR_5 = FUNC_1(VAR_2);

  if (VAR_3 > (ULONG)VAR_5->FieldCount)
    {
      FUNC_0("Invalid parameter\n");
      return VAR_0;
    }

  if (VAR_3 == 0)
    {
      VAR_8 = VAR_5->Key;
    }
  else
    {
      VAR_6 = VAR_5->FirstField;
      for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++)
        VAR_6 = VAR_6->Next;

      VAR_8 = VAR_6->Data;
    }

  *VAR_4 = (LONG)FUNC_2(VAR_8, ((void*)0), 0);

  return VAR_1;
}
