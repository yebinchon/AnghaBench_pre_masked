
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t* fields; } ;
typedef TYPE_1__ aarch64_operand ;
struct TYPE_5__ {int width; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static inline unsigned
FUNC_1 (const aarch64_operand *VAR_2, unsigned VAR_3)
{
  FUNC_0 (VAR_2->fields[VAR_3] != VAR_0);
  return VAR_1[VAR_2->fields[VAR_3]].width;
}
