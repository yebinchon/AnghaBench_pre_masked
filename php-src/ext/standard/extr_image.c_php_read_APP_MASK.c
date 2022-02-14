
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int php_stream ;
typedef int markername ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*,unsigned short) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 unsigned short FUNC_4 (int *) ;
 unsigned short FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(php_stream * VAR_1, unsigned int VAR_2, zval *VAR_3)
{
 unsigned short VAR_4;
 char *VAR_5;
 char VAR_6[16];
 zval *VAR_7;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4 < 2) {
  return 0;
 }
 VAR_4 -= 2;

 VAR_5 = FUNC_3((size_t)VAR_4);

 if (FUNC_5(VAR_1, VAR_5, (size_t) VAR_4) != VAR_4) {
  FUNC_2(VAR_5);
  return 0;
 }

 FUNC_6(VAR_6, sizeof(VAR_6), "APP%d", VAR_2 - VAR_0);

 if ((VAR_7 = FUNC_8(FUNC_0(VAR_3), VAR_6, FUNC_7(VAR_6))) == ((void*)0)) {

  FUNC_1(VAR_3, VAR_6, VAR_5, VAR_4);
 }

 FUNC_2(VAR_5);
 return 1;
}
