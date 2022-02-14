
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
typedef int i16 ;
struct TYPE_4__ {char const** azColl; int* aiColumn; int nColumn; int nKeyCol; int * aSortOrder; int * aiRowLogEst; } ;
typedef int LogEst ;
typedef TYPE_1__ Index ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

Index *FUNC_2(
  sqlite3 *VAR_0,
  i16 VAR_1,
  int VAR_2,
  char **VAR_3
){
  Index *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_0(sizeof(Index)) +
          FUNC_0(sizeof(char*)*VAR_1) +
          FUNC_0(sizeof(LogEst)*(VAR_1+1) +
                 sizeof(i16)*VAR_1 +
                 sizeof(u8)*VAR_1);
  VAR_4 = FUNC_1(VAR_0, VAR_5 + VAR_2);
  if( VAR_4 ){
    char *VAR_6 = ((char*)VAR_4)+FUNC_0(sizeof(Index));
    VAR_4->azColl = (const char**)VAR_6; VAR_6 += FUNC_0(sizeof(char*)*VAR_1);
    VAR_4->aiRowLogEst = (LogEst*)VAR_6; VAR_6 += sizeof(LogEst)*(VAR_1+1);
    VAR_4->aiColumn = (i16*)VAR_6; VAR_6 += sizeof(i16)*VAR_1;
    VAR_4->aSortOrder = (u8*)VAR_6;
    VAR_4->nColumn = VAR_1;
    VAR_4->nKeyCol = VAR_1 - 1;
    *VAR_3 = ((char*)VAR_4) + VAR_5;
  }
  return VAR_4;
}
