
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
typedef TYPE_1__ tsd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(tsd_t *VAR_3) {
 if (FUNC_0(VAR_3)) {
  if (VAR_0 || !FUNC_2(VAR_3) ||
      FUNC_1(VAR_3) > 0) {
   VAR_3->state = VAR_2;
  } else {
   VAR_3->state = VAR_1;
  }
 }
}
