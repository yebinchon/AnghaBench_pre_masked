
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_5__ {unsigned char* context; unsigned char* key; TYPE_1__* ops; } ;
typedef TYPE_2__ php_hashcontext_object ;
struct TYPE_4__ {int block_size; int (* hash_final ) (unsigned char*,unsigned char*) ;int digest_size; } ;


 int FUNC_0 (unsigned char*,int ) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (unsigned char*,unsigned char*) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0) {
 php_hashcontext_object *VAR_1 = FUNC_3(VAR_0);


 if (VAR_1->context) {
  unsigned char *VAR_2 = FUNC_2(VAR_1->ops->digest_size);
  VAR_1->ops->hash_final(VAR_2, VAR_1->context);
  FUNC_1(VAR_2);
  FUNC_1(VAR_1->context);
  VAR_1->context = ((void*)0);
 }

 if (VAR_1->key) {
  FUNC_0(VAR_1->key, VAR_1->ops->block_size);
  FUNC_1(VAR_1->key);
  VAR_1->key = ((void*)0);
 }
}
