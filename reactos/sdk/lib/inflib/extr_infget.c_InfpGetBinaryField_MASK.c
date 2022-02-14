
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
struct TYPE_5__ {struct TYPE_5__* Next; int Data; } ;
struct TYPE_4__ {scalar_t__ FieldCount; TYPE_2__* FirstField; } ;
typedef scalar_t__* PULONG ;
typedef scalar_t__* PUCHAR ;
typedef int * PINFCONTEXT ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_2__* PINFCACHEFIELD ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;

INFSTATUS
FUNC_3(PINFCONTEXT VAR_4,
                   ULONG VAR_5,
                   PUCHAR VAR_6,
                   ULONG VAR_7,
                   PULONG VAR_8)
{
  PINFCACHELINE VAR_9;
  PINFCACHEFIELD VAR_10;
  ULONG VAR_11;
  ULONG VAR_12;
  PUCHAR VAR_13;

  if (VAR_4 == ((void*)0) || VAR_5 == 0)
    {
      FUNC_0("Invalid parameter\n");
      return VAR_1;
    }

  if (VAR_8 != ((void*)0))
    *VAR_8 = 0;

  VAR_9 = FUNC_1(VAR_4);

  if (VAR_5 > (ULONG)VAR_9->FieldCount)
    return VAR_2;

  VAR_10 = VAR_9->FirstField;
  for (VAR_11 = 1; VAR_11 < VAR_5; VAR_11++)
    VAR_10 = VAR_10->Next;

  VAR_12 = (ULONG)VAR_9->FieldCount - VAR_5 + 1;

  if (VAR_8 != ((void*)0))
    *VAR_8 = VAR_12;

  if (VAR_6 != ((void*)0))
    {
      if (VAR_7 < VAR_12)
        return VAR_0;


      VAR_13 = VAR_6;
      while (VAR_10 != ((void*)0))
        {
          *VAR_13 = (UCHAR)FUNC_2(VAR_10->Data, ((void*)0), 16);

          VAR_13++;
          VAR_10 = VAR_10->Next;
        }
    }

  return VAR_3;
}
