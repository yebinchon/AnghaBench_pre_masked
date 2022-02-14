
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bitmapword ;
struct TYPE_3__ {int nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;



bool
FUNC_0(const Bitmapset *VAR_0)
{
 int VAR_1;
 int VAR_2;

 if (VAR_0 == ((void*)0))
  return 1;
 VAR_1 = VAR_0->nwords;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  bitmapword VAR_3 = VAR_0->words[VAR_2];

  if (VAR_3 != 0)
   return 0;
 }
 return 1;
}
