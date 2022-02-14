
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut16 ;
struct TYPE_8__ {int a_type; int b_type; int a; int b; } ;
struct TYPE_7__ {int opcode; int a_type; int a; } ;
struct TYPE_6__ {int opcode; } ;
struct TYPE_9__ {TYPE_3__ b; TYPE_2__ n; TYPE_1__ code; } ;
typedef TYPE_4__ op ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(ut16 VAR_0, op* VAR_1, ut16 VAR_2, ut16 VAR_3) {
 int VAR_4 = 1;
 VAR_1->code.opcode = VAR_0 & 0xF;
 if (!(VAR_1->code.opcode = VAR_0 & 0xF)) {

  VAR_1->n.opcode = (VAR_0 >> 4) & 0x3F;
  VAR_1->n.a_type = (VAR_0 >> 10) & 0x3F;

  if (FUNC_0(VAR_1->n.a_type)) {
   VAR_1->n.a = VAR_2;
   VAR_4++;
  }
 } else {
  VAR_1->b.a_type = (VAR_0 >> 4) & 0x3F;
  VAR_1->b.b_type = (VAR_0 >> 10) & 0x3F;
  if (FUNC_0(VAR_1->b.a_type)) {
   VAR_1->b.a = VAR_2;
   VAR_4++;
   if (FUNC_0 (VAR_1->b.b_type)) {
    VAR_1->b.b = VAR_3;
    VAR_4++;
   }
  } else if (FUNC_0(VAR_1->b.b_type)) {
   VAR_1->b.b = VAR_2;
   VAR_4++;
  }
 }
 return VAR_4;
}
