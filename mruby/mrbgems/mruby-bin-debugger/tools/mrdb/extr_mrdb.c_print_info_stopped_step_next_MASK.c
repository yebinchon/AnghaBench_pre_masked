
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* dbg; } ;
typedef TYPE_2__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_4__ {char* prvfile; int prvline; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_0, mrdb_state *VAR_1)
{
  const char* VAR_2 = VAR_1->dbg->prvfile;
  uint16_t VAR_3 = VAR_1->dbg->prvline;
  FUNC_0("%s:%d\n", VAR_2, VAR_3);
}
