
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int blocksize; scalar_t__ cmd_in_backticks; TYPE_1__* cons; int block; int offset; int print; } ;
struct TYPE_5__ {int newline; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0, int VAR_1, int VAR_2) {
 int VAR_3 = VAR_0->blocksize;
 int VAR_4 = 0;
 if (VAR_1 != VAR_3) {
  if (!FUNC_0 (VAR_0, VAR_1)) {
   VAR_1 = VAR_0->blocksize;
  } else {
   VAR_4 = 1;
  }
 }
 FUNC_1 (VAR_0->print, VAR_0->offset, VAR_0->block, VAR_1, VAR_2);
 if (VAR_4) {
  (void) FUNC_0 (VAR_0, VAR_3);
 }
 VAR_0->cons->newline = VAR_0->cmd_in_backticks ? 0 : 1;
}
