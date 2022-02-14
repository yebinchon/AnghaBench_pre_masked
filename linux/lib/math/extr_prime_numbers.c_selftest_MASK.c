
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,unsigned long,...) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3;

 if (!VAR_1)
  return 0;

 for (VAR_3 = 0, VAR_2 = 2; VAR_2 < VAR_1; VAR_2++) {
  bool VAR_4 = FUNC_5(VAR_2);
  bool VAR_5 = FUNC_1(VAR_2);

  if (VAR_4 != VAR_5) {
   FUNC_3("inconsistent result for is-prime(%lu): slow=%s, fast=%s!",
          VAR_2, VAR_4 ? "yes" : "no", VAR_5 ? "yes" : "no");
   goto err;
  }

  if (!VAR_4)
   continue;

  if (FUNC_2(VAR_3) != VAR_2) {
   FUNC_3("incorrect result for next-prime(%lu): expected %lu, got %lu",
          VAR_3, VAR_2, FUNC_2(VAR_3));
   goto err;
  }
  VAR_3 = VAR_2;
 }

 FUNC_4("selftest(%lu) passed, last prime was %lu", VAR_2, VAR_3);
 return 0;

err:
 FUNC_0();
 return -VAR_0;
}
