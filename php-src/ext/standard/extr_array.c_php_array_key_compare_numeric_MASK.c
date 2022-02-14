
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zend_long ;
struct TYPE_4__ {scalar_t__ h; TYPE_1__* key; } ;
struct TYPE_3__ {int val; } ;
typedef TYPE_2__ Bucket ;


 int FUNC_0 (double) ;
 double FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 Bucket *VAR_2 = (Bucket *) VAR_0;
 Bucket *VAR_3 = (Bucket *) VAR_1;

 if (VAR_2->key == ((void*)0) && VAR_3->key == ((void*)0)) {
  return (zend_long)VAR_2->h > (zend_long)VAR_3->h ? 1 : -1;
 } else {
  double VAR_4, VAR_5;
  if (VAR_2->key) {
   VAR_4 = FUNC_1(VAR_2->key->val, ((void*)0));
  } else {
   VAR_4 = (double)(zend_long)VAR_2->h;
  }
  if (VAR_3->key) {
   VAR_5 = FUNC_1(VAR_3->key->val, ((void*)0));
  } else {
   VAR_5 = (double)(zend_long)VAR_3->h;
  }
  return FUNC_0(VAR_4 - VAR_5);
 }
}
