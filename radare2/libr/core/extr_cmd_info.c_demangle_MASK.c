
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (TYPE_1__*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static bool FUNC_6(RCore *VAR_0, const char *VAR_1) {
 FUNC_3 (VAR_0 && VAR_1, 0);
 const char *VAR_2 = FUNC_4 (VAR_1, ' ');
 if (!*VAR_1) {
  return 0;
 }
 if (!VAR_2) {
  const char *VAR_3 = FUNC_2 (VAR_0->config, "bin.lang");
  FUNC_0 (VAR_0, VAR_3, VAR_1);
  return 1;
 }
 char *VAR_4 = FUNC_5 (VAR_1);
 char *VAR_5 = VAR_4 + (VAR_2 - VAR_1);
 *VAR_5 = 0;
 FUNC_0 (VAR_0, VAR_4, VAR_5 + 1);
 FUNC_1 (VAR_4);
 return 1;
}
