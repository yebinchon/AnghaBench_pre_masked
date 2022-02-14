
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lemon {int outname; int nolinenosflag; } ;
typedef int FILE ;


 int FUNC_0 (char,int *) ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2(FILE *VAR_0, struct lemon *VAR_1, char *VAR_2, int *VAR_3)
{
  if( VAR_2==0 ) return;
  while( *VAR_2 ){
    FUNC_0(*VAR_2,VAR_0);
    if( *VAR_2=='\n' ) (*VAR_3)++;
    VAR_2++;
  }
  if( VAR_2[-1]!='\n' ){
    FUNC_0('\n',VAR_0);
    (*VAR_3)++;
  }
  if (!VAR_1->nolinenosflag) {
    (*VAR_3)++; FUNC_1(VAR_0,*VAR_3,VAR_1->outname);
  }
  return;
}
