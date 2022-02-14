
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int csh ;
struct TYPE_7__ {int index; int base; } ;
struct TYPE_8__ {int type; TYPE_1__ mem; int reg; } ;
typedef TYPE_2__ cs_x86_op ;
typedef int cs_insn ;
struct TYPE_9__ {char* name; } ;
typedef TYPE_3__ RRegItem ;


 TYPE_2__ FUNC_0 (int) ;


 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(RRegItem *VAR_0, RRegItem *VAR_1, csh *VAR_2, cs_insn *VAR_3, int VAR_4) {
 cs_x86_op VAR_5 = FUNC_0 (VAR_4);
 switch (VAR_5.type) {
 case 128:
  VAR_0->name = (char *)FUNC_1 (*VAR_2, VAR_5.reg);
  break;
 case 129:
  if (FUNC_2 (VAR_5.mem.base) && FUNC_2 (VAR_5.mem.index)) {
   VAR_0->name = (char *)FUNC_1 (*VAR_2, VAR_5.mem.base);
   VAR_1->name = (char *)FUNC_1 (*VAR_2, VAR_5.mem.index);
  } else if (FUNC_2 (VAR_5.mem.base)) {
   VAR_0->name = (char *)FUNC_1 (*VAR_2, VAR_5.mem.base);
  } else if (FUNC_2 (VAR_5.mem.index)) {
   VAR_0->name = (char *)FUNC_1 (*VAR_2, VAR_5.mem.index);
  }
  break;
 default:
  break;
 }
 return 0;
}
