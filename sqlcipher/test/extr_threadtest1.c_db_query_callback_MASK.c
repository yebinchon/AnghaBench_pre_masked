
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct QueryResult {int nElem; int nAlloc; char* zFile; int * azElem; } ;


 int FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(
  void *VAR_1,
  int VAR_2,
  char **VAR_3,
  char **VAR_4
){
  struct QueryResult *VAR_5 = (struct QueryResult*)VAR_1;
  int VAR_6;
  if( VAR_5->nElem + VAR_2 >= VAR_5->nAlloc ){
    if( VAR_5->nAlloc==0 ){
      VAR_5->nAlloc = VAR_2+1;
    }else{
      VAR_5->nAlloc = VAR_5->nAlloc*2 + VAR_2 + 1;
    }
    VAR_5->azElem = FUNC_1( VAR_5->azElem, VAR_5->nAlloc*sizeof(char*));
    if( VAR_5->azElem==0 ){
      FUNC_0(VAR_0,"%s: malloc failed\n", VAR_5->zFile);
      return 1;
    }
  }
  if( VAR_3==0 ) return 0;
  for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
    VAR_5->azElem[VAR_5->nElem++] =
        FUNC_2("%s",VAR_3[VAR_6] ? VAR_3[VAR_6] : "");
  }
  return 0;
}
