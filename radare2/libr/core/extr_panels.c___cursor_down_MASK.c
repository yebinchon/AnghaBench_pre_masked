
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ offset; TYPE_1__* print; } ;
struct TYPE_9__ {scalar_t__ cur; } ;
typedef TYPE_1__ RPrint ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAnalOp ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__,int ) ;

void FUNC_3(RCore *VAR_1) {
 RPrint *VAR_2 = VAR_1->print;
 RAnalOp *VAR_3 = FUNC_2 (VAR_1, VAR_1->offset + VAR_2->cur, VAR_0);
 if (VAR_3) {
  VAR_2->cur += VAR_3->size;
  FUNC_1 (VAR_3);
 } else {
  VAR_2->cur += 4;
 }
 FUNC_0 (VAR_1);
}
