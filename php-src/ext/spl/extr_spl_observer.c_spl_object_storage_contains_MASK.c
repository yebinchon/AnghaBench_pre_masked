
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_8__ {int h; scalar_t__ key; } ;
typedef TYPE_1__ zend_hash_key ;
struct TYPE_9__ {int storage; } ;
typedef TYPE_2__ spl_SplObjectStorage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(spl_SplObjectStorage *VAR_1, zval *VAR_2)
{
 int VAR_3;
 zend_hash_key VAR_4;
 if (FUNC_1(&VAR_4, VAR_1, VAR_2) == VAR_0) {
  return 0;
 }

 if (VAR_4.key) {
  VAR_3 = FUNC_2(&VAR_1->storage, VAR_4.key);
 } else {
  VAR_3 = FUNC_3(&VAR_1->storage, VAR_4.h);
 }
 FUNC_0(VAR_1, &VAR_4);
 return VAR_3;
}
