
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct Builtin TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fts5_extension_function ;
struct TYPE_5__ {int (* xCreateFunction ) (TYPE_1__*,char const*,void*,int ,void (*) (void*)) ;} ;
typedef TYPE_1__ fts5_api ;
struct Builtin {char const* zFunc; void* pUserData; int xFunc; void (* xDestroy ) (void*) ;} ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,void*,int ,void (*) (void*)) ;

int FUNC_2(fts5_api *VAR_4){
  struct Builtin {
    const char *zFunc;
    void *pUserData;
    fts5_extension_function xFunc;
    void (*xDestroy)(void*);
  } VAR_5 [] = {
    { "snippet", 0, VAR_3, 0 },
    { "highlight", 0, VAR_2, 0 },
    { "bm25", 0, VAR_1, 0 },
  };
  int VAR_6 = VAR_0;
  int VAR_7;

  for(VAR_7=0; VAR_6==VAR_0 && VAR_7<FUNC_0(VAR_5); VAR_7++){
    VAR_6 = VAR_4->xCreateFunction(VAR_4,
        VAR_5[VAR_7].zFunc,
        VAR_5[VAR_7].pUserData,
        VAR_5[VAR_7].xFunc,
        VAR_5[VAR_7].xDestroy
    );
  }

  return VAR_6;
}
