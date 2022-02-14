
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cur; } ;
struct TYPE_5__ {int (* disassemble ) (TYPE_2__*,int *,int *,int) ;} ;
typedef int RStrBuf ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*,int *,int *,int) ;

__attribute__((used)) static char *FUNC_7(RAsm *VAR_1, int VAR_2, bool VAR_3) {
 int VAR_4;
 VAR_1->cur->disassemble (VAR_1, ((void*)0), ((void*)0), -1);
 if (VAR_2 != -1) {
  const char *VAR_5 = FUNC_0 (VAR_0, VAR_2);
  if (VAR_3) {
   return VAR_5? FUNC_1 ("[\"%s\"]\n", VAR_5): ((void*)0);
  }
  return VAR_5? FUNC_5 (VAR_5): ((void*)0);
 }
 RStrBuf *VAR_6 = FUNC_4 ("");
 if (VAR_3) {
  FUNC_2 (VAR_6, "[");
 }
 for (VAR_4 = 1; ; VAR_4++) {
  const char *VAR_7 = FUNC_0 (VAR_0, VAR_4);
  if (!VAR_7) {
   break;
  }
  if (VAR_3) {
   FUNC_2 (VAR_6, "\"");
  }
  FUNC_2 (VAR_6, VAR_7);
  if (VAR_3) {
   if (FUNC_0 (VAR_0, VAR_4 + 1)) {
    FUNC_2 (VAR_6, "\",");
   } else {
    FUNC_2 (VAR_6, "\"]\n");
   }
  } else {
   FUNC_2 (VAR_6, "\n");
  }
 }
 return FUNC_3 (VAR_6);
}
