
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_data; int name; } ;
typedef TYPE_1__ RBinSection ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(RBinSection *VAR_0) {
 if (FUNC_0 (VAR_0->name, "_cstring")) {
  VAR_0->is_data = 1;
 } else if (FUNC_0 (VAR_0->name, "_os_log")) {
  VAR_0->is_data = 1;
 } else if (FUNC_0 (VAR_0->name, "_objc_methname")) {
  VAR_0->is_data = 1;
 } else if (FUNC_0 (VAR_0->name, "_objc_classname")) {
  VAR_0->is_data = 1;
 } else if (FUNC_0 (VAR_0->name, "_objc_methtype")) {
  VAR_0->is_data = 1;
 }
}
