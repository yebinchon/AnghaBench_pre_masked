
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {unsigned char* aTokenChar; char* aFold; int nFold; int eRemoveDiacritic; } ;
typedef TYPE_1__ Unicode61Tokenizer ;
typedef int Fts5Tokenizer ;


 int FUNC_0 (unsigned char*,unsigned char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(
  Fts5Tokenizer *VAR_3,
  void *VAR_4,
  int VAR_5,
  const char *VAR_6, int VAR_7,
  int (*VAR_8)(void*, int, const char*, int VAR_9, int VAR_10, int VAR_11)
){
  Unicode61Tokenizer *VAR_12 = (Unicode61Tokenizer*)VAR_3;
  int VAR_13 = VAR_2;
  unsigned char *VAR_14 = VAR_12->aTokenChar;

  unsigned char *VAR_15 = (unsigned char*)&VAR_6[VAR_7];
  unsigned char *VAR_16 = (unsigned char *)VAR_6;


  char *VAR_17 = VAR_12->aFold;
  int VAR_18 = VAR_12->nFold;
  const char *VAR_19 = &VAR_17[VAR_18-6];

  FUNC_1(VAR_5);



  while( VAR_13==VAR_2 ){
    u32 VAR_20;
    char *VAR_21 = VAR_17;
    int VAR_22;
    int VAR_23;


    while( 1 ){
      if( VAR_16>=VAR_15 ) goto tokenize_done;
      if( *VAR_16 & 0x80 ) {


        VAR_22 = VAR_16 - (unsigned char*)VAR_6;
        FUNC_0(VAR_16, VAR_15, VAR_20);
        if( FUNC_3(VAR_12, VAR_20) ){
          goto non_ascii_tokenchar;
        }
      }else{
        if( VAR_14[*VAR_16] ){
          VAR_22 = VAR_16 - (unsigned char*)VAR_6;
          goto ascii_tokenchar;
        }
        VAR_16++;
      }
    }



    while( VAR_16<VAR_15 ){



      if( VAR_21>VAR_19 ){
        VAR_17 = FUNC_8((sqlite3_int64)VAR_18*2);
        if( VAR_17==0 ){
          VAR_13 = VAR_1;
          goto tokenize_done;
        }
        VAR_21 = &VAR_17[VAR_21 - VAR_12->aFold];
        FUNC_4(VAR_17, VAR_12->aFold, VAR_18);
        FUNC_7(VAR_12->aFold);
        VAR_12->aFold = VAR_17;
        VAR_12->nFold = VAR_18 = VAR_18*2;
        VAR_19 = &VAR_17[VAR_18-6];
      }

      if( *VAR_16 & 0x80 ){


        FUNC_0(VAR_16, VAR_15, VAR_20);
        if( FUNC_3(VAR_12,VAR_20)||FUNC_6(VAR_20) ){
 non_ascii_tokenchar:
          VAR_20 = FUNC_5(VAR_20, VAR_12->eRemoveDiacritic);
          if( VAR_20 ) FUNC_2(VAR_21, VAR_20);
        }else{
          break;
        }
      }else if( VAR_14[*VAR_16]==0 ){

        break;
      }else{
 ascii_tokenchar:
        if( *VAR_16>='A' && *VAR_16<='Z' ){
          *VAR_21++ = *VAR_16 + 32;
        }else{
          *VAR_21++ = *VAR_16;
        }
        VAR_16++;
      }
      VAR_23 = VAR_16 - (unsigned char*)VAR_6;
    }


    VAR_13 = VAR_8(VAR_4, 0, VAR_17, VAR_21-VAR_17, VAR_22, VAR_23);
  }

 tokenize_done:
  if( VAR_13==VAR_0 ) VAR_13 = VAR_2;
  return VAR_13;
}
