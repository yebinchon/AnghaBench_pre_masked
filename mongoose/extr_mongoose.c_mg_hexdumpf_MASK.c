
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int FILE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char const*,int,char*,int,int) ;

void FUNC_2(FILE *VAR_0, const void *VAR_1, int VAR_2) {
  char VAR_3[80];
  int VAR_4 = 0, VAR_5;
  while (VAR_2 > 0) {
    VAR_5 = (VAR_2 < 16 ? VAR_2 : 16);
    FUNC_1(((const char *) VAR_1) + VAR_4, VAR_5, VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_0(VAR_3, VAR_0);
    VAR_4 += VAR_5;
    VAR_2 -= VAR_5;
  }
}
