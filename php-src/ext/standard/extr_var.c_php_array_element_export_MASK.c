
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef int zend_string ;
typedef int zend_long ;
typedef int smart_str ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int ,int ,char*,int,char*,int) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char) ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(zval *VAR_0, zend_ulong VAR_1, zend_string *VAR_2, int VAR_3, smart_str *VAR_4)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_4, VAR_3+1);
  FUNC_7(VAR_4, (zend_long) VAR_1);
  FUNC_9(VAR_4, " => ", 4);

 } else {
  zend_string *VAR_5;
  zend_string *VAR_6 = FUNC_3(VAR_2, "'\\", 2);
  VAR_5 = FUNC_4(FUNC_1(VAR_6), FUNC_0(VAR_6), "\0", 1, "' . \"\\0\" . '", 12);

  FUNC_2(VAR_4, VAR_3 + 1);

  FUNC_8(VAR_4, '\'');
  FUNC_6(VAR_4, VAR_5);
  FUNC_9(VAR_4, "' => ", 5);

  FUNC_10(VAR_6);
  FUNC_10(VAR_5);
 }
 FUNC_5(VAR_0, VAR_3 + 2, VAR_4);

 FUNC_8(VAR_4, ',');
 FUNC_8(VAR_4, '\n');
}
