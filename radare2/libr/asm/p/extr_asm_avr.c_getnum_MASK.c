
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; } ;
typedef TYPE_1__ RAsm ;


 int FUNC_0 (int ,char const*) ;

__attribute__((used)) static int FUNC_1(RAsm *VAR_0, const char *VAR_1) {
 if (!VAR_1) {
  return 0;
 }
 if (*VAR_1 == '$') {
  VAR_1++;
 }
 return FUNC_0 (VAR_0->num, VAR_1);
}
