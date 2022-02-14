
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Rangstr ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

int FUNC_3 () {
 Rangstr VAR_0 ;

 VAR_0 = FUNC_0 ("{\"hello\":\"world\"}", "hello");
FUNC_1 ("OUT: ");
FUNC_2 (&VAR_0);
FUNC_1 ("\n");

FUNC_1 ("--\n");
 VAR_0 = FUNC_0 ("{\"hello\":{\"world\":123}}", "hello.world");
FUNC_1 ("OUT: ");
FUNC_2 (&VAR_0);
FUNC_1 ("\n");
 return 0;
}
