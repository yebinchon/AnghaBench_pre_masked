
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {scalar_t__ cursor_open; scalar_t__* name; int stmt; TYPE_1__* H; } ;
typedef TYPE_3__ pdo_firebird_stmt ;
struct TYPE_6__ {int isc_status; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(pdo_stmt_t *VAR_1)
{
 pdo_firebird_stmt *VAR_2 = (pdo_firebird_stmt*)VAR_1->driver_data;


 if ((*VAR_2->name || VAR_2->cursor_open) && FUNC_1(VAR_2->H->isc_status, &VAR_2->stmt, VAR_0)) {
  FUNC_0(VAR_1);
  return 0;
 }
 *VAR_2->name = 0;
 VAR_2->cursor_open = 0;
 return 1;
}
