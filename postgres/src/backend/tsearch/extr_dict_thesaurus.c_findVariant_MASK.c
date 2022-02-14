
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_7__ {scalar_t__ idsubst; scalar_t__ posinsubst; int tnvariant; struct TYPE_7__* nextentry; struct TYPE_7__* nextvariant; } ;
typedef TYPE_1__ LexemeInfo ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static LexemeInfo *
FUNC_1(LexemeInfo *VAR_0, LexemeInfo *VAR_1, uint16 VAR_2, LexemeInfo **VAR_3, int VAR_4)
{
 for (;;)
 {
  int VAR_5;
  LexemeInfo *VAR_6 = VAR_3[0];

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  {
   while (VAR_3[VAR_5] && VAR_3[VAR_5]->idsubst < VAR_6->idsubst)
    VAR_3[VAR_5] = VAR_3[VAR_5]->nextentry;

   if (VAR_3[VAR_5] == ((void*)0))
    return VAR_0;

   if (VAR_3[VAR_5]->idsubst > VAR_6->idsubst)
   {
    VAR_6 = VAR_3[VAR_5];
    VAR_5 = -1;
    continue;
   }

   while (VAR_3[VAR_5]->idsubst == VAR_6->idsubst)
   {
    if (VAR_3[VAR_5]->posinsubst == VAR_2 && VAR_3[VAR_5]->tnvariant == VAR_4)
    {
     VAR_6 = VAR_3[VAR_5];
     break;
    }

    VAR_3[VAR_5] = VAR_3[VAR_5]->nextentry;
    if (VAR_3[VAR_5] == ((void*)0))
     return VAR_0;
   }

   if (VAR_3[VAR_5]->idsubst != VAR_6->idsubst)
   {
    VAR_6 = VAR_3[VAR_5];
    VAR_5 = -1;
    continue;
   }
  }

  if (VAR_5 == VAR_4 && FUNC_0(VAR_1, VAR_6->idsubst) && (VAR_0 == ((void*)0) || !FUNC_0(VAR_0, VAR_6->idsubst)))
  {

   VAR_6->nextvariant = VAR_0;
   VAR_0 = VAR_6;
  }


  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   VAR_3[VAR_5] = VAR_3[VAR_5]->nextentry;
 }
}
