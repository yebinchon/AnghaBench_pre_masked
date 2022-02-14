
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int nAlloc; char* zBuf; scalar_t__ bStatic; scalar_t__ nUsed; scalar_t__ bErr; } ;
typedef TYPE_1__ JsonString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(JsonString *VAR_2, u32 VAR_3){
  u64 VAR_4 = VAR_3<VAR_2->nAlloc ? VAR_2->nAlloc*2 : VAR_2->nAlloc+VAR_3+10;
  char *VAR_5;
  if( VAR_2->bStatic ){
    if( VAR_2->bErr ) return 1;
    VAR_5 = FUNC_2(VAR_4);
    if( VAR_5==0 ){
      FUNC_0(VAR_2);
      return VAR_0;
    }
    FUNC_1(VAR_5, VAR_2->zBuf, (size_t)VAR_2->nUsed);
    VAR_2->zBuf = VAR_5;
    VAR_2->bStatic = 0;
  }else{
    VAR_5 = FUNC_3(VAR_2->zBuf, VAR_4);
    if( VAR_5==0 ){
      FUNC_0(VAR_2);
      return VAR_0;
    }
    VAR_2->zBuf = VAR_5;
  }
  VAR_2->nAlloc = VAR_4;
  return VAR_1;
}
