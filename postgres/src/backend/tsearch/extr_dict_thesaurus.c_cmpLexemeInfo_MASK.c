
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ idsubst; scalar_t__ posinsubst; scalar_t__ tnvariant; } ;
typedef TYPE_1__ LexemeInfo ;



__attribute__((used)) static int
FUNC_0(LexemeInfo *VAR_0, LexemeInfo *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 if (VAR_0->idsubst == VAR_1->idsubst)
 {
  if (VAR_0->posinsubst == VAR_1->posinsubst)
  {
   if (VAR_0->tnvariant == VAR_1->tnvariant)
    return 0;

   return (VAR_0->tnvariant > VAR_1->tnvariant) ? 1 : -1;
  }

  return (VAR_0->posinsubst > VAR_1->posinsubst) ? 1 : -1;
 }

 return (VAR_0->idsubst > VAR_1->idsubst) ? 1 : -1;
}
