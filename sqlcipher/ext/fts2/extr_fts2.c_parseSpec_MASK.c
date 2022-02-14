
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* zDb; char* zName; size_t nColumn; char** azColumn; char** azContentColumn; int azTokenizer; } ;
typedef TYPE_1__ TableSpec ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char*,char**) ;
 int FUNC_4 (char) ;
 void* FUNC_5 (int) ;
 char* FUNC_6 (char*,int,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char const* const) ;
 scalar_t__ FUNC_9 (char const* const) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*,int*) ;

__attribute__((used)) static int FUNC_12(TableSpec *VAR_2, int VAR_3, const char *const*VAR_4,
                     char**VAR_5){
  int VAR_6, VAR_7;
  char *VAR_8, *VAR_9;
  char **VAR_10;
  const char *VAR_11 = 0;

  FUNC_1( VAR_3>=3 );
  FUNC_0(VAR_2);
  for(VAR_6=VAR_7=0; VAR_6<VAR_3; VAR_6++){
    VAR_7 += FUNC_9(VAR_4[VAR_6]) + 1;
  }
  VAR_10 = FUNC_5( sizeof(char*)*VAR_3 + VAR_7 );
  if( VAR_10==0 ){
    return VAR_0;
  }
  VAR_8 = (char*)&VAR_10[VAR_3];
  for(VAR_6=0; VAR_6<VAR_3; VAR_6++){
    VAR_10[VAR_6] = VAR_8;
    FUNC_8(VAR_8, VAR_4[VAR_6]);
    VAR_8 += FUNC_9(VAR_8)+1;
  }




  VAR_2->zDb = VAR_10[1];
  VAR_2->zName = VAR_10[2];
  VAR_2->nColumn = 0;
  VAR_2->azColumn = VAR_10;
  VAR_11 = "tokenize simple";
  for(VAR_6=3; VAR_6<VAR_3; ++VAR_6){
    if( FUNC_7(VAR_10[VAR_6],"tokenize") ){
      VAR_11 = VAR_10[VAR_6];
    }else{
      VAR_8 = VAR_10[VAR_2->nColumn] = FUNC_3(VAR_10[VAR_6], &VAR_9);
      VAR_2->nColumn++;
    }
  }
  if( VAR_2->nColumn==0 ){
    VAR_10[0] = "content";
    VAR_2->nColumn = 1;
  }
  VAR_2->azContentColumn = FUNC_5( VAR_2->nColumn * sizeof(char *) );
  if( VAR_2->azContentColumn==0 ){
    FUNC_2(VAR_2);
    return VAR_0;
  }
  for(VAR_6=0; VAR_6<VAR_2->nColumn; VAR_6++){
    char *VAR_12;
    VAR_2->azContentColumn[VAR_6] = FUNC_6("c%d%s", VAR_6, VAR_10[VAR_6]);
    for (VAR_12 = VAR_2->azContentColumn[VAR_6]; *VAR_12 ; ++VAR_12) {
      if( !FUNC_4(*VAR_12) ) *VAR_12 = '_';
    }
  }




  VAR_2->azTokenizer = FUNC_11(VAR_11, &VAR_7);
  FUNC_10(VAR_2->azTokenizer);

  return VAR_1;
}
