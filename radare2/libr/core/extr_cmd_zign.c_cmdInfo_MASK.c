
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (int ,char const,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const char *VAR_2) {
 if (!VAR_1 || !VAR_2) {
  return 0;
 }
 RCore *VAR_3 = (RCore *) VAR_1;
 FUNC_2 (VAR_3->flags, VAR_0);
 FUNC_0 (VAR_3->flags, *VAR_2, VAR_2[0] ? VAR_2 + 1: "");
 FUNC_1 (VAR_3->flags);
 return 1;
}
