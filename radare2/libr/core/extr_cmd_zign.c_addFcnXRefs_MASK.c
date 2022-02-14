
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int anal; } ;
typedef int RList ;
typedef TYPE_1__ RCore ;
typedef int RAnalFunction ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(RCore *VAR_0, RAnalFunction *VAR_1, const char *VAR_2) {
 bool VAR_3 = 0;
 RList *VAR_4 = FUNC_2 (VAR_0->anal, VAR_1);
 if (VAR_4) {
  VAR_3 = FUNC_1 (VAR_0->anal, VAR_2, VAR_4);
  FUNC_0 (VAR_4);
 }
 return VAR_3;
}
