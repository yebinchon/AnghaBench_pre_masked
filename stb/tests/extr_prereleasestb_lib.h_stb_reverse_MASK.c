
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,size_t) ;

void FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2)
{
   int VAR_3,VAR_4 = VAR_1-1;
   for (VAR_3=0; VAR_3 < VAR_4; ++VAR_3,--VAR_4) {
      FUNC_0((char *) VAR_0 + VAR_3 * VAR_2, (char *) VAR_0 + VAR_4 * VAR_2, VAR_2);
   }
}
