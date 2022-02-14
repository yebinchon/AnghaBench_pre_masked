
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_4__ {int anal; } ;
struct TYPE_5__ {TYPE_1__ analb; } ;
typedef TYPE_2__ RParse ;
typedef int RAnalFunction ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_5(RParse *VAR_0, RAnalFunction *VAR_1, ut64 VAR_2, int VAR_3, char *VAR_4, char *VAR_5, int VAR_6) {
 char *VAR_7 = ((void*)0);
 VAR_5[0] = 0;
 if (!FUNC_4 (VAR_4, "call ", 5)) {
  ut32 VAR_8 = (ut32) FUNC_2 (((void*)0), VAR_4 + 5);
  if (!(VAR_7 = FUNC_1 (VAR_0->analb.anal, VAR_8))) {
   return 0;
  }
  FUNC_3 (VAR_5, VAR_6, "call sym.%s", VAR_7);
  FUNC_0 (VAR_7);
  return 1;
 }
 return 0;
}
