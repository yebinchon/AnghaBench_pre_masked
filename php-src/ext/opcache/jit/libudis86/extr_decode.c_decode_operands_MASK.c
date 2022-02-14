
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ud {TYPE_5__* itab_entry; TYPE_6__* operand; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_10__ {int size; int type; } ;
struct TYPE_9__ {int size; int type; } ;
struct TYPE_8__ {int size; int type; } ;
struct TYPE_7__ {int size; int type; } ;
struct TYPE_11__ {TYPE_4__ operand4; TYPE_3__ operand3; TYPE_2__ operand2; TYPE_1__ operand1; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ud*,TYPE_6__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ud* VAR_1)
{
  FUNC_0(VAR_1, &VAR_1->operand[0],
                    VAR_1->itab_entry->operand1.type,
                    VAR_1->itab_entry->operand1.size);
  if (VAR_1->operand[0].type != VAR_0) {
      FUNC_0(VAR_1, &VAR_1->operand[1],
                        VAR_1->itab_entry->operand2.type,
                        VAR_1->itab_entry->operand2.size);
  }
  if (VAR_1->operand[1].type != VAR_0) {
      FUNC_0(VAR_1, &VAR_1->operand[2],
                        VAR_1->itab_entry->operand3.type,
                        VAR_1->itab_entry->operand3.size);
  }
  if (VAR_1->operand[2].type != VAR_0) {
      FUNC_0(VAR_1, &VAR_1->operand[3],
                        VAR_1->itab_entry->operand4.type,
                        VAR_1->itab_entry->operand4.size);
  }
  return 0;
}
