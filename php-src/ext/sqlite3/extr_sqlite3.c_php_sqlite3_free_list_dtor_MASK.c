
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* stmt_obj; } ;
typedef TYPE_2__ php_sqlite3_free_list ;
struct TYPE_3__ {scalar_t__ initialised; int stmt; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void **VAR_0)
{
 php_sqlite3_free_list *VAR_1 = (php_sqlite3_free_list *)*VAR_0;

 if (VAR_1->stmt_obj && VAR_1->stmt_obj->initialised) {
  FUNC_1(VAR_1->stmt_obj->stmt);
  VAR_1->stmt_obj->initialised = 0;
 }
 FUNC_0(*VAR_0);
}
