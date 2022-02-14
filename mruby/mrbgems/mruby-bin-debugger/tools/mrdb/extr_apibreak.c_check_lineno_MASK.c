
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_5__ {size_t* ary; TYPE_2__* flat_map; } ;
struct TYPE_7__ {size_t line_entry_count; scalar_t__ line_type; TYPE_1__ lines; } ;
typedef TYPE_3__ mrb_irep_debug_info_file ;
struct TYPE_6__ {size_t line; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(mrb_irep_debug_info_file *VAR_1, uint16_t VAR_2)
{
  uint32_t VAR_3 = VAR_1->line_entry_count;
  uint16_t VAR_4;

  if (VAR_1->line_type == VAR_0) {
    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
      if (VAR_2 == VAR_1->lines.ary[VAR_4]) {
        return VAR_2;
      }
    }
  }
  else {
    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
      if (VAR_2 == VAR_1->lines.flat_map[VAR_4].line) {
        return VAR_2;
      }
    }
  }

  return 0;
}
