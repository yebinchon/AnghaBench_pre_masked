
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r_bin_te_obj_t {TYPE_1__* header; } ;
struct TYPE_2__ {int Machine; } ;
 char* FUNC_0 (char*) ;

char* FUNC_1(struct r_bin_te_obj_t* VAR_0) {
 char *VAR_1;
 if (!VAR_0) {
  return ((void*)0);
 }
 switch (VAR_0->header->Machine) {
 case 138:
 case 137:
  VAR_1 = FUNC_0 ("alpha");
  break;
 case 136:
 case 129:
  VAR_1 = FUNC_0 ("arm");
  break;
 case 135:
  VAR_1 = FUNC_0 ("m68k");
  break;
 case 134:
 case 133:
 case 132:
 case 128:
  VAR_1 = FUNC_0 ("mips");
  break;
 case 131:
 case 130:
  VAR_1 = FUNC_0 ("ppc");
  break;
 default:
  VAR_1 = FUNC_0 ("x86");
 }
 return VAR_1;
}
