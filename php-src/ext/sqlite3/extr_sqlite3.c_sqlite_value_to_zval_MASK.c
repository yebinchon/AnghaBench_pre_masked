
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int zend_long ;
typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(sqlite3_stmt *VAR_2, int VAR_3, zval *VAR_4)
{
 sqlite3_int64 VAR_5;

 switch (FUNC_10(VAR_2, VAR_3)) {
  case 129:
   VAR_5 = FUNC_8(VAR_2, VAR_3);

   if (VAR_5 > VAR_0 || VAR_5 < VAR_1) {
    FUNC_4(VAR_4, (char *)FUNC_9(VAR_2, VAR_3), FUNC_6(VAR_2, VAR_3));
   } else {

    FUNC_1(VAR_4, (zend_long) VAR_5);

   }

   break;

  case 130:
   FUNC_0(VAR_4, FUNC_7(VAR_2, VAR_3));
   break;

  case 128:
   FUNC_2(VAR_4);
   break;

  case 132:
   FUNC_3(VAR_4, (char*)FUNC_9(VAR_2, VAR_3));
   break;

  case 131:
  default:
   FUNC_4(VAR_4, (char*)FUNC_5(VAR_2, VAR_3), FUNC_6(VAR_2, VAR_3));
 }
}
