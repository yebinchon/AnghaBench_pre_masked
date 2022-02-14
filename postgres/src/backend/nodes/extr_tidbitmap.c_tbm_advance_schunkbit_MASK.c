
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bitmapword ;
struct TYPE_3__ {int* words; } ;
typedef TYPE_1__ PagetableEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(PagetableEntry *VAR_1, int *VAR_2)
{
 int VAR_3 = *VAR_2;

 while (VAR_3 < VAR_0)
 {
  int VAR_4 = FUNC_1(VAR_3);
  int VAR_5 = FUNC_0(VAR_3);

  if ((VAR_1->words[VAR_4] & ((bitmapword) 1 << VAR_5)) != 0)
   break;
  VAR_3++;
 }

 *VAR_2 = VAR_3;
}
