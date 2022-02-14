
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ bitmapword ;
struct TYPE_3__ {int nwords; scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int
FUNC_1(const Bitmapset *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;
 VAR_2 = VAR_0->nwords;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  bitmapword VAR_4 = VAR_0->words[VAR_3];


  if (VAR_4 != 0)
   VAR_1 += FUNC_0(VAR_4);
 }
 return VAR_1;
}
