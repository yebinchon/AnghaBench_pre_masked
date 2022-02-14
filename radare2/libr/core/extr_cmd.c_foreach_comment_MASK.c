
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* user; TYPE_1__* anal; } ;
struct TYPE_3__ {int * user; } ;
typedef int RCore ;
typedef TYPE_2__ RAnalMetaUserItem ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 RAnalMetaUserItem *VAR_3 = VAR_0;
 RCore *VAR_4 = VAR_3->anal->user;
 const char *VAR_5 = VAR_3->user;
 if (!FUNC_4 (VAR_1, "meta.C.", 7)) {
  char *VAR_6 = (char *)FUNC_3 (VAR_2, 0);
  if (VAR_6) {
   FUNC_2 (VAR_4, "s %s", VAR_1 + 7);
   FUNC_1 (VAR_4, VAR_5);
   FUNC_0 (VAR_6);
  }
 }
 return 1;
}
