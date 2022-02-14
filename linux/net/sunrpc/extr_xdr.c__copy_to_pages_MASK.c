
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct page*) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct page **VAR_3, size_t VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct page **VAR_7;
 char *VAR_8;
 size_t VAR_9;

 VAR_7 = VAR_3 + (VAR_4 >> VAR_1);
 VAR_4 &= ~VAR_0;

 for (;;) {
  VAR_9 = VAR_2 - VAR_4;
  if (VAR_9 > VAR_6)
   VAR_9 = VAR_6;

  VAR_8 = FUNC_1(*VAR_7);
  FUNC_3(VAR_8 + VAR_4, VAR_5, VAR_9);
  FUNC_2(VAR_8);

  VAR_6 -= VAR_9;
  if (VAR_6 == 0)
   break;

  VAR_4 += VAR_9;
  if (VAR_4 == VAR_2) {
   FUNC_0(*VAR_7);
   VAR_4 = 0;
   VAR_7++;
  }
  VAR_5 += VAR_9;
 }
 FUNC_0(*VAR_7);
}
