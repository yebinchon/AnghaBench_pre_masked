
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int csh ;
typedef int cs_insn ;
struct TYPE_5__ {int base; } ;
struct TYPE_7__ {int type; TYPE_1__ mem; int reg; } ;
struct TYPE_6__ {char* name; } ;
typedef TYPE_2__ RRegItem ;


 TYPE_4__ FUNC_0 (int) ;


 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(RRegItem *VAR_1, csh VAR_2, cs_insn *VAR_3, int VAR_4) {
 if (!VAR_1) {
  return -1;
 }
 switch (FUNC_0 (VAR_4).type) {
 case 128:
  VAR_1->name = (char *)FUNC_1 (VAR_2, FUNC_0 (VAR_4).reg);
  break;
 case 129:
  if (FUNC_0 (VAR_4).mem.base != VAR_0) {
   VAR_1->name = (char *)FUNC_1 (VAR_2, FUNC_0 (VAR_4).mem.base);
   break;
  }
 default:
  break;
 }
 return 0;
}
