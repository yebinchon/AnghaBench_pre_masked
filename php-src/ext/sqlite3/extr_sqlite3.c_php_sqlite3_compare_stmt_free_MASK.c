
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {TYPE_1__* stmt_obj; } ;
typedef TYPE_2__ php_sqlite3_free_list ;
struct TYPE_4__ {int * stmt; scalar_t__ initialised; } ;



__attribute__((used)) static int FUNC_0( php_sqlite3_free_list **VAR_0, sqlite3_stmt *VAR_1 )
{
 return ((*VAR_0)->stmt_obj->initialised && VAR_1 == (*VAR_0)->stmt_obj->stmt);
}
