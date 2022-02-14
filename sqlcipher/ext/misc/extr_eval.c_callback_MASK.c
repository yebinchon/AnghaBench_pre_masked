
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct EvalResult {scalar_t__ nUsed; scalar_t__ szSep; scalar_t__ nAlloc; char const* zSep; int * z; } ;
typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (struct EvalResult*,int ,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, int VAR_1, char **VAR_2, char **VAR_3){
  struct EvalResult *VAR_4 = (struct EvalResult*)VAR_0;
  int VAR_5;
  if( VAR_2==0 ) return 0;
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    const char *VAR_6 = VAR_2[VAR_5] ? VAR_2[VAR_5] : "";
    size_t VAR_7 = FUNC_4(VAR_6);
    if( (sqlite3_int64)VAR_7+VAR_4->nUsed+VAR_4->szSep+1 > VAR_4->nAlloc ){
      char *VAR_8;
      VAR_4->nAlloc = VAR_4->nAlloc*2 + VAR_7 + VAR_4->szSep + 1;



      VAR_8 = VAR_4->nAlloc<=0x7fffffff ? FUNC_3(VAR_4->z, VAR_4->nAlloc) : 0;
      if( VAR_8==0 ){
        FUNC_2(VAR_4->z);
        FUNC_1(VAR_4, 0, sizeof(*VAR_4));
        return 1;
      }
      VAR_4->z = VAR_8;
    }
    if( VAR_4->nUsed>0 ){
      FUNC_0(&VAR_4->z[VAR_4->nUsed], VAR_4->zSep, VAR_4->szSep);
      VAR_4->nUsed += VAR_4->szSep;
    }
    FUNC_0(&VAR_4->z[VAR_4->nUsed], VAR_6, VAR_7);
    VAR_4->nUsed += VAR_7;
  }
  return 0;
}
