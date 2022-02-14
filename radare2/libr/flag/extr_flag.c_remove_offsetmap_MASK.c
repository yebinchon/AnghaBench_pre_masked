
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int by_off; } ;
struct TYPE_11__ {int offset; } ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ RFlagsAtOffset ;
typedef TYPE_2__ RFlagItem ;
typedef TYPE_3__ RFlag ;


 TYPE_1__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(RFlag *VAR_0, RFlagItem *VAR_1) {
 FUNC_3 (VAR_0 && VAR_1);
 RFlagsAtOffset *VAR_2 = FUNC_0 (VAR_0, VAR_1->offset, 0);
 if (VAR_2) {
  FUNC_1 (VAR_2->flags, VAR_1);
  if (FUNC_2 (VAR_2->flags)) {
   FUNC_4 (VAR_0->by_off, VAR_2);
  }
 }
}
