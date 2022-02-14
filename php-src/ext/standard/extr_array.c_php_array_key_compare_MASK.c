
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zend_uchar ;
typedef scalar_t__ zend_long ;
struct TYPE_5__ {int len; int val; } ;
struct TYPE_4__ {TYPE_2__* key; scalar_t__ h; } ;
typedef TYPE_1__ Bucket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*,double*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(const void *VAR_2, const void *VAR_3)
{
 Bucket *VAR_4 = (Bucket *) VAR_2;
 Bucket *VAR_5 = (Bucket *) VAR_3;
 zend_uchar VAR_6;
 zend_long VAR_7, VAR_8;
 double VAR_9;

 if (VAR_4->key == ((void*)0)) {
  if (VAR_5->key == ((void*)0)) {
   return (zend_long)VAR_4->h > (zend_long)VAR_5->h ? 1 : -1;
  } else {
   VAR_7 = (zend_long)VAR_4->h;
   VAR_6 = FUNC_1(VAR_5->key->val, VAR_5->key->len, &VAR_8, &VAR_9, 1);
   if (VAR_6 == VAR_1) {

   } else if (VAR_6 == VAR_0) {
    return FUNC_0((double)VAR_7 - VAR_9);
   } else {
    VAR_8 = 0;
   }
  }
 } else {
  if (VAR_5->key) {
   return FUNC_2(VAR_4->key, VAR_5->key);
  } else {
   VAR_8 = (zend_long)VAR_5->h;
   VAR_6 = FUNC_1(VAR_4->key->val, VAR_4->key->len, &VAR_7, &VAR_9, 1);
   if (VAR_6 == VAR_1) {

   } else if (VAR_6 == VAR_0) {
    return FUNC_0(VAR_9 - (double)VAR_8);
   } else {
    VAR_7 = 0;
   }
  }
 }
 return FUNC_0(VAR_7 - VAR_8);
}
