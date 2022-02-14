
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,int,char const*) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, const char *VAR_1, const char *VAR_2){
  while( VAR_2 && VAR_2[0] ){
    int VAR_3;
    for(VAR_3=0; VAR_2[VAR_3] && VAR_2[VAR_3]!='\n' && VAR_2[VAR_3]!='\r'; VAR_3++){}
    FUNC_0(VAR_0, "%s%.*s\n", VAR_1, VAR_3, VAR_2);
    VAR_2 += VAR_3;
    while( VAR_2[0]=='\n' || VAR_2[0]=='\r' ) VAR_2++;
  }
}
