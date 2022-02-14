
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_6__ {int* words; } ;
struct TYPE_5__ {scalar_t__* offsets; } ;
typedef TYPE_1__ TBMIterateResult ;
typedef TYPE_2__ PagetableEntry ;
typedef scalar_t__ OffsetNumber ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int
FUNC_0(PagetableEntry *VAR_2, TBMIterateResult *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
 {
  bitmapword VAR_6 = VAR_2->words[VAR_4];

  if (VAR_6 != 0)
  {
   int VAR_7 = VAR_4 * VAR_0 + 1;

   while (VAR_6 != 0)
   {
    if (VAR_6 & 1)
     VAR_3->offsets[VAR_5++] = (OffsetNumber) VAR_7;
    VAR_7++;
    VAR_6 >>= 1;
   }
  }
 }

 return VAR_5;
}
