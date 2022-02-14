
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int bits; } ;
struct TYPE_10__ {TYPE_2__* assembler; int config; int offset; int anal; } ;
struct TYPE_9__ {TYPE_1__* cur; } ;
struct TYPE_8__ {int bits; } ;
typedef TYPE_3__ RCore ;
typedef TYPE_4__ RAnalHint ;


 TYPE_4__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;

__attribute__((used)) static void FUNC_3(RCore *VAR_0) {
 RAnalHint *VAR_1 = FUNC_0 (VAR_0->anal, VAR_0->offset);

 int VAR_2 = VAR_1? VAR_1->bits : FUNC_1 (VAR_0->config, "asm.bits");
 int VAR_3 = 4;
 while (VAR_3 > 0) {
  int VAR_4 = VAR_2 == 64 ? 8:
   VAR_2 == 32 ? 64:
   VAR_2 == 16 ? 32:
   VAR_2 == 8 ? 16: VAR_2;
  if ((VAR_0->assembler->cur->bits & VAR_4) == VAR_4) {
   FUNC_2 (VAR_0, "ahb %d", VAR_4);
   break;
  }
  VAR_2 = VAR_4;
  VAR_3--;
 }
}
