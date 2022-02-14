
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_6(struct page **VAR_3, size_t VAR_4,
  size_t VAR_5, size_t VAR_6)
{
 struct page **VAR_7, **VAR_8;
 char *VAR_9, *VAR_10;
 size_t VAR_11;

 FUNC_0(VAR_4 <= VAR_5);

 VAR_4 += VAR_6;
 VAR_5 += VAR_6;

 VAR_8 = VAR_3 + (VAR_4 >> VAR_1);
 VAR_7 = VAR_3 + (VAR_5 >> VAR_1);

 VAR_4 &= ~VAR_0;
 VAR_5 &= ~VAR_0;

 do {

  if (VAR_4 == 0) {
   VAR_4 = VAR_2;
   VAR_8--;
  }
  if (VAR_5 == 0) {
   VAR_5 = VAR_2;
   VAR_7--;
  }

  VAR_11 = VAR_6;
  if (VAR_11 > VAR_4)
   VAR_11 = VAR_4;
  if (VAR_11 > VAR_5)
   VAR_11 = VAR_5;
  VAR_4 -= VAR_11;
  VAR_5 -= VAR_11;

  VAR_10 = FUNC_2(*VAR_8);
  if (*VAR_8 != *VAR_7) {
   VAR_9 = FUNC_2(*VAR_7);
   FUNC_4(VAR_10 + VAR_4, VAR_9 + VAR_5, VAR_11);
   FUNC_3(VAR_9);
  } else
   FUNC_5(VAR_10 + VAR_4, VAR_10 + VAR_5, VAR_11);
  FUNC_1(*VAR_8);
  FUNC_3(VAR_10);

 } while ((VAR_6 -= VAR_11) != 0);
}
