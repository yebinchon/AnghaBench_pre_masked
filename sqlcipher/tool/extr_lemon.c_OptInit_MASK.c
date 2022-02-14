
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_options {int dummy; } ;
typedef int FILE ;


 int FUNC_0 () ;
 char** VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (int,int *) ;
 scalar_t__ FUNC_4 (int,int *) ;
 struct s_options* VAR_2 ;
 scalar_t__ FUNC_5 (char*,char) ;

int FUNC_6(char **VAR_3, struct s_options *VAR_4, FILE *VAR_5)
{
  int VAR_6 = 0;
  VAR_0 = VAR_3;
  VAR_2 = VAR_4;
  VAR_1 = VAR_5;
  if( VAR_0 && *VAR_0 && VAR_2 ){
    int VAR_7;
    for(VAR_7=1; VAR_0[VAR_7]; VAR_7++){
      if( VAR_0[VAR_7][0]=='+' || VAR_0[VAR_7][0]=='-' ){
        VAR_6 += FUNC_3(VAR_7,VAR_5);
      }else if( FUNC_5(VAR_0[VAR_7],'=') ){
        VAR_6 += FUNC_4(VAR_7,VAR_5);
      }
    }
  }
  if( VAR_6>0 ){
    FUNC_2(VAR_5,"Valid command line options for \"%s\" are:\n",*VAR_3);
    FUNC_0();
    FUNC_1(1);
  }
  return 0;
}
