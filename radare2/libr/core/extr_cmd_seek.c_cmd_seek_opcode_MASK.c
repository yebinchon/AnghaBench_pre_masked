
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int value; } ;
struct TYPE_6__ {TYPE_2__* num; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_0, const char *VAR_1) {
 if (VAR_1[0] == '?') {
  FUNC_2 ("Usage: so [-][n]\n");
  return;
 }
 if (!FUNC_4 (VAR_1, "-")) {
  VAR_1 = "-1";
 }
 int VAR_2 = FUNC_3 (VAR_0->num, VAR_1);
 if (VAR_2 == 0) {
  VAR_2 = 1;
 }
 int VAR_3 = (VAR_2 < 0)
  ? FUNC_0 (VAR_0, -VAR_2)
  : FUNC_1 (VAR_0, VAR_2);
 VAR_0->num->value = VAR_3;
}
