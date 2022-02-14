
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int fts5_tokenizer ;
typedef int fts5_api ;
struct TYPE_5__ {scalar_t__ pTok; TYPE_1__* pDfltTok; } ;
struct TYPE_4__ {char* zName; void (* xDestroy ) (void*) ;scalar_t__ pNext; int x; void* pUserData; } ;
typedef TYPE_1__ Fts5TokenizerModule ;
typedef TYPE_2__ Fts5Global ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  fts5_api *VAR_2,
  const char *VAR_3,
  void *VAR_4,
  fts5_tokenizer *VAR_5,
  void(*VAR_6)(void*)
){
  Fts5Global *VAR_7 = (Fts5Global*)VAR_2;
  Fts5TokenizerModule *VAR_8;
  sqlite3_int64 VAR_9;
  sqlite3_int64 VAR_10;
  int VAR_11 = VAR_1;

  VAR_9 = FUNC_3(VAR_3) + 1;
  VAR_10 = sizeof(Fts5TokenizerModule) + VAR_9;
  VAR_8 = (Fts5TokenizerModule*)FUNC_2(VAR_10);
  if( VAR_8 ){
    FUNC_1(VAR_8, 0, (size_t)VAR_10);
    VAR_8->zName = (char*)&VAR_8[1];
    FUNC_0(VAR_8->zName, VAR_3, VAR_9);
    VAR_8->pUserData = VAR_4;
    VAR_8->x = *VAR_5;
    VAR_8->xDestroy = VAR_6;
    VAR_8->pNext = VAR_7->pTok;
    VAR_7->pTok = VAR_8;
    if( VAR_8->pNext==0 ){
      VAR_7->pDfltTok = VAR_8;
    }
  }else{
    VAR_11 = VAR_0;
  }

  return VAR_11;
}
