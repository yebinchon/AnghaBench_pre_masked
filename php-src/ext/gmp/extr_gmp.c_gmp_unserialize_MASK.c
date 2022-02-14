
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_unserialize_data ;
typedef int zend_object ;
typedef int zend_class_entry ;
typedef int php_unserialize_data_t ;
typedef int mpz_ptr ;
typedef int copy_ctor_func_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,unsigned char const**,unsigned char const*,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_13(zval *VAR_5, zend_class_entry *VAR_6, const unsigned char *VAR_7, size_t VAR_8, zend_unserialize_data *VAR_9)
{
 mpz_ptr VAR_10;
 const unsigned char *VAR_11, *VAR_12;
 zval *VAR_13;
 int VAR_14 = VAR_0;
 php_unserialize_data_t VAR_15;
 zend_object *VAR_16;

 FUNC_1(VAR_15);
 FUNC_6(VAR_5, &VAR_10);

 VAR_16 = FUNC_3(VAR_5);

 VAR_11 = VAR_7;
 VAR_12 = VAR_7 + VAR_8;

 VAR_13 = FUNC_8(&VAR_15);
 if (!FUNC_7(VAR_13, &VAR_11, VAR_12, &VAR_15)
  || FUNC_4(VAR_13) != VAR_2
  || FUNC_5(VAR_10, VAR_13, 10) == VAR_0
 ) {
  FUNC_12(((void*)0), "Could not unserialize number", 0);
  goto exit;
 }

 VAR_13 = FUNC_8(&VAR_15);
 if (!FUNC_7(VAR_13, &VAR_11, VAR_12, &VAR_15)
  || FUNC_4(VAR_13) != VAR_1
 ) {
  FUNC_12(((void*)0), "Could not unserialize properties", 0);
  goto exit;
 }

 if (FUNC_10(FUNC_2(VAR_13)) != 0) {
  FUNC_9(
   FUNC_11(VAR_16), FUNC_2(VAR_13),
   (copy_ctor_func_t) VAR_4
  );
 }

 VAR_14 = VAR_3;
exit:
 FUNC_0(VAR_15);
 return VAR_14;
}
