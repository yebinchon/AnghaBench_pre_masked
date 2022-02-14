
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ mrb_code ;
struct TYPE_5__ {size_t icapa; scalar_t__* iseq; scalar_t__* lines; scalar_t__ lineno; } ;
typedef TYPE_1__ codegen_scope ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(codegen_scope *VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
  if (VAR_2 >= VAR_0 || VAR_1->icapa >= VAR_0) {
    FUNC_0(VAR_1, "too big code block");
  }
  if (VAR_2 >= VAR_1->icapa) {
    VAR_1->icapa *= 2;
    if (VAR_1->icapa > VAR_0) {
      VAR_1->icapa = VAR_0;
    }
    VAR_1->iseq = (mrb_code *)FUNC_1(VAR_1, VAR_1->iseq, sizeof(mrb_code)*VAR_1->icapa);
    if (VAR_1->lines) {
      VAR_1->lines = (uint16_t*)FUNC_1(VAR_1, VAR_1->lines, sizeof(uint16_t)*VAR_1->icapa);
    }
  }
  if (VAR_1->lines) {
    if (VAR_1->lineno > 0 || VAR_2 == 0)
      VAR_1->lines[VAR_2] = VAR_1->lineno;
    else
      VAR_1->lines[VAR_2] = VAR_1->lines[VAR_2-1];
  }
  VAR_1->iseq[VAR_2] = VAR_3;
}
