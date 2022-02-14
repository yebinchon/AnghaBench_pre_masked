
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
struct TYPE_3__ {int pgsz; int nHashSize; int nAutomerge; int nUsermerge; int nCrisisMerge; char* zRank; char* zRankArgs; } ;
typedef TYPE_1__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char**,char**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(
  Fts5Config *VAR_6,
  const char *VAR_7,
  sqlite3_value *VAR_8,
  int *VAR_9
){
  int VAR_10 = VAR_5;

  if( 0==FUNC_2(VAR_7, "pgsz") ){
    int VAR_11 = 0;
    if( VAR_4==FUNC_4(VAR_8) ){
      VAR_11 = FUNC_3(VAR_8);
    }
    if( VAR_11<=0 || VAR_11>VAR_2 ){
      *VAR_9 = 1;
    }else{
      VAR_6->pgsz = VAR_11;
    }
  }

  else if( 0==FUNC_2(VAR_7, "hashsize") ){
    int VAR_12 = -1;
    if( VAR_4==FUNC_4(VAR_8) ){
      VAR_12 = FUNC_3(VAR_8);
    }
    if( VAR_12<=0 ){
      *VAR_9 = 1;
    }else{
      VAR_6->nHashSize = VAR_12;
    }
  }

  else if( 0==FUNC_2(VAR_7, "automerge") ){
    int VAR_13 = -1;
    if( VAR_4==FUNC_4(VAR_8) ){
      VAR_13 = FUNC_3(VAR_8);
    }
    if( VAR_13<0 || VAR_13>64 ){
      *VAR_9 = 1;
    }else{
      if( VAR_13==1 ) VAR_13 = VAR_0;
      VAR_6->nAutomerge = VAR_13;
    }
  }

  else if( 0==FUNC_2(VAR_7, "usermerge") ){
    int VAR_14 = -1;
    if( VAR_4==FUNC_4(VAR_8) ){
      VAR_14 = FUNC_3(VAR_8);
    }
    if( VAR_14<2 || VAR_14>16 ){
      *VAR_9 = 1;
    }else{
      VAR_6->nUsermerge = VAR_14;
    }
  }

  else if( 0==FUNC_2(VAR_7, "crisismerge") ){
    int VAR_15 = -1;
    if( VAR_4==FUNC_4(VAR_8) ){
      VAR_15 = FUNC_3(VAR_8);
    }
    if( VAR_15<0 ){
      *VAR_9 = 1;
    }else{
      if( VAR_15<=1 ) VAR_15 = VAR_1;
      VAR_6->nCrisisMerge = VAR_15;
    }
  }

  else if( 0==FUNC_2(VAR_7, "rank") ){
    const char *VAR_16 = (const char*)FUNC_5(VAR_8);
    char *VAR_17;
    char *VAR_18;
    VAR_10 = FUNC_0(VAR_16, &VAR_17, &VAR_18);
    if( VAR_10==VAR_5 ){
      FUNC_1(VAR_6->zRank);
      FUNC_1(VAR_6->zRankArgs);
      VAR_6->zRank = VAR_17;
      VAR_6->zRankArgs = VAR_18;
    }else if( VAR_10==VAR_3 ){
      VAR_10 = VAR_5;
      *VAR_9 = 1;
    }
  }else{
    *VAR_9 = 1;
  }
  return VAR_10;
}
