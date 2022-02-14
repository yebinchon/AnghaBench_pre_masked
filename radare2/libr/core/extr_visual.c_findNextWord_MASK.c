
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int blocksize; int* block; int offset; TYPE_1__* print; } ;
struct TYPE_6__ {int cur; int ocur; scalar_t__ cur_enabled; } ;
typedef TYPE_2__ RCore ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0) {
 int VAR_1, VAR_2 = VAR_0->print->cur_enabled? VAR_0->print->cur: 0;
 for (VAR_1 = VAR_2 + 1; VAR_1 < VAR_0->blocksize; VAR_1++) {
  switch (VAR_0->block[VAR_1]) {
  case ' ':
  case '.':
  case '\t':
  case '\n':
   if (VAR_0->print->cur_enabled) {
    VAR_0->print->cur = VAR_1 + 1;
    VAR_0->print->ocur = -1;
    FUNC_1 (VAR_0, 1);
   } else {
    FUNC_0 (VAR_0, VAR_0->offset + VAR_1 + 1, 1);
   }
   return;
  }
 }
}
