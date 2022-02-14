
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,size_t,char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, size_t VAR_1, char** VAR_2) {
 char *VAR_3;
 char *VAR_4 = VAR_0;
 int VAR_5;

 while ((VAR_3 = *VAR_2++)) {
  if (FUNC_0 (VAR_4, VAR_1, "%s", VAR_3) >= VAR_1) {
   break;
  }
  VAR_5 = FUNC_1 (VAR_3);
  VAR_4 += VAR_5;
  VAR_1 -= VAR_5;
 }
}
