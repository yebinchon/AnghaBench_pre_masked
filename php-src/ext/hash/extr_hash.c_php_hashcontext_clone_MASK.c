
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ce; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_12__ {TYPE_5__* ops; scalar_t__ key; int * context; int options; } ;
typedef TYPE_2__ php_hashcontext_object ;
struct TYPE_13__ {scalar_t__ (* hash_copy ) (TYPE_5__*,int *,int *) ;int block_size; int (* hash_init ) (int *) ;int context_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static zend_object *FUNC_9(zend_object *VAR_1) {
 php_hashcontext_object *VAR_2 = FUNC_5(VAR_1);
 zend_object *VAR_3 = FUNC_4(VAR_1->ce);
 php_hashcontext_object *VAR_4 = FUNC_5(VAR_3);

 FUNC_8(VAR_3, VAR_1);

 VAR_4->ops = VAR_2->ops;
 VAR_4->options = VAR_2->options;
 VAR_4->context = FUNC_2(VAR_4->ops->context_size);
 VAR_4->ops->hash_init(VAR_4->context);

 if (VAR_0 != VAR_4->ops->hash_copy(VAR_4->ops, VAR_2->context, VAR_4->context)) {
  FUNC_1(VAR_4->context);
  VAR_4->context = ((void*)0);
  return VAR_3;
 }

 VAR_4->key = FUNC_0(1, VAR_4->ops->block_size);
 if (VAR_2->key) {
  FUNC_3(VAR_4->key, VAR_2->key, VAR_4->ops->block_size);
 }

 return VAR_3;
}
