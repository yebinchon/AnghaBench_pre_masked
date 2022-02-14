
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; scalar_t__ key; } ;
typedef TYPE_1__ zend_hash_key ;
typedef int spl_SplObjectStorageElement ;
struct TYPE_6__ {int storage; } ;
typedef TYPE_2__ spl_SplObjectStorage ;


 int * FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static spl_SplObjectStorageElement* FUNC_2(spl_SplObjectStorage *VAR_0, zend_hash_key *VAR_1)
{
 if (VAR_1->key) {
  return FUNC_0(&VAR_0->storage, VAR_1->key);
 } else {
  return FUNC_1(&VAR_0->storage, VAR_1->h);
 }
}
