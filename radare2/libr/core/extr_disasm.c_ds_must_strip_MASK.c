
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {scalar_t__* strip; TYPE_1__ analop; } ;
typedef TYPE_2__ RDisasmState ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,char const*) ;

__attribute__((used)) static bool FUNC_2(RDisasmState *VAR_0) {
 if (VAR_0 && VAR_0->strip && *VAR_0->strip) {
  const char * VAR_1 = FUNC_0 (VAR_0->analop.type);
  if (VAR_1 && *VAR_1) {
   return FUNC_1 (VAR_0->strip, VAR_1);
  }
 }
 return 0;
}
