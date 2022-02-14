
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* init ) () ;int (* deinit ) () ;} ;
typedef TYPE_1__ io_backend_t ;


 TYPE_1__** VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int FUNC_2(const char *VAR_2) {
 io_backend_t *VAR_3;

 VAR_3 = VAR_0[0];

 if (!VAR_3) {
  return 0;
 }

 if (VAR_1 && VAR_1->deinit) {
  VAR_1->deinit ();
 }

 VAR_1 = VAR_3;

 if (VAR_1->init) {
  VAR_1->init ();
 }

 return 1;
}
