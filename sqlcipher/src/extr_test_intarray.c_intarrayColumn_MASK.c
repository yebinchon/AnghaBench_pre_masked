
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
typedef int sqlite3_context ;
struct TYPE_8__ {TYPE_1__* pContent; } ;
typedef TYPE_3__ intarray_vtab ;
struct TYPE_9__ {size_t i; } ;
typedef TYPE_4__ intarray_cursor ;
struct TYPE_6__ {size_t n; int * a; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_1, sqlite3_context *VAR_2, int VAR_3){
  intarray_cursor *VAR_4 = (intarray_cursor*)VAR_1;
  intarray_vtab *VAR_5 = (intarray_vtab*)VAR_1->pVtab;
  if( VAR_4->i>=0 && VAR_4->i<VAR_5->pContent->n ){
    FUNC_0(VAR_2, VAR_5->pContent->a[VAR_4->i]);
  }
  return VAR_0;
}
