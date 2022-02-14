
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int symtab_type; int kernel; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct dso *VAR_3, bool VAR_4,
        enum dso_binary_type VAR_5)
{
 switch (VAR_5) {
 case 137:
 case 144:
 case 132:
 case 143:
 case 129:
 case 147:
 case 133:
  return !VAR_4 && VAR_3->kernel == VAR_2;

 case 136:
 case 128:
 case 135:
  return VAR_3->kernel == VAR_1;

 case 142:
 case 138:
 case 141:
  return VAR_3->kernel == VAR_0;

 case 140:
 case 139:
 case 131:
 case 130:




  return VAR_4 && VAR_3->symtab_type == VAR_5;

 case 146:
 case 145:
  return 1;

 case 148:
 case 134:
 default:
  return 0;
 }
}
