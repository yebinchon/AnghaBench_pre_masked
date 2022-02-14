
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* aiException; int nException; unsigned char* aTokenChar; int* aCategory; } ;
typedef TYPE_1__ Unicode61Tokenizer ;


 int FUNC_0 (unsigned char const*,unsigned char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*,int) ;
 size_t FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int*,int) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
  Unicode61Tokenizer *VAR_2,
  const char *VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_1;
  int VAR_6 = (int)FUNC_6(VAR_3);
  int *VAR_7;

  if( VAR_6>0 ){
    VAR_7 = (int*)FUNC_5(VAR_2->aiException,
                                   (VAR_6+VAR_2->nException)*sizeof(int));
    if( VAR_7 ){
      int VAR_8 = VAR_2->nException;
      const unsigned char *VAR_9 = (const unsigned char*)VAR_3;
      const unsigned char *VAR_10 = (const unsigned char*)&VAR_3[VAR_6];
      while( VAR_9<VAR_10 ){
        u32 VAR_11;
        int VAR_12;
        FUNC_0(VAR_9, VAR_10, VAR_11);
        if( VAR_11<128 ){
          VAR_2->aTokenChar[VAR_11] = (unsigned char)VAR_4;
        }else{
          VAR_12 = VAR_2->aCategory[FUNC_3(VAR_11)];
          FUNC_1( (VAR_12==0 || VAR_12==1) );
          FUNC_1( (VAR_4==0 || VAR_4==1) );
          if( VAR_12!=VAR_4 && FUNC_4(VAR_11)==0 ){
            int VAR_13;
            for(VAR_13=0; VAR_13<VAR_8; VAR_13++){
              if( (u32)VAR_7[VAR_13]>VAR_11 ) break;
            }
            FUNC_2(&VAR_7[VAR_13+1], &VAR_7[VAR_13], (VAR_8-VAR_13)*sizeof(int));
            VAR_7[VAR_13] = VAR_11;
            VAR_8++;
          }
        }
      }
      VAR_2->aiException = VAR_7;
      VAR_2->nException = VAR_8;
    }else{
      VAR_5 = VAR_0;
    }
  }

  return VAR_5;
}
