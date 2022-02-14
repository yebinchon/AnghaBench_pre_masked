
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int fts5_extension_function ;
typedef int fts5_api ;
struct TYPE_5__ {char* zFunc; void (* xDestroy ) (void*) ;struct TYPE_5__* pNext; int xFunc; void* pUserData; TYPE_1__* pGlobal; } ;
struct TYPE_4__ {TYPE_2__* pAux; int db; } ;
typedef TYPE_1__ Fts5Global ;
typedef TYPE_2__ Fts5Auxiliary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char const*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
  fts5_api *VAR_2,
  const char *VAR_3,
  void *VAR_4,
  fts5_extension_function VAR_5,
  void(*VAR_6)(void*)
){
  Fts5Global *VAR_7 = (Fts5Global*)VAR_2;
  int VAR_8 = FUNC_3(VAR_7->db, VAR_3, -1);
  if( VAR_8==VAR_1 ){
    Fts5Auxiliary *VAR_9;
    sqlite3_int64 VAR_10;
    sqlite3_int64 VAR_11;

    VAR_10 = FUNC_4(VAR_3) + 1;
    VAR_11 = sizeof(Fts5Auxiliary) + VAR_10;
    VAR_9 = (Fts5Auxiliary*)FUNC_2(VAR_11);
    if( VAR_9 ){
      FUNC_1(VAR_9, 0, (size_t)VAR_11);
      VAR_9->zFunc = (char*)&VAR_9[1];
      FUNC_0(VAR_9->zFunc, VAR_3, VAR_10);
      VAR_9->pGlobal = VAR_7;
      VAR_9->pUserData = VAR_4;
      VAR_9->xFunc = VAR_5;
      VAR_9->xDestroy = VAR_6;
      VAR_9->pNext = VAR_7->pAux;
      VAR_7->pAux = VAR_9;
    }else{
      VAR_8 = VAR_0;
    }
  }

  return VAR_8;
}
