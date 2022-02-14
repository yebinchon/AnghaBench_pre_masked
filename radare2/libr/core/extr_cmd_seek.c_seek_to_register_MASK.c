
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_10__ {int * reg; } ;
struct TYPE_9__ {scalar_t__ debug; } ;
struct TYPE_8__ {int print; int offset; TYPE_4__* io; TYPE_5__* dbg; TYPE_1__* anal; } ;
struct TYPE_7__ {int * reg; } ;
typedef int RReg ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_5__*,char const*) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0, const char *VAR_1, bool VAR_2) {
 ut64 VAR_3;
 if (VAR_0->io->debug) {
  VAR_3 = FUNC_1 (VAR_0->dbg, VAR_1);
  if (!VAR_2) {
   FUNC_2 (VAR_0->io, VAR_0->offset, FUNC_3 (VAR_0->print));
  }
  FUNC_0 (VAR_0, VAR_3, 1);
 } else {
  RReg *VAR_4 = VAR_0->dbg->reg;
  VAR_0->dbg->reg = VAR_0->anal->reg;
  VAR_3 = FUNC_1 (VAR_0->dbg, VAR_1);
  VAR_0->dbg->reg = VAR_4;
  if (!VAR_2) {
   FUNC_2 (VAR_0->io, VAR_0->offset, FUNC_3 (VAR_0->print));
  }
  FUNC_0 (VAR_0, VAR_3, 1);
 }
}
