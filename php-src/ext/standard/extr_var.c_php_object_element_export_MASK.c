
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_ulong ;
typedef int zend_string ;
typedef int zend_long ;
typedef int smart_str ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (char const*,size_t,char*,int) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char const**,char const**,size_t*) ;

__attribute__((used)) static void FUNC_9(zval *VAR_0, zend_ulong VAR_1, zend_string *VAR_2, int VAR_3, smart_str *VAR_4)
{
 FUNC_0(VAR_4, VAR_3 + 2);
 if (VAR_2 != ((void*)0)) {
  const char *VAR_5, *VAR_6;
  size_t VAR_7;
  zend_string *VAR_8;

  FUNC_8(VAR_2, &VAR_5, &VAR_6, &VAR_7);
  VAR_8 = FUNC_1(VAR_6, VAR_7, "'\\", 2);

  FUNC_5(VAR_4, '\'');
  FUNC_3(VAR_4, VAR_8);
  FUNC_5(VAR_4, '\'');
  FUNC_7(VAR_8, 0);
 } else {
  FUNC_4(VAR_4, (zend_long) VAR_1);
 }
 FUNC_6(VAR_4, " => ", 4);
 FUNC_2(VAR_0, VAR_3 + 2, VAR_4);
 FUNC_5(VAR_4, ',');
 FUNC_5(VAR_4, '\n');
}
