
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
   char *VAR_0;
   VAR_0 = FUNC_0( 0 );
   FUNC_2( VAR_0 == 0, "strdup returns %s should be 0\n", VAR_0);
   FUNC_1( VAR_0 );
}
