
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_int64 ;
typedef int aFold ;
struct TYPE_2__ {unsigned char* aTokenChar; } ;
typedef int Fts5Tokenizer ;
typedef TYPE_1__ AsciiTokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(
  Fts5Tokenizer *VAR_3,
  void *VAR_4,
  int VAR_5,
  const char *VAR_6, int VAR_7,
  int (*VAR_8)(void*, int, const char*, int VAR_9, int VAR_10, int VAR_11)
){
  AsciiTokenizer *VAR_12 = (AsciiTokenizer*)VAR_3;
  int VAR_13 = VAR_2;
  int VAR_14;
  int VAR_15 = 0;

  char VAR_16[64];
  int VAR_17 = sizeof(VAR_16);
  char *VAR_18 = VAR_16;
  unsigned char *VAR_19 = VAR_12->aTokenChar;

  FUNC_0(VAR_5);

  while( VAR_15<VAR_7 && VAR_13==VAR_2 ){
    int VAR_20;


    while( VAR_15<VAR_7 && ((VAR_6[VAR_15]&0x80)==0 && VAR_19[(int)VAR_6[VAR_15]]==0) ){
      VAR_15++;
    }
    if( VAR_15==VAR_7 ) break;


    VAR_14 = VAR_15+1;
    while( VAR_14<VAR_7 && ((VAR_6[VAR_14]&0x80) || VAR_19[(int)VAR_6[VAR_14]] ) ){
      VAR_14++;
    }


    VAR_20 = VAR_14-VAR_15;
    if( VAR_20>VAR_17 ){
      if( VAR_18!=VAR_16 ) FUNC_2(VAR_18);
      VAR_18 = FUNC_3((sqlite3_int64)VAR_20*2);
      if( VAR_18==0 ){
        VAR_13 = VAR_1;
        break;
      }
      VAR_17 = VAR_20*2;
    }
    FUNC_1(VAR_18, &VAR_6[VAR_15], VAR_20);


    VAR_13 = VAR_8(VAR_4, 0, VAR_18, VAR_20, VAR_15, VAR_14);
    VAR_15 = VAR_14+1;
  }

  if( VAR_18!=VAR_16 ) FUNC_2(VAR_18);
  if( VAR_13==VAR_0 ) VAR_13 = VAR_2;
  return VAR_13;
}
