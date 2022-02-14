
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* xCreate ) (int ,char const**,int,int **) ;} ;
typedef TYPE_1__ fts5_tokenizer ;
struct TYPE_6__ {TYPE_1__ x; int pUserData; } ;
typedef TYPE_2__ Fts5TokenizerModule ;
typedef int Fts5Tokenizer ;
typedef int Fts5Global ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,char const*) ;
 char* FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char const**,int,int **) ;

int FUNC_4(
  Fts5Global *VAR_2,
  const char **VAR_3,
  int VAR_4,
  Fts5Tokenizer **VAR_5,
  fts5_tokenizer **VAR_6,
  char **VAR_7
){
  Fts5TokenizerModule *VAR_8;
  int VAR_9 = VAR_1;

  VAR_8 = FUNC_1(VAR_2, VAR_4==0 ? 0 : VAR_3[0]);
  if( VAR_8==0 ){
    FUNC_0( VAR_4>0 );
    VAR_9 = VAR_0;
    *VAR_7 = FUNC_2("no such tokenizer: %s", VAR_3[0]);
  }else{
    VAR_9 = VAR_8->x.xCreate(VAR_8->pUserData, &VAR_3[1], (VAR_4?VAR_4-1:0), VAR_5);
    *VAR_6 = &VAR_8->x;
    if( VAR_9!=VAR_1 && VAR_7 ){
      *VAR_7 = FUNC_2("error in tokenizer constructor");
    }
  }

  if( VAR_9!=VAR_1 ){
    *VAR_6 = 0;
    *VAR_5 = 0;
  }

  return VAR_9;
}
