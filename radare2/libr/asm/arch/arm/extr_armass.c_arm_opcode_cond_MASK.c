
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* op; int o; } ;
typedef TYPE_1__ ArmOpcode ;


 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static inline int FUNC_1(ArmOpcode *VAR_0, int VAR_1) {
 const char *VAR_2[] = {
  "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
  "hi", "ls", "ge", "lt", "gt", "le", "al", "nv", 0
 };
 int VAR_3, VAR_4 = 14;
 char *VAR_5 = VAR_0->op+VAR_1;
 for (VAR_3=0; VAR_2[VAR_3]; VAR_3++) {
  if (!FUNC_0 (VAR_5, VAR_2[VAR_3])) {
   VAR_4 = VAR_3;
   break;
  }
 }
 VAR_0->o |= VAR_4 << 4;
 return VAR_4;
}
