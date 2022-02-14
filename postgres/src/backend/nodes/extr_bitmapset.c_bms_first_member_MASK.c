
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_3__ {int nwords; int * words; } ;
typedef TYPE_1__ Bitmapset ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(Bitmapset *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return -1;
 VAR_2 = VAR_1->nwords;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  bitmapword VAR_4 = VAR_1->words[VAR_3];

  if (VAR_4 != 0)
  {
   int VAR_5;

   VAR_4 = FUNC_0(VAR_4);
   VAR_1->words[VAR_3] &= ~VAR_4;

   VAR_5 = VAR_3 * VAR_0;
   VAR_5 += FUNC_1(VAR_4);
   return VAR_5;
  }
 }
 return -1;
}
