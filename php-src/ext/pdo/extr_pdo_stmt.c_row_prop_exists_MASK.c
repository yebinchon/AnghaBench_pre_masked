
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
typedef scalar_t__ zend_long ;
struct TYPE_6__ {scalar_t__ column_count; TYPE_1__* columns; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_2__* stmt; } ;
typedef TYPE_3__ pdo_row_t ;
struct TYPE_5__ {int * name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *,int,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__*,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(zend_object *VAR_2, zend_string *VAR_3, int VAR_4, void **VAR_5)
{
 pdo_row_t *VAR_6 = (pdo_row_t *)VAR_2;
 pdo_stmt_t *VAR_7 = VAR_6->stmt;
 int VAR_8 = -1;
 zend_long VAR_9;

 if (VAR_7) {
  if (FUNC_5(FUNC_1(VAR_3), FUNC_0(VAR_3), &VAR_9, ((void*)0), 0, ((void*)0)) == VAR_0) {
   return VAR_9 >=0 && VAR_9 < VAR_7->column_count;
  }



  for (VAR_8 = 0; VAR_8 < VAR_7->column_count; VAR_8++) {
   if (FUNC_0(VAR_7->columns[VAR_8].name) == FUNC_0(VAR_3) &&
       FUNC_6(FUNC_1(VAR_7->columns[VAR_8].name), FUNC_1(VAR_3), FUNC_0(VAR_3)) == 0) {
     int VAR_10;
     zval VAR_11;

     FUNC_3(VAR_7, &VAR_11, VAR_8, ((void*)0));
     VAR_10 = VAR_4 ? FUNC_4(&VAR_11) : FUNC_2(VAR_11) != VAR_1;
     FUNC_7(&VAR_11);

     return VAR_10;
   }
  }
 }

 return 0;
}
