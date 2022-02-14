
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_0 (struct page*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;

void
FUNC_3(char *VAR_3, struct page **VAR_4, size_t VAR_5, size_t VAR_6)
{
 struct page **VAR_7;
 char *VAR_8;
 size_t VAR_9;

 VAR_7 = VAR_4 + (VAR_5 >> VAR_1);
 VAR_5 &= ~VAR_0;

 do {
  VAR_9 = VAR_2 - VAR_5;
  if (VAR_9 > VAR_6)
   VAR_9 = VAR_6;

  VAR_8 = FUNC_0(*VAR_7);
  FUNC_2(VAR_3, VAR_8 + VAR_5, VAR_9);
  FUNC_1(VAR_8);

  VAR_5 += VAR_9;
  if (VAR_5 == VAR_2) {
   VAR_5 = 0;
   VAR_7++;
  }
  VAR_3 += VAR_9;

 } while ((VAR_6 -= VAR_9) != 0);
}
