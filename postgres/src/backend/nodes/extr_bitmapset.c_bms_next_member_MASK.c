
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_3__ {int nwords; int* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(const Bitmapset *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 bitmapword VAR_5;

 if (VAR_1 == ((void*)0))
  return -2;
 VAR_3 = VAR_1->nwords;
 VAR_2++;
 VAR_5 = (~(bitmapword) 0) << FUNC_0(VAR_2);
 for (VAR_4 = FUNC_1(VAR_2); VAR_4 < VAR_3; VAR_4++)
 {
  bitmapword VAR_6 = VAR_1->words[VAR_4];


  VAR_6 &= VAR_5;

  if (VAR_6 != 0)
  {
   int VAR_7;

   VAR_7 = VAR_4 * VAR_0;
   VAR_7 += FUNC_2(VAR_6);
   return VAR_7;
  }


  VAR_5 = (~(bitmapword) 0);
 }
 return -2;
}
