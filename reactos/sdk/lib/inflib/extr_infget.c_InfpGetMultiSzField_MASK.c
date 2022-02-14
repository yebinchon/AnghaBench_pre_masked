
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {struct TYPE_5__* Next; int Data; } ;
struct TYPE_4__ {TYPE_2__* FirstField; scalar_t__ FieldCount; } ;
typedef scalar_t__* PWSTR ;
typedef scalar_t__* PWCHAR ;
typedef scalar_t__* PULONG ;
typedef int * PINFCONTEXT ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_2__* PINFCACHEFIELD ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

INFSTATUS
FUNC_4(PINFCONTEXT VAR_3,
                    ULONG VAR_4,
                    PWSTR VAR_5,
                    ULONG VAR_6,
                    PULONG VAR_7)
{
  PINFCACHELINE VAR_8;
  PINFCACHEFIELD VAR_9;
  PINFCACHEFIELD VAR_10;
  ULONG VAR_11;
  ULONG VAR_12;
  PWCHAR VAR_13;

  if (VAR_3 == ((void*)0) || VAR_4 == 0)
    {
      FUNC_0("Invalid parameter\n");
      return VAR_1;
    }

  if (VAR_7 != ((void*)0))
    *VAR_7 = 0;

  VAR_8 = FUNC_1(VAR_3);

  if (VAR_4 > (ULONG)VAR_8->FieldCount)
    return VAR_1;

  VAR_9 = VAR_8->FirstField;
  for (VAR_11 = 1; VAR_11 < VAR_4; VAR_11++)
    VAR_9 = VAR_9->Next;


  VAR_10 = VAR_9;
  VAR_12 = 0;
  while (VAR_10 != ((void*)0))
    {
      VAR_12 += ((ULONG)FUNC_3(VAR_10->Data) + 1);
      VAR_10 = VAR_10->Next;
    }
  VAR_12++;

  if (VAR_7 != ((void*)0))
    *VAR_7 = VAR_12;

  if (VAR_5 != ((void*)0))
    {
      if (VAR_6 < VAR_12)
        return VAR_0;


      VAR_13 = VAR_5;
      VAR_10 = VAR_9;
      while (VAR_10 != ((void*)0))
        {
          VAR_12 = (ULONG)FUNC_3(VAR_10->Data) + 1;

          FUNC_2(VAR_13, VAR_10->Data);

          VAR_13 = VAR_13 + VAR_12;
          VAR_10 = VAR_10->Next;
        }
      *VAR_13 = 0;
    }

  return VAR_2;
}
