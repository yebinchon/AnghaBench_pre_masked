
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ pVtab; } ;
typedef TYPE_1__ sqlite3_vtab_cursor ;
struct TYPE_12__ {char cTerm; scalar_t__ n; } ;
struct TYPE_11__ {scalar_t__* aLen; char** azVal; int iRowid; TYPE_6__ rdr; } ;
struct TYPE_10__ {int nCol; } ;
typedef TYPE_2__ CsvTable ;
typedef TYPE_3__ CsvCursor ;


 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*) ;
 char* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_2){
  CsvCursor *VAR_3 = (CsvCursor*)VAR_2;
  CsvTable *VAR_4 = (CsvTable*)VAR_2->pVtab;
  int VAR_5 = 0;
  char *VAR_6;
  do{
    VAR_6 = FUNC_1(&VAR_3->rdr);
    if( VAR_6==0 ){
      break;
    }
    if( VAR_5<VAR_4->nCol ){
      if( VAR_3->aLen[VAR_5] < VAR_3->rdr.n+1 ){
        char *VAR_7 = FUNC_5(VAR_3->azVal[VAR_5], VAR_3->rdr.n+1);
        if( VAR_7==0 ){
          FUNC_0(&VAR_3->rdr, "out of memory");
          FUNC_2(VAR_4, &VAR_3->rdr);
          break;
        }
        VAR_3->azVal[VAR_5] = VAR_7;
        VAR_3->aLen[VAR_5] = VAR_3->rdr.n+1;
      }
      FUNC_3(VAR_3->azVal[VAR_5], VAR_6, VAR_3->rdr.n+1);
      VAR_5++;
    }
  }while( VAR_3->rdr.cTerm==',' );
  if( VAR_6==0 || (VAR_3->rdr.cTerm==VAR_0 && VAR_5<VAR_4->nCol) ){
    VAR_3->iRowid = -1;
  }else{
    VAR_3->iRowid++;
    while( VAR_5<VAR_4->nCol ){
      FUNC_4(VAR_3->azVal[VAR_5]);
      VAR_3->azVal[VAR_5] = 0;
      VAR_3->aLen[VAR_5] = 0;
      VAR_5++;
    }
  }
  return VAR_1;
}
