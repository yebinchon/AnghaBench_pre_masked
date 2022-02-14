
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t opcode; int b_type; int a_type; } ;
struct TYPE_7__ {size_t opcode; int a_type; } ;
struct TYPE_6__ {scalar_t__ opcode; } ;
struct TYPE_9__ {TYPE_3__ b; TYPE_2__ n; TYPE_1__ code; } ;
typedef TYPE_4__ op ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_1(const op* VAR_2) {
 if (VAR_2->code.opcode == 0)
  return VAR_1[VAR_2->n.opcode] + FUNC_0(VAR_2->n.a_type);
 return VAR_0[VAR_2->b.opcode] + FUNC_0(VAR_2->b.a_type)
  + FUNC_0(VAR_2->b.b_type);
}
