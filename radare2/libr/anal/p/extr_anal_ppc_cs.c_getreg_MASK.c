
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Getarg {int handle; int * insn; } ;
typedef int csh ;
struct TYPE_4__ {int base; } ;
struct TYPE_5__ {int type; TYPE_1__ mem; int reg; } ;
typedef TYPE_2__ cs_ppc_op ;
typedef int cs_insn ;


 TYPE_2__ FUNC_0 (int) ;





 char const* FUNC_1 (int ,int ) ;

__attribute__((used)) static const char *FUNC_2(struct Getarg *VAR_0, int VAR_1) {
 cs_insn *VAR_2 = VAR_0->insn;
 csh VAR_3 = VAR_0->handle;

 if (VAR_1 < 0 || VAR_1 >= 8) {
  return ((void*)0);
 }
 cs_ppc_op VAR_4 = FUNC_0 (VAR_1);
 switch (VAR_4.type) {
 case 128:
  return FUNC_1 (VAR_3, VAR_4.reg);
 case 129:
  return FUNC_1 (VAR_3, VAR_4.mem.base);
 case 130:
 case 131:
 case 132:
  return ((void*)0);
 }
 return ((void*)0);
}
