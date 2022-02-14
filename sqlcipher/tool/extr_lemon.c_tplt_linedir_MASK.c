
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char,int *) ;

void FUNC_2(FILE *VAR_0, int VAR_1, char *VAR_2)
{
  FUNC_0(VAR_0,"#line %d \"",VAR_1);
  while( *VAR_2 ){
    if( *VAR_2 == '\\' ) FUNC_1('\\',VAR_0);
    FUNC_1(*VAR_2,VAR_0);
    VAR_2++;
  }
  FUNC_0(VAR_0,"\"\n");
}
