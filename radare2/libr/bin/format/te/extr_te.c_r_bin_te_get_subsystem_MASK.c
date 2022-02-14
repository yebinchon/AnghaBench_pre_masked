
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
  VAR_1 = FUNC_0 ("Native");
  break;
 case 129:
  VAR_1 = FUNC_0 ("Windows GUI");
  break;
 case 130:
  VAR_1 = FUNC_0 ("Windows CUI");
  break;
 case 132:
  VAR_1 = FUNC_0 ("POSIX CUI");
  break;
 case 131:
  VAR_1 = FUNC_0 ("Windows CE GUI");
  break;
 case 137:
  VAR_1 = FUNC_0 ("EFI Application");
  break;
 case 136:
  VAR_1 = FUNC_0 ("EFI Boot Service Driver");
  break;
 case 134:
  VAR_1 = FUNC_0 ("EFI Runtime Driver");
  break;
 case 135:
  VAR_1 = FUNC_0 ("EFI ROM");
  break;
 case 128:
  VAR_1 = FUNC_0 ("XBOX");
  break;
 default:
  VAR_1 = FUNC_0 ("Unknown");
 }
 return VAR_1;
}
