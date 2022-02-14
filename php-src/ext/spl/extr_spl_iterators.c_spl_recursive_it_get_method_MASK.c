
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_17__ {TYPE_3__* handlers; TYPE_1__* ce; } ;
typedef TYPE_4__ zend_object ;
typedef size_t zend_long ;
typedef int zend_function ;
struct TYPE_18__ {size_t level; TYPE_2__* iterators; } ;
typedef TYPE_5__ spl_recursive_it_object ;
struct TYPE_16__ {int * (* get_method ) (TYPE_4__**,int *,int const*) ;} ;
struct TYPE_15__ {int zobject; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int function_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_12__* FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (TYPE_4__**,int *,int const*) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (TYPE_4__**,int *,int const*) ;

__attribute__((used)) static zend_function *FUNC_8(zend_object **VAR_1, zend_string *VAR_2, const zval *VAR_3)
{
 zend_function *VAR_4;
 spl_recursive_it_object *VAR_5 = FUNC_4(*VAR_1);
 zend_long VAR_6 = VAR_5->level;
 zval *VAR_7;

 if (!VAR_5->iterators) {
  FUNC_3(((void*)0), VAR_0, "The %s instance wasn't initialized properly", FUNC_0((*VAR_1)->ce->name));
 }
 VAR_7 = &VAR_5->iterators[VAR_6].zobject;

 VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_3);
 if (!VAR_4) {
  if ((VAR_4 = FUNC_6(&FUNC_1(VAR_7)->function_table, VAR_2)) == ((void*)0)) {
   *VAR_1 = FUNC_2(VAR_7);
   VAR_4 = (*VAR_1)->handlers->get_method(VAR_1, VAR_2, VAR_3);
  } else {
   *VAR_1 = FUNC_2(VAR_7);
  }
 }
 return VAR_4;
}
