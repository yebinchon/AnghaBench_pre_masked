
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rename_flag_t {char* pfx; int count; TYPE_1__* core; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int ,struct rename_flag_t*) ;
 char* FUNC_2 (char const*) ;
 int VAR_0 ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(RCore *VAR_1, const char *VAR_2) {
 const char *VAR_3 = FUNC_2 (VAR_2);
 char *VAR_4 = FUNC_4 (VAR_3);
 char *VAR_5 = FUNC_3 (VAR_4, '*');
 if (VAR_5) {
  *VAR_5 = 0;
 }

 struct rename_flag_t VAR_6 = { .core = VAR_1, .pfx = VAR_4, .count = 0 };
 FUNC_1 (VAR_1->flags, VAR_3, VAR_0, &VAR_6);
 FUNC_0 (VAR_4);
}
