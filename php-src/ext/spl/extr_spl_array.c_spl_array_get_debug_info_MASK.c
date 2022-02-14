
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_9__ {int * properties; } ;
struct TYPE_8__ {int ar_flags; int array; TYPE_6__ std; } ;
typedef TYPE_2__ spl_array_object ;
typedef int copy_ctor_func_t ;
typedef int HashTable ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_3 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static HashTable* FUNC_9(zend_object *VAR_5, int *VAR_6)
{
 zval *VAR_7;
 zend_string *VAR_8;
 zend_class_entry *VAR_9;
 spl_array_object *VAR_10 = FUNC_2(VAR_5);

 if (!VAR_10->std.properties) {
  FUNC_1(&VAR_10->std);
 }

 if (VAR_10->ar_flags & VAR_0) {
  *VAR_6 = 0;
  return VAR_10->std.properties;
 } else {
  HashTable *VAR_11;
  *VAR_6 = 1;

  VAR_11 = FUNC_6(FUNC_5(VAR_10->std.properties) + 1);
  FUNC_4(VAR_11, VAR_10->std.properties, (copy_ctor_func_t) VAR_4);

  VAR_7 = &VAR_10->array;
  FUNC_0(VAR_7);

  VAR_9 = VAR_5->handlers == &VAR_3
   ? VAR_1 : VAR_2;
  VAR_8 = FUNC_3(VAR_9, "storage", sizeof("storage")-1);
  FUNC_8(VAR_11, VAR_8, VAR_7);
  FUNC_7(VAR_8, 0);

  return VAR_11;
 }
}
