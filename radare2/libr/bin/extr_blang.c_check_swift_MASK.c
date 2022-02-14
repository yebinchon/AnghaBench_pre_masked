
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ name; } ;
typedef TYPE_1__ RBinSymbol ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;

__attribute__((used)) static bool FUNC_1(RBinSymbol *VAR_0) {
 if (VAR_0->name && FUNC_0 (VAR_0->name, "swift_once")) {
  return 1;
 }
 return 0;
}
