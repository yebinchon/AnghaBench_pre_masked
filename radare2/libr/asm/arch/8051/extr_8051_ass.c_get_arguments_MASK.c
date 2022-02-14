
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int,char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5 (char**VAR_0, char const*VAR_1) {
 size_t VAR_2 = FUNC_4 (VAR_1) + 1;
 char*VAR_3 = FUNC_2 (VAR_2);
 if (!FUNC_1 (VAR_1, 1, VAR_3)) {
  FUNC_0 (VAR_3); VAR_3 = 0;
  return 0;
 } else {
  VAR_0[0] = FUNC_3 (VAR_3, FUNC_4 (VAR_3) + 1); VAR_3 = 0;
  VAR_3 = FUNC_2 (VAR_2);
  if (!FUNC_1 (VAR_1, 2, VAR_3)) {
   FUNC_0 (VAR_3); VAR_3 = 0;
   return 1;
  } else {
   VAR_0[1] = FUNC_3 (VAR_3, FUNC_4 (VAR_3) + 1); VAR_3 = 0;
   VAR_3 = FUNC_2 (VAR_2 + 1);
   if (!FUNC_1 (VAR_1, 3, VAR_3)) {
    FUNC_0 (VAR_3); VAR_3 = 0;
    return 2;
   } else {
    VAR_0[2] = FUNC_3 (VAR_3, FUNC_4 (VAR_3) + 1); VAR_3 = 0;
    VAR_3 = FUNC_2 (VAR_2 + 1);
    if (FUNC_1 (VAR_1, 4, VAR_3)) {
     FUNC_0 (VAR_3); VAR_3 = 0;
     FUNC_0 (VAR_0[0]); VAR_0[0] = 0;
     FUNC_0 (VAR_0[1]); VAR_0[1] = 0;
     FUNC_0 (VAR_0[2]); VAR_0[2] = 0;
     return 4;
    }
    FUNC_0 (VAR_3); VAR_3 = 0;
    return 3;
   }
  }
 }
}
