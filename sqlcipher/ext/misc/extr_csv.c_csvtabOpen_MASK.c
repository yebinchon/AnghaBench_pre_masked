
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_7__ {char** azVal; int* aLen; int rdr; int base; } ;
struct TYPE_6__ {int nCol; int zData; int zFilename; } ;
typedef TYPE_1__ CsvTable ;
typedef TYPE_2__ CsvCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,size_t) ;
 TYPE_2__* FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_3, sqlite3_vtab_cursor **VAR_4){
  CsvTable *VAR_5 = (CsvTable*)VAR_3;
  CsvCursor *VAR_6;
  size_t VAR_7;
  VAR_7 = sizeof(*VAR_6) + (sizeof(char*)+sizeof(int))*VAR_5->nCol;
  VAR_6 = FUNC_3( VAR_7 );
  if( VAR_6==0 ) return VAR_1;
  FUNC_2(VAR_6, 0, VAR_7);
  VAR_6->azVal = (char**)&VAR_6[1];
  VAR_6->aLen = (int*)&VAR_6->azVal[VAR_5->nCol];
  *VAR_4 = &VAR_6->base;
  if( FUNC_0(&VAR_6->rdr, VAR_5->zFilename, VAR_5->zData) ){
    FUNC_1(VAR_5, &VAR_6->rdr);
    return VAR_0;
  }
  return VAR_2;
}
