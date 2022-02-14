
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int anal; } ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ RSignGraph ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int,TYPE_1__*) ;
 int FUNC_2 (int ,char const*,TYPE_1__) ;

__attribute__((used)) static bool FUNC_3(RCore *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3) {
 RSignGraph VAR_4 = {0};
 if (!FUNC_1 (VAR_2, VAR_3, &VAR_4)) {
  FUNC_0 ("error: invalid arguments\n");
  return 0;
 }
 return FUNC_2 (VAR_0->anal, VAR_1, VAR_4);
}
