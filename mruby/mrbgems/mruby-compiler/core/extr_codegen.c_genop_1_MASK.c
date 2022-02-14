
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int mrb_code ;
struct TYPE_5__ {int pc; int lastpc; } ;
typedef TYPE_1__ codegen_scope ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(codegen_scope *VAR_1, mrb_code VAR_2, uint16_t VAR_3)
{
  VAR_1->lastpc = VAR_1->pc;
  if (VAR_3 > 0xff) {
    FUNC_0(VAR_1, VAR_0);
    FUNC_0(VAR_1, VAR_2);
    FUNC_1(VAR_1, VAR_3);
  }
  else {
    FUNC_0(VAR_1, VAR_2);
    FUNC_0(VAR_1, (uint8_t)VAR_3);
  }
}
