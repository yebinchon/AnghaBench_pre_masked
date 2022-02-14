
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_matcher ;


 char* FUNC_0 (int *,char*,int,int,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
   stb_matcher *VAR_0 = FUNC_2();

   char *VAR_1 = "tok_en5.3 20.1 20. .20.1";

   FUNC_1(VAR_0, "[a-zA-Z_][a-zA-Z0-9_]*", 1 );
   FUNC_1(VAR_0, "[0-9]*\\.?[0-9]*" , 2 );
   FUNC_1(VAR_0, "[\r\n\t ]+" , 3 );
   FUNC_1(VAR_0, "." , -99 );
   VAR_1=FUNC_0(VAR_0,VAR_1,1,7, "stb_lex 1");
   VAR_1=FUNC_0(VAR_0,VAR_1,2,2, "stb_lex 2");
   VAR_1=FUNC_0(VAR_0,VAR_1,3,1, "stb_lex 3");
   VAR_1=FUNC_0(VAR_0,VAR_1,2,4, "stb_lex 4");
   VAR_1=FUNC_0(VAR_0,VAR_1,3,1, "stb_lex 5");
   VAR_1=FUNC_0(VAR_0,VAR_1,2,3, "stb_lex 6");
   VAR_1=FUNC_0(VAR_0,VAR_1,3,1, "stb_lex 7");
   VAR_1=FUNC_0(VAR_0,VAR_1,2,3, "stb_lex 8");
   VAR_1=FUNC_0(VAR_0,VAR_1,2,2, "stb_lex 9");
   VAR_1=FUNC_0(VAR_0,VAR_1,0,0, "stb_lex 10");
   FUNC_3(VAR_0);
}
