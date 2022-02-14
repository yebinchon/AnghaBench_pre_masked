
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int type; scalar_t__ size; } ;
typedef int RAnalReilArgType ;
typedef TYPE_1__ RAnalReilArg ;
typedef int RAnalEsil ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,char*) ;

void FUNC_2(RAnalEsil *VAR_0, RAnalReilArg *VAR_1, char *VAR_2) {
 if (!VAR_1) {
  return;
 }
 RAnalReilArgType VAR_3 = FUNC_1 (VAR_0, VAR_2);
 VAR_1->size = 0;
 VAR_1->type = VAR_3;
 FUNC_0 (VAR_1->name, VAR_2, sizeof (VAR_1->name) - 1);
}
