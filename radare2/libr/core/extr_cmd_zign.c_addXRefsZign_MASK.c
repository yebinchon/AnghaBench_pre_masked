
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int anal; } ;
typedef int RListFree ;
typedef int RList ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int) ;

__attribute__((used)) static bool FUNC_7(RCore *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4) {
 int VAR_5 = 0;
 if (VAR_4 < 1) {
  FUNC_0 ("error: invalid syntax\n");
  return 0;
 }

 RList *VAR_6 = FUNC_3 ((RListFree) VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_1 (VAR_6, FUNC_5 (FUNC_6 (VAR_3, VAR_5)));
 }

 bool VAR_7 = FUNC_4 (VAR_1->anal, VAR_2, VAR_6);
 FUNC_2 (VAR_6);
 return VAR_7;
}
