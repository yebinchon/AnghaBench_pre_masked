
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_4__ {int iNodeSize; int nBytesPerCell; int zName; int zDb; } ;
typedef TYPE_1__ Rtree ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int FUNC_5(
  sqlite3 *VAR_3,
  Rtree *VAR_4,
  int VAR_5,
  char **VAR_6
){
  int VAR_7;
  char *VAR_8;
  if( VAR_5 ){
    int VAR_9 = 0;
    VAR_8 = FUNC_4("PRAGMA %Q.page_size", VAR_4->zDb);
    VAR_7 = FUNC_1(VAR_3, VAR_8, &VAR_9);
    if( VAR_7==VAR_2 ){
      VAR_4->iNodeSize = VAR_9-64;
      if( (4+VAR_4->nBytesPerCell*VAR_0)<VAR_4->iNodeSize ){
        VAR_4->iNodeSize = 4+VAR_4->nBytesPerCell*VAR_0;
      }
    }else{
      *VAR_6 = FUNC_4("%s", FUNC_2(VAR_3));
    }
  }else{
    VAR_8 = FUNC_4(
        "SELECT length(data) FROM '%q'.'%q_node' WHERE nodeno = 1",
        VAR_4->zDb, VAR_4->zName
    );
    VAR_7 = FUNC_1(VAR_3, VAR_8, &VAR_4->iNodeSize);
    if( VAR_7!=VAR_2 ){
      *VAR_6 = FUNC_4("%s", FUNC_2(VAR_3));
    }else if( VAR_4->iNodeSize<(512-64) ){
      VAR_7 = VAR_1;
      FUNC_0(VAR_4);
      *VAR_6 = FUNC_4("undersize RTree blobs in \"%q_node\"",
                               VAR_4->zName);
    }
  }

  FUNC_3(VAR_8);
  return VAR_7;
}
