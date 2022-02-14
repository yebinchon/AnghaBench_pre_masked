
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iconv_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ,char**,size_t*,char**,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 size_t FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int,char*,size_t) ;

int FUNC_5(void) {
  size_t VAR_4;
  iconv_t VAR_5;
  char *VAR_6="UTF-8";
  char *VAR_7="cp1250";
  if ((VAR_5 = FUNC_2(VAR_6, VAR_7)) != (iconv_t)(-1)) {
    while ((VAR_4 = FUNC_3(0, VAR_2, VAR_0))) {
      char *VAR_8=VAR_2;
      char *VAR_9=VAR_3;
      size_t VAR_10=VAR_4;
      size_t VAR_11=VAR_1;
      if (FUNC_0(VAR_5, &VAR_8, &VAR_10, &VAR_9, &VAR_11)
          != (size_t)(-1)) {
        FUNC_4(1, VAR_3, VAR_1 - VAR_11);
      }
    }
    if (FUNC_1(VAR_5) == -1)
      ;
  }
  return 0;
}
