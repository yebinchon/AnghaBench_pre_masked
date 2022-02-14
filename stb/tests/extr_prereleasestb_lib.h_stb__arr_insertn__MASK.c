
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (void**,int,int) ;
 int FUNC_2 (void*) ;

void FUNC_3(void **VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
   void *VAR_4 = *VAR_0;
   if (VAR_3) {
      int VAR_5;

      if (VAR_4 == ((void*)0)) {
         FUNC_1(VAR_0, VAR_1, VAR_3);
         return;
      }

      VAR_5 = FUNC_2(VAR_4);
      FUNC_1(&VAR_4, VAR_1, VAR_3);
      FUNC_0((char *) VAR_4 + (VAR_2+VAR_3)*VAR_1, (char *) VAR_4 + VAR_2*VAR_1, VAR_1 * (VAR_5-VAR_2));
   }
   *VAR_0 = VAR_4;
}
