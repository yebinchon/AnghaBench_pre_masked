
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct memory_bitmap*,unsigned long) ;
 int FUNC_1 (struct memory_bitmap*,unsigned long) ;
 int FUNC_2 (unsigned long*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned long *VAR_3, struct memory_bitmap *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2 / sizeof(long); VAR_5++) {
  if (FUNC_4(VAR_3[VAR_5] == VAR_0))
   break;


  FUNC_2(VAR_3 + VAR_5);

  if (FUNC_3(VAR_3[VAR_5]) && FUNC_0(VAR_4, VAR_3[VAR_5]))
   FUNC_1(VAR_4, VAR_3[VAR_5]);
  else
   return -VAR_1;
 }

 return 0;
}
