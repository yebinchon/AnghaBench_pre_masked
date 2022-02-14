
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int t; } ;
struct TYPE_6__ {scalar_t__ do_bounds_check; } ;
struct TYPE_5__ {int r; TYPE_3__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_3(void) {
 if ((VAR_7->type.t & VAR_1) != VAR_4) {
  if ((VAR_7->type.t & VAR_1) == VAR_2) {
   return;
  }
  FUNC_0 ("pointer");
 }
 VAR_7->type = *FUNC_2 (&VAR_7->type);

 if (!(VAR_7->type.t & VAR_0) && !(VAR_7->type.t & VAR_5)
     && (VAR_7->type.t & VAR_1) != VAR_2) {
  VAR_7->r |= FUNC_1 (VAR_7->type.t);






 }
}
