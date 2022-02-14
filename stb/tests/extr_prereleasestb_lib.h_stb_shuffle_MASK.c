
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,char*,size_t) ;

void FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2, unsigned long VAR_3)
{
   char *VAR_4;
   unsigned long VAR_5;
   int VAR_6;
   if (VAR_3)
      VAR_5 = FUNC_1(VAR_3);
   VAR_4 = (char *) VAR_0 + (VAR_1-1) * VAR_2;

   for (VAR_6=VAR_1; VAR_6 > 1; --VAR_6) {
      int VAR_7 = FUNC_0() % VAR_6;
      FUNC_2(VAR_4, (char *) VAR_0 + VAR_7 * VAR_2, VAR_2);
      VAR_4 -= VAR_2;
   }
   if (VAR_3)
      FUNC_1(VAR_5);
}
