
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_2__ sqlite3_vtab_cursor ;
struct TYPE_8__ {TYPE_1__* pContent; } ;
typedef TYPE_3__ intarray_vtab ;
struct TYPE_9__ {scalar_t__ i; } ;
typedef TYPE_4__ intarray_cursor ;
struct TYPE_6__ {scalar_t__ n; } ;



__attribute__((used)) static int FUNC_0(sqlite3_vtab_cursor *VAR_0){
  intarray_cursor *VAR_1 = (intarray_cursor *)VAR_0;
  intarray_vtab *VAR_2 = (intarray_vtab *)VAR_0->pVtab;
  return VAR_1->i>=VAR_2->pContent->n;
}
