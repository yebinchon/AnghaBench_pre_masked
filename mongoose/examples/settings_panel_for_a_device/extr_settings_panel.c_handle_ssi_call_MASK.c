
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_connection {int dummy; } ;
struct TYPE_2__ {char const* setting3; int setting2; int setting1; } ;


 int FUNC_0 (struct mg_connection*,char*) ;
 int FUNC_1 (struct mg_connection*,char*,int ) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, const char *VAR_2) {
  if (FUNC_2(VAR_2, "setting1") == 0) {
    FUNC_1(VAR_1, "%s", VAR_0.setting1);
  } else if (FUNC_2(VAR_2, "setting2") == 0) {
    FUNC_1(VAR_1, "%s", VAR_0.setting2);
  } else if (FUNC_2(VAR_2, "setting3_is_one") == 0) {
    if (FUNC_2(VAR_0.setting3, "one") == 0) FUNC_0(VAR_1, "checked");
  } else if (FUNC_2(VAR_2, "setting3_is_two") == 0) {
    if (FUNC_2(VAR_0.setting3, "two") == 0) FUNC_0(VAR_1, "checked");
  }
}
