
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
typedef int mpz_ptr ;
struct TYPE_2__ {int num; } ;
typedef int HashTable ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int *) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static HashTable *FUNC_5(zend_object *VAR_0, int *VAR_1)
{
 HashTable *VAR_2, *VAR_3 = FUNC_4(VAR_0);
 mpz_ptr VAR_4 = FUNC_0(VAR_0)->num;
 zval VAR_5;

 *VAR_1 = 1;
 VAR_2 = FUNC_2(VAR_3);

 FUNC_1(&VAR_5, VAR_4, 10);
 FUNC_3(VAR_2, "num", sizeof("num")-1, &VAR_5);

 return VAR_2;
}
