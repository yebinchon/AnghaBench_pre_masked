
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int internal; void* data; } ;
struct TYPE_10__ {TYPE_1__* dbg; int flags; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_8__ {int bp; } ;
typedef TYPE_2__ RFlagItem ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RBreakpointItem ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 TYPE_4__* FUNC_1 (int ,int ,int,int ) ;
 TYPE_2__* FUNC_2 (int ,char const*) ;
 void* FUNC_3 (char*,char const*,char const*) ;

__attribute__((used)) static bool FUNC_4(RCore *VAR_1, const char *VAR_2, const char *VAR_3) {
 RBreakpointItem *VAR_4;
 RFlagItem *VAR_5 = FUNC_2 (VAR_1->flags, VAR_3);
 if (!VAR_5) {
  return 0;
 }
 VAR_4 = FUNC_1 (VAR_1->dbg->bp, VAR_5->offset, 1, VAR_0);
 if (VAR_4) {
  VAR_4->internal = 1;

  VAR_4->data = FUNC_3 ("?e %s: %s", VAR_2, VAR_3);



  return 1;
 }
 FUNC_0 ("Cannot set breakpoint at %s\n", VAR_3);
 return 0;
}
