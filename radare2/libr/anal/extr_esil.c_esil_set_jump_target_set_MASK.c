
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_5__ {int jump_target_set; } ;
typedef TYPE_1__ RAnalEsil ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,int *) ;
 char* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_5(RAnalEsil *VAR_0) {
 bool VAR_1 = 0;
 ut64 VAR_2;
 char *VAR_3 = FUNC_4 (VAR_0);
 if (VAR_3 && FUNC_3 (VAR_0, VAR_3, &VAR_2)) {
  VAR_0->jump_target_set = VAR_2;
  VAR_1 = 1;
 } else {
  FUNC_1 (VAR_3);
  FUNC_0 ("esil_set_jump_target_set: empty stack");
 }
 FUNC_2 (VAR_3);
 return VAR_1;
}
