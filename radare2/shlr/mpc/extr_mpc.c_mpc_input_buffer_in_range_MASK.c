
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long pos; } ;
struct TYPE_7__ {TYPE_2__* marks; int buffer; TYPE_1__ state; } ;
typedef TYPE_3__ mpc_input_t ;
struct TYPE_6__ {scalar_t__ pos; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(mpc_input_t *VAR_0) {
  return VAR_0->state.pos < (long)(FUNC_0(VAR_0->buffer) + VAR_0->marks[0].pos);
}
