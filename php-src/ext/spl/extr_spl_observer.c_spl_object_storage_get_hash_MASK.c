
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int h; int * key; } ;
typedef TYPE_1__ zend_hash_key ;
struct TYPE_8__ {int ce; } ;
struct TYPE_7__ {scalar_t__ fptr_get_hash; TYPE_3__ std; } ;
typedef TYPE_2__ spl_SplObjectStorage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int ,scalar_t__*,char*,int *,int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(zend_hash_key *VAR_4, spl_SplObjectStorage *VAR_5, zval *VAR_6) {
 if (VAR_5->fptr_get_hash) {
  zval VAR_7;
  FUNC_4(
   &VAR_5->std, VAR_5->std.ce, &VAR_5->fptr_get_hash, "getHash", &VAR_7, VAR_6);
  if (!FUNC_0(VAR_7)) {
   if (FUNC_3(VAR_7) == VAR_1) {
    VAR_4->key = FUNC_2(VAR_7);
    return VAR_2;
   } else {
    FUNC_5(VAR_3, "Hash needs to be a string", 0);

    FUNC_6(&VAR_7);
    return VAR_0;
   }
  } else {
   return VAR_0;
  }
 } else {
  VAR_4->key = ((void*)0);
  VAR_4->h = FUNC_1(VAR_6);
  return VAR_2;
 }
}
