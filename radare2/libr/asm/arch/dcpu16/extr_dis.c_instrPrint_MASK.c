
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t opcode; int b; int b_type; int a; int a_type; } ;
struct TYPE_7__ {int opcode; int a; int a_type; } ;
struct TYPE_6__ {scalar_t__ opcode; } ;
struct TYPE_9__ {TYPE_3__ b; TYPE_2__ n; TYPE_1__ code; } ;
typedef TYPE_4__ op ;


 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, const op* VAR_3) {
 char VAR_4[32], VAR_5[32];
 if (VAR_3->code.opcode == 0) {
  FUNC_3 (VAR_4, VAR_3->n.a_type, VAR_3->n.a);
  if (VAR_3->n.opcode > 1) {
   FUNC_1 (VAR_2, "invalid");
   return FUNC_2 (VAR_2);
  }
  return FUNC_0(VAR_2, "%s %s",
   VAR_1[VAR_3->n.opcode], VAR_4);
 }
 FUNC_3 (VAR_4, VAR_3->b.a_type, VAR_3->b.a);
 FUNC_3 (VAR_5, VAR_3->b.b_type, VAR_3->b.b);
 return FUNC_0(VAR_2, "%s %s, %s", VAR_0[VAR_3->b.opcode], VAR_4, VAR_5);
}
