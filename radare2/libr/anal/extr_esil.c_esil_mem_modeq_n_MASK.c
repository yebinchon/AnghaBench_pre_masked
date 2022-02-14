
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_9__ {scalar_t__ trap_code; int trap; } ;
typedef TYPE_1__ RAnalEsil ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char*,int*) ;
 char* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static bool FUNC_8(RAnalEsil *VAR_1, int VAR_2) {
 bool VAR_3 = 0;
 ut64 VAR_4, VAR_5;
 char *VAR_6 = FUNC_5 (VAR_1);
 char *VAR_7 = FUNC_5 (VAR_1);
 char *VAR_8 = ((void*)0);
 if (VAR_7 && FUNC_4 (VAR_1, VAR_7, &VAR_4)) {
  if (VAR_4 == 0) {
   FUNC_0 ("esil_mem_modeq4: Division by zero!");
   VAR_1->trap = VAR_0;
   VAR_1->trap_code = 0;
  } else {
   FUNC_6 (VAR_1, VAR_6);
   VAR_3 = (!!FUNC_1 (VAR_1, VAR_2));
   VAR_8 = FUNC_5 (VAR_1);
   if (VAR_8 && FUNC_4 (VAR_1, VAR_8, &VAR_5) && VAR_4 >= 1) {
    FUNC_7 (VAR_1, VAR_5 % VAR_4);
    VAR_5 = VAR_5 % VAR_4;
    FUNC_7 (VAR_1, VAR_5);
    FUNC_6 (VAR_1, VAR_6);
    VAR_3 &= (!!FUNC_2 (VAR_1, VAR_2));
   } else {
    VAR_3 = 0;
   }
  }
 }
 if (!VAR_3) {
  FUNC_0 ("esil_mem_modeq_n: invalid parameters");
 }
 FUNC_3 (VAR_6);
 FUNC_3 (VAR_7);
 FUNC_3 (VAR_8);
 return VAR_3;
}
