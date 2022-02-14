
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*,void*,unsigned long) ;
 int FUNC_3 (char*,int ,unsigned long) ;
 unsigned long FUNC_4 (char*) ;
 struct page* FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 struct page *VAR_4;
 int VAR_5 = 0;

 while (VAR_3) {
  unsigned long VAR_6, VAR_7;

  VAR_6 = FUNC_4(VAR_2);
  VAR_7 = VAR_0 - VAR_6;
  if (VAR_7 > VAR_3)
   VAR_7 = VAR_3;
  VAR_4 = FUNC_5(VAR_2);







  if (VAR_4) {




   void *VAR_8 = FUNC_0(VAR_4);
   FUNC_2(VAR_1, VAR_8 + VAR_6, VAR_7);
   FUNC_1(VAR_8);
  } else
   FUNC_3(VAR_1, 0, VAR_7);

  VAR_2 += VAR_7;
  VAR_1 += VAR_7;
  VAR_5 += VAR_7;
  VAR_3 -= VAR_7;
 }
 return VAR_5;
}
