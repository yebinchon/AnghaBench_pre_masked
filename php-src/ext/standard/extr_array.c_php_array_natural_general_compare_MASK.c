
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_2__ {int val; } ;
typedef TYPE_1__ Bucket ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int **) ;

__attribute__((used)) static int FUNC_5(const void *VAR_0, const void *VAR_1, int VAR_2)
{
 Bucket *VAR_3 = (Bucket *) VAR_0;
 Bucket *VAR_4 = (Bucket *) VAR_1;
 zend_string *VAR_5, *VAR_6;
 zend_string *VAR_7 = FUNC_4(&VAR_3->val, &VAR_5);
 zend_string *VAR_8 = FUNC_4(&VAR_4->val, &VAR_6);

 int VAR_9 = FUNC_2(FUNC_1(VAR_7), FUNC_0(VAR_7), FUNC_1(VAR_8), FUNC_0(VAR_8), VAR_2);

 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 return VAR_9;
}
