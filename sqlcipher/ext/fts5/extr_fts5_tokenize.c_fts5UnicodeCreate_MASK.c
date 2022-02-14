
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char eRemoveDiacritic; int nFold; scalar_t__ aFold; } ;
typedef TYPE_1__ Unicode61Tokenizer ;
typedef int Fts5Tokenizer ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char const*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (TYPE_1__*,char const*) ;

__attribute__((used)) static int FUNC_9(
  void *VAR_6,
  const char **VAR_7, int VAR_8,
  Fts5Tokenizer **VAR_9
){
  int VAR_10 = VAR_5;
  Unicode61Tokenizer *VAR_11 = 0;

  FUNC_0(VAR_6);

  if( VAR_8%2 ){
    VAR_10 = VAR_3;
  }else{
    VAR_11 = (Unicode61Tokenizer*)FUNC_5(sizeof(Unicode61Tokenizer));
    if( VAR_11 ){
      const char *VAR_12 = "L* N* Co";
      int VAR_13;
      FUNC_4(VAR_11, 0, sizeof(Unicode61Tokenizer));

      VAR_11->eRemoveDiacritic = VAR_2;
      VAR_11->nFold = 64;
      VAR_11->aFold = FUNC_6(VAR_11->nFold * sizeof(char));
      if( VAR_11->aFold==0 ){
        VAR_10 = VAR_4;
      }


      for(VAR_13=0; VAR_10==VAR_5 && VAR_13<VAR_8; VAR_13+=2){
        if( 0==FUNC_7(VAR_7[VAR_13], "categories") ){
          VAR_12 = VAR_7[VAR_13+1];
        }
      }

      if( VAR_10==VAR_5 ){
        VAR_10 = FUNC_8(VAR_11, VAR_12);
      }

      for(VAR_13=0; VAR_10==VAR_5 && VAR_13<VAR_8; VAR_13+=2){
        const char *VAR_14 = VAR_7[VAR_13+1];
        if( 0==FUNC_7(VAR_7[VAR_13], "remove_diacritics") ){
          if( (VAR_14[0]!='0' && VAR_14[0]!='1' && VAR_14[0]!='2') || VAR_14[1] ){
            VAR_10 = VAR_3;
          }else{
            VAR_11->eRemoveDiacritic = (VAR_14[0] - '0');
            FUNC_1( VAR_11->eRemoveDiacritic==VAR_1
                 || VAR_11->eRemoveDiacritic==VAR_2
                 || VAR_11->eRemoveDiacritic==VAR_0
            );
          }
        }else
        if( 0==FUNC_7(VAR_7[VAR_13], "tokenchars") ){
          VAR_10 = FUNC_2(VAR_11, VAR_14, 1);
        }else
        if( 0==FUNC_7(VAR_7[VAR_13], "separators") ){
          VAR_10 = FUNC_2(VAR_11, VAR_14, 0);
        }else
        if( 0==FUNC_7(VAR_7[VAR_13], "categories") ){

        }else{
          VAR_10 = VAR_3;
        }
      }

    }else{
      VAR_10 = VAR_4;
    }
    if( VAR_10!=VAR_5 ){
      FUNC_3((Fts5Tokenizer*)VAR_11);
      VAR_11 = 0;
    }
    *VAR_9 = (Fts5Tokenizer*)VAR_11;
  }
  return VAR_10;
}
