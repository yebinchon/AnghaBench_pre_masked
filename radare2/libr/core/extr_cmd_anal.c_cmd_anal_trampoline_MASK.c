
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int num; int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_0, const char *VAR_1) {
 int VAR_2 = FUNC_2 (VAR_0->config, "asm.bits");
 char *VAR_3, *VAR_4 = FUNC_5 (VAR_1);
 VAR_3 = FUNC_4 (VAR_4, ' ');
 if (VAR_3) {
  *VAR_3 = 0;
 }
 ut64 VAR_5 = FUNC_3 (VAR_0->num, VAR_4);
 ut64 VAR_6 = VAR_3? FUNC_3 (VAR_0->num, VAR_3 + 1): 0;
 FUNC_0 (VAR_4);

 switch (VAR_2) {
 case 32:
  FUNC_1 (VAR_0, VAR_5, VAR_6, 4);
  break;
 case 64:
  FUNC_1 (VAR_0, VAR_5, VAR_6, 8);
  break;
 }
}
