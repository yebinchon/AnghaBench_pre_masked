
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* xFindTokenizer ) (TYPE_1__*,char const*,void**,TYPE_4__*) ;} ;
typedef TYPE_1__ fts5_api ;
struct TYPE_8__ {int (* xCreate ) (void*,char const**,int,int *) ;} ;
struct TYPE_7__ {int pTokenizer; TYPE_4__ tokenizer; } ;
typedef TYPE_2__ PorterTokenizer ;
typedef int Fts5Tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char const*,void**,TYPE_4__*) ;
 int FUNC_4 (void*,char const**,int,int *) ;

__attribute__((used)) static int FUNC_5(
  void *VAR_2,
  const char **VAR_3, int VAR_4,
  Fts5Tokenizer **VAR_5
){
  fts5_api *VAR_6 = (fts5_api*)VAR_2;
  int VAR_7 = VAR_1;
  PorterTokenizer *VAR_8;
  void *VAR_9 = 0;
  const char *VAR_10 = "unicode61";

  if( VAR_4>0 ){
    VAR_10 = VAR_3[0];
  }

  VAR_8 = (PorterTokenizer*)FUNC_2(sizeof(PorterTokenizer));
  if( VAR_8 ){
    FUNC_1(VAR_8, 0, sizeof(PorterTokenizer));
    VAR_7 = VAR_6->xFindTokenizer(VAR_6, VAR_10, &VAR_9, &VAR_8->tokenizer);
  }else{
    VAR_7 = VAR_0;
  }
  if( VAR_7==VAR_1 ){
    int VAR_11 = (VAR_4>0 ? VAR_4-1 : 0);
    const char **VAR_12 = (VAR_11 ? &VAR_3[1] : 0);
    VAR_7 = VAR_8->tokenizer.xCreate(VAR_9, VAR_12, VAR_11, &VAR_8->pTokenizer);
  }

  if( VAR_7!=VAR_1 ){
    FUNC_0((Fts5Tokenizer*)VAR_8);
    VAR_8 = 0;
  }
  *VAR_5 = (Fts5Tokenizer*)VAR_8;
  return VAR_7;
}
