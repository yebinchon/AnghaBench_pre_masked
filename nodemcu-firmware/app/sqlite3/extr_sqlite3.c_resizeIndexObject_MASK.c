
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char const* u8 ;
typedef int sqlite3 ;
typedef char const* i16 ;
struct TYPE_3__ {int nColumn; int isResized; char const** azColl; char const** aiColumn; char const** aSortOrder; } ;
typedef TYPE_1__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const**,int) ;
 char* FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(sqlite3 *VAR_2, Index *VAR_3, int VAR_4){
  char *VAR_5;
  int VAR_6;
  if( VAR_3->nColumn>=VAR_4 ) return VAR_1;
  FUNC_0( VAR_3->isResized==0 );
  VAR_6 = (sizeof(char*) + sizeof(i16) + 1)*VAR_4;
  VAR_5 = FUNC_2(VAR_2, VAR_6);
  if( VAR_5==0 ) return VAR_0;
  FUNC_1(VAR_5, VAR_3->azColl, sizeof(char*)*VAR_3->nColumn);
  VAR_3->azColl = (const char**)VAR_5;
  VAR_5 += sizeof(char*)*VAR_4;
  FUNC_1(VAR_5, VAR_3->aiColumn, sizeof(i16)*VAR_3->nColumn);
  VAR_3->aiColumn = (i16*)VAR_5;
  VAR_5 += sizeof(i16)*VAR_4;
  FUNC_1(VAR_5, VAR_3->aSortOrder, VAR_3->nColumn);
  VAR_3->aSortOrder = (u8*)VAR_5;
  VAR_3->nColumn = VAR_4;
  VAR_3->isResized = 1;
  return VAR_1;
}
