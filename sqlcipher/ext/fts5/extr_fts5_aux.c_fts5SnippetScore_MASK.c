
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_3__ {int (* xInstCount ) (int *,int*) ;int (* xInst ) (int *,int,int*,int*,int*) ;int (* xPhraseSize ) (int *,int) ;} ;
typedef TYPE_1__ Fts5ExtensionApi ;
typedef int Fts5Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int,int*,int*,int*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(
  const Fts5ExtensionApi *VAR_1,
  Fts5Context *VAR_2,
  int VAR_3,
  unsigned char *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7,
  int *VAR_8,
  int *VAR_9
){
  int VAR_10;
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  int VAR_15 = -1;
  int VAR_16;
  int VAR_17 = 0;
  int VAR_18 = 0;
  sqlite3_int64 VAR_19 = (sqlite3_int64)VAR_6 + VAR_7;

  VAR_10 = VAR_1->xInstCount(VAR_2, &VAR_16);
  for(VAR_11=0; VAR_11<VAR_16 && VAR_10==VAR_0; VAR_11++){
    VAR_10 = VAR_1->xInst(VAR_2, VAR_11, &VAR_12, &VAR_13, &VAR_14);
    if( VAR_10==VAR_0 && VAR_13==VAR_5 && VAR_14>=VAR_6 && VAR_14<VAR_19 ){
      VAR_17 += (VAR_4[VAR_12] ? 1 : 1000);
      VAR_4[VAR_12] = 1;
      if( VAR_15<0 ) VAR_15 = VAR_14;
      VAR_18 = VAR_14 + VAR_1->xPhraseSize(VAR_2, VAR_12);
    }
  }

  *VAR_8 = VAR_17;
  if( VAR_9 ){
    sqlite3_int64 VAR_20 = VAR_15 - (VAR_7 - (VAR_18-VAR_15)) / 2;
    if( (VAR_20+VAR_7)>VAR_3 ) VAR_20 = VAR_3 - VAR_7;
    if( VAR_20<0 ) VAR_20 = 0;
    *VAR_9 = (int)VAR_20;
  }

  return VAR_10;
}
