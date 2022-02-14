
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ bitmapword ;
struct TYPE_4__ {scalar_t__* words; } ;
typedef TYPE_1__ Bitmapset ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

int
FUNC_4(Bitmapset *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 bitmapword VAR_6;


 if (!FUNC_2(VAR_1, VAR_0))
  return -1;

 VAR_4 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1);


 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
 {
  bitmapword VAR_7 = VAR_0->words[VAR_2];


  if (VAR_7 != 0)
   VAR_5 += FUNC_3(VAR_7);
 }







 VAR_6 = ((bitmapword) 1 << VAR_3) - 1;
 VAR_5 += FUNC_3(VAR_0->words[VAR_4] & VAR_6);

 return VAR_5;
}
