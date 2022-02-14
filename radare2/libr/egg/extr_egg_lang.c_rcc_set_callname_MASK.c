
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pushargs; int callname; scalar_t__ nargs; } ;
struct TYPE_5__ {TYPE_1__ lang; } ;
typedef TYPE_2__ REgg ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(REgg *VAR_0, const char *VAR_1) {
 FUNC_0 (VAR_0->lang.callname);
 VAR_0->lang.nargs = 0;
 VAR_0->lang.callname = FUNC_4 (FUNC_3 (FUNC_1 (VAR_1)));
 VAR_0->lang.pushargs = !((!FUNC_2 (VAR_1, "goto")) || (!FUNC_2 (VAR_1, "break")));
}
