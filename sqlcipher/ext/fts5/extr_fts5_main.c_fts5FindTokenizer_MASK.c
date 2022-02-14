
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fts5_tokenizer ;
typedef int fts5_api ;
struct TYPE_3__ {void* pUserData; int x; } ;
typedef TYPE_1__ Fts5TokenizerModule ;
typedef int Fts5Global ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(
  fts5_api *VAR_2,
  const char *VAR_3,
  void **VAR_4,
  fts5_tokenizer *VAR_5
){
  int VAR_6 = VAR_1;
  Fts5TokenizerModule *VAR_7;

  VAR_7 = FUNC_0((Fts5Global*)VAR_2, VAR_3);
  if( VAR_7 ){
    *VAR_5 = VAR_7->x;
    *VAR_4 = VAR_7->pUserData;
  }else{
    FUNC_1(VAR_5, 0, sizeof(fts5_tokenizer));
    VAR_6 = VAR_0;
  }

  return VAR_6;
}
