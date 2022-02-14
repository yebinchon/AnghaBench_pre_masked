
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bitmapword ;
struct TYPE_3__ {int nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

bool
FUNC_2(const Bitmapset *VAR_1, int *VAR_2)
{
 int VAR_3 = -1;
 int VAR_4;
 int VAR_5;

 if (VAR_1 == ((void*)0))
  return 0;
 VAR_4 = VAR_1->nwords;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  bitmapword VAR_6 = VAR_1->words[VAR_5];

  if (VAR_6 != 0)
  {
   if (VAR_3 >= 0 || FUNC_0(VAR_6))
    return 0;
   VAR_3 = VAR_5 * VAR_0;
   VAR_3 += FUNC_1(VAR_6);
  }
 }
 if (VAR_3 < 0)
  return 0;
 *VAR_2 = VAR_3;
 return 1;
}
