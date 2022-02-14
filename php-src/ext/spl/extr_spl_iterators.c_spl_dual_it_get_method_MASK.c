
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_17__ {TYPE_2__* handlers; } ;
typedef TYPE_4__ zend_object ;
typedef int zend_function ;
struct TYPE_16__ {int zobject; TYPE_1__* ce; } ;
struct TYPE_18__ {TYPE_3__ inner; } ;
typedef TYPE_5__ spl_dual_it_object ;
struct TYPE_15__ {int * (* get_method ) (TYPE_4__**,int *,int const*) ;} ;
struct TYPE_14__ {int function_table; } ;
struct TYPE_13__ {scalar_t__ get_method; } ;


 TYPE_4__* FUNC_0 (int ) ;
 TYPE_11__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 int * FUNC_3 (TYPE_4__**,int *,int const*) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (TYPE_4__**,int *,int const*) ;

__attribute__((used)) static zend_function *FUNC_6(zend_object **VAR_0, zend_string *VAR_1, const zval *VAR_2)
{
 zend_function *VAR_3;
 spl_dual_it_object *VAR_4;

 VAR_4 = FUNC_2(*VAR_0);

 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (!VAR_3 && VAR_4->inner.ce) {
  if ((VAR_3 = FUNC_4(&VAR_4->inner.ce->function_table, VAR_1)) == ((void*)0)) {
   if (FUNC_1(VAR_4->inner.zobject)->get_method) {
    *VAR_0 = FUNC_0(VAR_4->inner.zobject);
    VAR_3 = (*VAR_0)->handlers->get_method(VAR_0, VAR_1, VAR_2);
   }
  } else {
   *VAR_0 = FUNC_0(VAR_4->inner.zobject);
  }
 }
 return VAR_3;
}
