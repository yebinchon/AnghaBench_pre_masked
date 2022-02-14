
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ RBinSection ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(RBinSection *VAR_0) {
 if (FUNC_0 (VAR_0->name, "_cstring")) {
  return 1;
 }
 if (FUNC_0 (VAR_0->name, "_objc_methname")) {
  return 1;
 }
 if (FUNC_0 (VAR_0->name, "_objc_classname")) {
  return 1;
 }
 if (FUNC_0 (VAR_0->name, "_objc_methtype")) {
  return 1;
 }
 return 0;
}
