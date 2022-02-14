
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
struct TYPE_2__ {int val; } ;
typedef TYPE_1__ Bucket ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(const void *VAR_1, const void *VAR_2)
{
 Bucket *VAR_3;
 Bucket *VAR_4;
 zval *VAR_5;
 zval *VAR_6;

 VAR_3 = (Bucket *) VAR_1;
 VAR_4 = (Bucket *) VAR_2;

 VAR_5 = &VAR_3->val;
 VAR_6 = &VAR_4->val;

 if (FUNC_0(FUNC_2(VAR_5) == VAR_0)) {
  VAR_5 = FUNC_1(VAR_5);
 }
 if (FUNC_0(FUNC_2(VAR_6) == VAR_0)) {
  VAR_6 = FUNC_1(VAR_6);
 }

 return FUNC_3(VAR_5, VAR_6);
}
