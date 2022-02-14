
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* assembler; int config; } ;
struct TYPE_4__ {int bits; } ;
typedef TYPE_2__ RCore ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 char const** VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static const char *FUNC_1(RCore *VAR_3) {
 if (VAR_1 == 0) {
  if (FUNC_0 (VAR_3->config, "dbg.slow")) {
   return "pxr";
  }
  if (FUNC_0 (VAR_3->config, "stack.bytes")) {
   return "px";
  }
  switch (VAR_3->assembler->bits) {
  case 64: return "pxq"; break;
  case 32: return "pxw"; break;
  }
  return "px";
 }
 return VAR_2[VAR_1 % VAR_0];
}
