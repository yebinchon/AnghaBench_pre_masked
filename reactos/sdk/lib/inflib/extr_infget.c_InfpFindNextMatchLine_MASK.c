
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Next; int Id; int * Key; } ;
struct TYPE_8__ {int Line; int Section; int Inf; } ;
typedef TYPE_1__* PINFCONTEXT ;
typedef int * PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;
typedef scalar_t__* PCWSTR ;
typedef int INFSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;

INFSTATUS
FUNC_3(PINFCONTEXT VAR_3,
                      PCWSTR VAR_4,
                      PINFCONTEXT VAR_5)
{
  PINFCACHESECTION VAR_6;
  PINFCACHELINE VAR_7;

  if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_4 == ((void*)0) || *VAR_4 == 0)
    return VAR_0;

  VAR_6 = FUNC_1(VAR_3);
  if (VAR_6 == ((void*)0))
      return VAR_0;

  VAR_7 = FUNC_0(VAR_3);
  while (VAR_7 != ((void*)0))
    {
      if (VAR_7->Key != ((void*)0) && FUNC_2 (VAR_7->Key, VAR_4) == 0)
        {

          if (VAR_3 != VAR_5)
            {
              VAR_5->Inf = VAR_3->Inf;
              VAR_5->Section = VAR_3->Section;
            }
          VAR_5->Line = VAR_7->Id;

          return VAR_2;
        }

      VAR_7 = VAR_7->Next;
    }

  return VAR_1;
}
