
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int val; } ;
typedef TYPE_1__ Bucket ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
 Bucket *VAR_2, *VAR_3;
 int VAR_4;
 zval *VAR_5, *VAR_6;

 VAR_2 = *((Bucket **) VAR_0);
 VAR_3 = *((Bucket **) VAR_1);

 VAR_5 = &VAR_2->val;
 VAR_6 = &VAR_3->val;

 VAR_4 = FUNC_0(VAR_5, VAR_6);

 if (VAR_4 < 0) {
  return -1;
 } else if (VAR_4 > 0) {
  return 1;
 }

 return 0;
}
