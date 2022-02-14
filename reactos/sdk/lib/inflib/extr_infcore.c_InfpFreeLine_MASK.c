
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * LastField; struct TYPE_6__* FirstField; struct TYPE_6__* Next; struct TYPE_6__* Key; } ;
typedef TYPE_1__* PINFCACHELINE ;
typedef TYPE_1__* PINFCACHEFIELD ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static PINFCACHELINE
FUNC_1 (PINFCACHELINE VAR_0)
{
  PINFCACHELINE VAR_1;
  PINFCACHEFIELD VAR_2;

  if (VAR_0 == ((void*)0))
    {
      return ((void*)0);
    }

  VAR_1 = VAR_0->Next;
  if (VAR_0->Key != ((void*)0))
    {
      FUNC_0 (VAR_0->Key);
      VAR_0->Key = ((void*)0);
    }


  while (VAR_0->FirstField != ((void*)0))
    {
      VAR_2 = VAR_0->FirstField->Next;
      FUNC_0 (VAR_0->FirstField);
      VAR_0->FirstField = VAR_2;
    }
  VAR_0->LastField = ((void*)0);

  FUNC_0 (VAR_0);

  return VAR_1;
}
