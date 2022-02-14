
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_3__ {int anal; int num; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,int ) ;
 char* FUNC_3 (char const*,int ) ;

__attribute__((used)) static bool FUNC_4(RCore *VAR_1, const char *VAR_2, const char *VAR_3, int VAR_4) {
 const char *VAR_5 = ((void*)0);
 ut64 VAR_6 = VAR_0;

 if (VAR_4 != 1) {
  FUNC_0 ("error: invalid syntax\n");
  return 0;
 }

 VAR_5 = FUNC_3 (VAR_3, 0);
 VAR_6 = FUNC_1 (VAR_1->num, VAR_5);

 return FUNC_2 (VAR_1->anal, VAR_2, VAR_6);
}
