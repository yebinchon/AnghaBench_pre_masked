
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* lasts; struct TYPE_4__* marks; struct TYPE_4__* buffer; struct TYPE_4__* string; struct TYPE_4__* filename; } ;
typedef TYPE_1__ mpc_input_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(mpc_input_t *VAR_2) {

  FUNC_0(VAR_2->filename);

  if (VAR_2->type == VAR_1) { FUNC_0(VAR_2->string); }
  if (VAR_2->type == VAR_0) { FUNC_0(VAR_2->buffer); }

  FUNC_0(VAR_2->marks);
  FUNC_0(VAR_2->lasts);
  FUNC_0(VAR_2);
}
