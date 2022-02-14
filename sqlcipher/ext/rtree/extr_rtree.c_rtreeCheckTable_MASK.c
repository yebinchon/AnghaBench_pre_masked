
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int check ;
struct TYPE_7__ {char const* zDb; char const* zTab; scalar_t__ rc; int nDim; int bInt; char* zReport; int ** aCheckMapping; int * pGetNode; int nNonLeaf; int nLeaf; int * db; } ;
typedef TYPE_1__ RtreeCheck ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int) ;
 int * FUNC_4 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,char*,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
  sqlite3 *VAR_4,
  const char *VAR_5,
  const char *VAR_6,
  char **VAR_7
){
  RtreeCheck VAR_8;
  sqlite3_stmt *VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;


  FUNC_0(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.db = VAR_4;
  VAR_8.zDb = VAR_5;
  VAR_8.zTab = VAR_6;




  if( FUNC_9(VAR_4) ){
    VAR_8.rc = FUNC_7(VAR_4, "BEGIN", 0, 0, 0);
    VAR_10 = 1;
  }


  if( VAR_8.rc==VAR_2 ){
    VAR_9 = FUNC_4(&VAR_8, "SELECT * FROM %Q.'%q_rowid'", VAR_5, VAR_6);
    if( VAR_9 ){
      VAR_11 = FUNC_5(VAR_9) - 2;
      FUNC_8(VAR_9);
    }
    VAR_8.rc = VAR_2;
  }


  VAR_9 = FUNC_4(&VAR_8, "SELECT * FROM %Q.%Q", VAR_5, VAR_6);
  if( VAR_9 ){
    int VAR_12;
    VAR_8.nDim = (FUNC_5(VAR_9) - 1 - VAR_11) / 2;
    if( VAR_8.nDim<1 ){
      FUNC_1(&VAR_8, "Schema corrupt or not an rtree");
    }else if( VAR_3==FUNC_10(VAR_9) ){
      VAR_8.bInt = (FUNC_6(VAR_9, 1)==VAR_1);
    }
    VAR_12 = FUNC_8(VAR_9);
    if( VAR_12!=VAR_0 ) VAR_8.rc = VAR_12;
  }


  if( VAR_8.nDim>=1 ){
    if( VAR_8.rc==VAR_2 ){
      FUNC_3(&VAR_8, 0, 0, 1);
    }
    FUNC_2(&VAR_8, "_rowid", VAR_8.nLeaf);
    FUNC_2(&VAR_8, "_parent", VAR_8.nNonLeaf);
  }


  FUNC_8(VAR_8.pGetNode);
  FUNC_8(VAR_8.aCheckMapping[0]);
  FUNC_8(VAR_8.aCheckMapping[1]);


  if( VAR_10 ){
    int VAR_13 = FUNC_7(VAR_4, "END", 0, 0, 0);
    if( VAR_8.rc==VAR_2 ) VAR_8.rc = VAR_13;
  }
  *VAR_7 = VAR_8.zReport;
  return VAR_8.rc;
}
