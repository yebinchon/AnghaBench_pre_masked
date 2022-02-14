
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_7__ {scalar_t__* azVal; } ;
struct TYPE_6__ {int nCol; } ;
typedef TYPE_2__ CsvTable ;
typedef TYPE_3__ CsvCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(
  sqlite3_vtab_cursor *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4
){
  CsvCursor *VAR_5 = (CsvCursor*)VAR_2;
  CsvTable *VAR_6 = (CsvTable*)VAR_2->pVtab;
  if( VAR_4>=0 && VAR_4<VAR_6->nCol && VAR_5->azVal[VAR_4]!=0 ){
    FUNC_0(VAR_3, VAR_5->azVal[VAR_4], -1, VAR_1);
  }
  return VAR_0;
}
