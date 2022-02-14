
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gdbr_lock; } ;
typedef TYPE_1__ libgdbr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 void* FUNC_1 () ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;

bool FUNC_4(libgdbr_t *VAR_2) {
 FUNC_0 (VAR_1, VAR_2);
 void *VAR_3 = FUNC_1 ();
 FUNC_3 (VAR_2->gdbr_lock);
 FUNC_2 (VAR_3);
 if (VAR_0) {
  return 0;
 }
 return 1;
}
