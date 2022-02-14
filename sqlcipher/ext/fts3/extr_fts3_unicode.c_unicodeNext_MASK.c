
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int eRemoveDiacritic; } ;
typedef TYPE_2__ unicode_tokenizer ;
struct TYPE_5__ {scalar_t__ pTokenizer; } ;
struct TYPE_7__ {unsigned char* aInput; size_t iOff; size_t nInput; char* zToken; int nAlloc; int iToken; TYPE_1__ base; } ;
typedef TYPE_3__ unicode_cursor ;
typedef int sqlite3_tokenizer_cursor ;


 int FUNC_0 (unsigned char const*,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_tokenizer_cursor *VAR_3,
  const char **VAR_4,
  int *VAR_5,
  int *VAR_6,
  int *VAR_7,
  int *VAR_8
){
  unicode_cursor *VAR_9 = (unicode_cursor *)VAR_3;
  unicode_tokenizer *VAR_10 = ((unicode_tokenizer *)VAR_9->base.pTokenizer);
  unsigned int VAR_11 = 0;
  char *VAR_12;
  const unsigned char *VAR_13 = &VAR_9->aInput[VAR_9->iOff];
  const unsigned char *VAR_14 = VAR_13;
  const unsigned char *VAR_15;
  const unsigned char *VAR_16 = &VAR_9->aInput[VAR_9->nInput];




  while( VAR_13<VAR_16 ){
    FUNC_0(VAR_13, VAR_16, VAR_11);
    if( FUNC_5(VAR_10, (int)VAR_11) ) break;
    VAR_14 = VAR_13;
  }
  if( VAR_14>=VAR_16 ) return VAR_0;

  VAR_12 = VAR_9->zToken;
  do {
    int VAR_17;


    if( (VAR_12-VAR_9->zToken)>=(VAR_9->nAlloc-4) ){
      char *VAR_18 = FUNC_4(VAR_9->zToken, VAR_9->nAlloc+64);
      if( !VAR_18 ) return VAR_1;
      VAR_12 = &VAR_18[VAR_12 - VAR_9->zToken];
      VAR_9->zToken = VAR_18;
      VAR_9->nAlloc += 64;
    }


    VAR_15 = VAR_13;
    VAR_17 = FUNC_2((int)VAR_11, VAR_10->eRemoveDiacritic);
    if( VAR_17 ){
      FUNC_1(VAR_12, VAR_17);
    }


    if( VAR_13>=VAR_16 ) break;
    FUNC_0(VAR_13, VAR_16, VAR_11);
  }while( FUNC_5(VAR_10, (int)VAR_11)
       || FUNC_3((int)VAR_11)
  );


  VAR_9->iOff = (int)(VAR_13 - VAR_9->aInput);
  *VAR_4 = VAR_9->zToken;
  *VAR_5 = (int)(VAR_12 - VAR_9->zToken);
  *VAR_6 = (int)(VAR_14 - VAR_9->aInput);
  *VAR_7 = (int)(VAR_15 - VAR_9->aInput);
  *VAR_8 = VAR_9->iToken++;
  return VAR_2;
}
