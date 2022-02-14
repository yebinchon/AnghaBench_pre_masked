
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_serialize_data ;
struct TYPE_3__ {int s; int member_0; } ;
typedef TYPE_1__ smart_str ;
typedef int php_serialize_data_t ;
typedef int mpz_ptr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,size_t) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (TYPE_1__*,int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(zval *VAR_1, unsigned char **VAR_2, size_t *VAR_3, zend_serialize_data *VAR_4)
{
 mpz_ptr VAR_5 = FUNC_0(VAR_1);
 smart_str VAR_6 = {0};
 zval VAR_7;
 php_serialize_data_t VAR_8;

 FUNC_2(VAR_8);

 FUNC_8(&VAR_7, VAR_5, 10);
 FUNC_9(&VAR_6, &VAR_7, &VAR_8);
 FUNC_12(&VAR_7);

 FUNC_5(&VAR_7, FUNC_10(FUNC_6(VAR_1)));
 FUNC_9(&VAR_6, &VAR_7, &VAR_8);

 FUNC_1(VAR_8);
 *VAR_2 = (unsigned char *) FUNC_7(FUNC_4(VAR_6.s), FUNC_3(VAR_6.s));
 *VAR_3 = FUNC_3(VAR_6.s);
 FUNC_11(VAR_6.s, 0);

 return VAR_0;
}
