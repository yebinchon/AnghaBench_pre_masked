
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int zval ;
struct TYPE_17__ {int h; scalar_t__ key; } ;
typedef TYPE_1__ zend_hash_key ;
struct TYPE_18__ {int inf; int obj; } ;
typedef TYPE_2__ spl_SplObjectStorageElement ;
struct TYPE_19__ {int storage; } ;
typedef TYPE_3__ spl_SplObjectStorage ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_3__*,int *) ;
 TYPE_2__* FUNC_5 (int *,int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_6 (int *,scalar_t__,TYPE_2__*,int) ;
 int FUNC_7 (int *) ;

spl_SplObjectStorageElement *FUNC_8(spl_SplObjectStorage *VAR_1, zval *VAR_2, zval *VAR_3)
{
 spl_SplObjectStorageElement *VAR_4, VAR_5;
 zend_hash_key VAR_6;
 if (FUNC_4(&VAR_6, VAR_1, VAR_2) == VAR_0) {
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_1, &VAR_6);

 if (VAR_4) {
  FUNC_7(&VAR_4->inf);
  if (VAR_3) {
   FUNC_0(&VAR_4->inf, VAR_3);
  } else {
   FUNC_1(&VAR_4->inf);
  }
  FUNC_2(VAR_1, &VAR_6);
  return VAR_4;
 }

 FUNC_0(&VAR_5.obj, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_5.inf, VAR_3);
 } else {
  FUNC_1(&VAR_5.inf);
 }
 if (VAR_6.key) {
  VAR_4 = FUNC_6(&VAR_1->storage, VAR_6.key, &VAR_5, sizeof(spl_SplObjectStorageElement));
 } else {
  VAR_4 = FUNC_5(&VAR_1->storage, VAR_6.h, &VAR_5, sizeof(spl_SplObjectStorageElement));
 }
 FUNC_2(VAR_1, &VAR_6);
 return VAR_4;
}
