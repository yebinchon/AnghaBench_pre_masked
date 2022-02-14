
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* aiException; int nException; } ;
typedef TYPE_1__ unicode_tokenizer ;


 int FUNC_0 (unsigned char const*,unsigned char const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int* FUNC_4 (int*,int) ;

__attribute__((used)) static int FUNC_5(
  unicode_tokenizer *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int VAR_5
){
  const unsigned char *VAR_6 = (const unsigned char *)VAR_4;
  const unsigned char *VAR_7 = &VAR_6[VAR_5];
  unsigned int VAR_8;
  int VAR_9 = 0;

  FUNC_1( VAR_3==0 || VAR_3==1 );

  while( VAR_6<VAR_7 ){
    FUNC_0(VAR_6, VAR_7, VAR_8);
    FUNC_1( (FUNC_2((int)VAR_8) & 0xFFFFFFFE)==0 );
    if( FUNC_2((int)VAR_8)!=VAR_3
     && FUNC_3((int)VAR_8)==0
    ){
      VAR_9++;
    }
  }

  if( VAR_9 ){
    int *VAR_10;
    int VAR_11;

    VAR_10 = FUNC_4(VAR_2->aiException,(VAR_2->nException+VAR_9)*sizeof(int));
    if( VAR_10==0 ) return VAR_0;
    VAR_11 = VAR_2->nException;

    VAR_6 = (const unsigned char *)VAR_4;
    while( VAR_6<VAR_7 ){
      FUNC_0(VAR_6, VAR_7, VAR_8);
      if( FUNC_2((int)VAR_8)!=VAR_3
       && FUNC_3((int)VAR_8)==0
      ){
        int VAR_12, VAR_13;
        for(VAR_12=0; VAR_12<VAR_11 && VAR_10[VAR_12]<(int)VAR_8; VAR_12++);
        for(VAR_13=VAR_11; VAR_13>VAR_12; VAR_13--) VAR_10[VAR_13] = VAR_10[VAR_13-1];
        VAR_10[VAR_12] = (int)VAR_8;
        VAR_11++;
      }
    }
    VAR_2->aiException = VAR_10;
    VAR_2->nException = VAR_11;
  }

  return VAR_1;
}
