
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eRemoveDiacritic; } ;
typedef TYPE_1__ unicode_tokenizer ;
typedef int sqlite3_tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,int,char const*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  int VAR_3,
  const char * const *VAR_4,
  sqlite3_tokenizer **VAR_5
){
  unicode_tokenizer *VAR_6;
  int VAR_7;
  int VAR_8 = VAR_2;

  VAR_6 = (unicode_tokenizer *) FUNC_2(sizeof(unicode_tokenizer));
  if( VAR_6==((void*)0) ) return VAR_1;
  FUNC_1(VAR_6, 0, sizeof(unicode_tokenizer));
  VAR_6->eRemoveDiacritic = 1;

  for(VAR_7=0; VAR_8==VAR_2 && VAR_7<VAR_3; VAR_7++){
    const char *VAR_9 = VAR_4[VAR_7];
    int VAR_10 = (int)FUNC_3(VAR_9);

    if( VAR_10==19 && FUNC_0("remove_diacritics=1", VAR_9, 19)==0 ){
      VAR_6->eRemoveDiacritic = 1;
    }
    else if( VAR_10==19 && FUNC_0("remove_diacritics=0", VAR_9, 19)==0 ){
      VAR_6->eRemoveDiacritic = 0;
    }
    else if( VAR_10==19 && FUNC_0("remove_diacritics=2", VAR_9, 19)==0 ){
      VAR_6->eRemoveDiacritic = 2;
    }
    else if( VAR_10>=11 && FUNC_0("tokenchars=", VAR_9, 11)==0 ){
      VAR_8 = FUNC_4(VAR_6, 1, &VAR_9[11], VAR_10-11);
    }
    else if( VAR_10>=11 && FUNC_0("separators=", VAR_9, 11)==0 ){
      VAR_8 = FUNC_4(VAR_6, 0, &VAR_9[11], VAR_10-11);
    }
    else{

      VAR_8 = VAR_0;
    }
  }

  if( VAR_8!=VAR_2 ){
    FUNC_5((sqlite3_tokenizer *)VAR_6);
    VAR_6 = 0;
  }
  *VAR_5 = (sqlite3_tokenizer *)VAR_6;
  return VAR_8;
}
