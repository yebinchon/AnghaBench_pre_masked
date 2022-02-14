
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_3__ {unsigned char lc; int DictionarySize; scalar_t__ lp; scalar_t__ pb; } ;
typedef TYPE_1__ CLzmaProperties ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(CLzmaProperties *VAR_3, const unsigned char *VAR_4, int VAR_5)
{
  unsigned char VAR_6;
  if (VAR_5 < VAR_0)
    return VAR_1;
  VAR_6 = VAR_4[0];
  if (VAR_6 >= (9 * 5 * 5))
    return VAR_1;
  {
    for (VAR_3->pb = 0; VAR_6 >= (9 * 5); VAR_3->pb++, VAR_6 -= (9 * 5));
    for (VAR_3->lp = 0; VAR_6 >= 9; VAR_3->lp++, VAR_6 -= 9);
    VAR_3->lc = VAR_6;






  }
  return VAR_2;
}
