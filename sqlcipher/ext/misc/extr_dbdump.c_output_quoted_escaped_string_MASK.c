
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pArg; int (* xCallback ) (char*,int ) ;} ;
typedef TYPE_1__ DState ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (char const*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_9(DState *VAR_0, const char *VAR_1){
  int VAR_2;
  char VAR_3;
  for(VAR_2=0; (VAR_3 = VAR_1[VAR_2])!=0 && VAR_3!='\'' && VAR_3!='\n' && VAR_3!='\r'; VAR_2++){}
  if( VAR_3==0 ){
    FUNC_0(VAR_0,"'%s'",VAR_1);
  }else{
    const char *VAR_4 = 0;
    const char *VAR_5 = 0;
    int VAR_6 = 0;
    int VAR_7 = 0;
    char VAR_8[20], VAR_9[20];
    for(VAR_2=0; VAR_1[VAR_2]; VAR_2++){
      if( VAR_1[VAR_2]=='\n' ) VAR_6++;
      if( VAR_1[VAR_2]=='\r' ) VAR_7++;
    }
    if( VAR_6 ){
      VAR_0->xCallback("replace(", VAR_0->pArg);
      VAR_4 = FUNC_8(VAR_1, "\\n", "\\012", VAR_8);
    }
    if( VAR_7 ){
      VAR_0->xCallback("replace(", VAR_0->pArg);
      VAR_5 = FUNC_8(VAR_1, "\\r", "\\015", VAR_9);
    }
    VAR_0->xCallback("'", VAR_0->pArg);
    while( *VAR_1 ){
      for(VAR_2=0; (VAR_3 = VAR_1[VAR_2])!=0 && VAR_3!='\n' && VAR_3!='\r' && VAR_3!='\''; VAR_2++){}
      if( VAR_3=='\'' ) VAR_2++;
      if( VAR_2 ){
        FUNC_0(VAR_0, "%.*s", VAR_2, VAR_1);
        VAR_1 += VAR_2;
      }
      if( VAR_3=='\'' ){
        VAR_0->xCallback("'", VAR_0->pArg);
        continue;
      }
      if( VAR_3==0 ){
        break;
      }
      VAR_1++;
      if( VAR_3=='\n' ){
        VAR_0->xCallback(VAR_4, VAR_0->pArg);
        continue;
      }
      VAR_0->xCallback(VAR_5, VAR_0->pArg);
    }
    VAR_0->xCallback("'", VAR_0->pArg);
    if( VAR_7 ){
      FUNC_0(VAR_0, ",'%s',char(13))", VAR_5);
    }
    if( VAR_6 ){
      FUNC_0(VAR_0, ",'%s',char(10))", VAR_4);
    }
  }
}
