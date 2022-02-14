
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_6__ {int atoms; } ;
typedef TYPE_1__ EsilCfgGen ;


 int FUNC_0 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,char*) ;

void FUNC_5 (EsilCfgGen *VAR_0, char *VAR_1, ut32 VAR_2) {


 if (!FUNC_4 (VAR_1, "?{")) {
  FUNC_2 (VAR_0, VAR_2, !!FUNC_3 (VAR_0->atoms, VAR_2 + 1));
  return;
 }
 if (!FUNC_4 (VAR_1, "}")) {
  FUNC_1 (VAR_0, VAR_2, !!FUNC_3 (VAR_0->atoms, VAR_2 + 1));
  return;
 }
 if (!FUNC_4 (VAR_1, "}{")) {
  FUNC_0 (VAR_0, VAR_2, !!FUNC_3 (VAR_0->atoms, VAR_2 + 1));
 }
}
