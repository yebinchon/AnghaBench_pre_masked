
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_10__ {int by_off; } ;
struct TYPE_9__ {scalar_t__ off; } ;
typedef TYPE_1__ RFlagsAtOffset ;
typedef TYPE_2__ RFlag ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static RFlagsAtOffset *FUNC_2(RFlag *VAR_0, ut64 VAR_1, int VAR_2) {
 RFlagsAtOffset VAR_3 = { .off = VAR_1 };
 RFlagsAtOffset *VAR_4 = (VAR_2 >= 0)
  ? FUNC_0 (VAR_0->by_off, &VAR_3)
  : FUNC_1 (VAR_0->by_off, &VAR_3);
 return (VAR_2 == 0 && VAR_4 && VAR_4->off != VAR_1)? ((void*)0): VAR_4;
}
