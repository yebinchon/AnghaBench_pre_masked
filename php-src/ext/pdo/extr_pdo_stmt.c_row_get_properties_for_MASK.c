
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_prop_purpose ;
typedef int zend_object ;
struct TYPE_9__ {int properties; } ;
struct TYPE_7__ {int column_count; TYPE_1__* columns; TYPE_4__ std; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {TYPE_2__* stmt; } ;
typedef TYPE_3__ pdo_row_t ;
struct TYPE_6__ {int name; } ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static HashTable *FUNC_5(zend_object *VAR_1, zend_prop_purpose VAR_2)
{
 pdo_row_t *VAR_3 = (pdo_row_t *)VAR_1;
 pdo_stmt_t *VAR_4 = VAR_3->stmt;
 HashTable *VAR_5;
 int VAR_6;

 if (VAR_2 != VAR_0 || VAR_4 == ((void*)0)) {
  return FUNC_4(VAR_1, VAR_2);
 }

 if (!VAR_4->std.properties) {
  FUNC_1(&VAR_4->std);
 }
 VAR_5 = FUNC_2(VAR_4->std.properties);
 for (VAR_6 = 0; VAR_6 < VAR_4->column_count; VAR_6++) {
  zval VAR_7;
  FUNC_0(VAR_4, &VAR_7, VAR_6, ((void*)0));

  FUNC_3(VAR_5, VAR_4->columns[VAR_6].name, &VAR_7);
 }
 return VAR_5;
}
