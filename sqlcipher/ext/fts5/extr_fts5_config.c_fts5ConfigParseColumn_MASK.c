
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* abUnindexed; size_t nCol; char** azCol; } ;
typedef TYPE_1__ Fts5Config ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(
  Fts5Config *VAR_4,
  char *VAR_5,
  char *VAR_6,
  char **VAR_7
){
  int VAR_8 = VAR_3;
  if( 0==FUNC_1(VAR_5, VAR_0)
   || 0==FUNC_1(VAR_5, VAR_1)
  ){
    *VAR_7 = FUNC_0("reserved fts5 column name: %s", VAR_5);
    VAR_8 = VAR_2;
  }else if( VAR_6 ){
    if( 0==FUNC_1(VAR_6, "unindexed") ){
      VAR_4->abUnindexed[VAR_4->nCol] = 1;
    }else{
      *VAR_7 = FUNC_0("unrecognized column option: %s", VAR_6);
      VAR_8 = VAR_2;
    }
  }

  VAR_4->azCol[VAR_4->nCol++] = VAR_5;
  return VAR_8;
}
