
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r_bin_te_obj_t {TYPE_1__* header; } ;
struct TYPE_2__ {int Subsystem; } ;
 char* FUNC_0 (char*) ;

char* FUNC_1(struct r_bin_te_obj_t* VAR_0) {
 char *VAR_1;
 if (!VAR_0) {
  return ((void*)0);
 }

 switch (VAR_0->header->Subsystem) {
 case 133:
  VAR_1 = FUNC_0 ("native");
  break;
 case 129:
 case 130:
 case 131:
  VAR_1 = FUNC_0 ("windows");
  break;
 case 132:
  VAR_1 = FUNC_0 ("posix");
  break;
 case 137:
 case 136:
 case 134:
 case 135:
  VAR_1 = FUNC_0 ("efi");
  break;
 case 128:
  VAR_1 = FUNC_0 ("xbox");
  break;
 default:

  VAR_1 = FUNC_0 ("windows");
 }
 return VAR_1;
}
