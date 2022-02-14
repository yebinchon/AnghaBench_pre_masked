
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3_str ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;
struct TYPE_7__ {int * pModule; } ;
struct TYPE_8__ {int nBusy; char* zDb; char* zName; int nDim; int nDim2; int nAux; int nAuxNotNull; int nBytesPerCell; int eCoordType; TYPE_1__ base; } ;
typedef TYPE_2__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int,char**) ;
 int FUNC_2 (char*,char const* const,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,char const* const,char const* const,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,char*,...) ;
 char* FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (char const* const) ;

__attribute__((used)) static int FUNC_16(
  sqlite3 *VAR_6,
  void *VAR_7,
  int VAR_8, const char *const*VAR_9,
  sqlite3_vtab **VAR_10,
  char **VAR_11,
  int VAR_12
){
  int VAR_13 = VAR_3;
  Rtree *VAR_14;
  sqlite3_int64 VAR_15;
  sqlite3_int64 VAR_16;
  sqlite3_str *VAR_17;
  char *VAR_18;
  int VAR_19;

  FUNC_14(VAR_6, VAR_4, 1);


  VAR_15 = FUNC_15(VAR_9[1]);
  VAR_16 = FUNC_15(VAR_9[2]);
  VAR_14 = (Rtree *)FUNC_9(sizeof(Rtree)+VAR_15+VAR_16+2);
  if( !VAR_14 ){
    return VAR_2;
  }
  FUNC_3(VAR_14, 0, sizeof(Rtree)+VAR_15+VAR_16+2);
  VAR_14->nBusy = 1;
  VAR_14->base.pModule = &VAR_5;
  VAR_14->zDb = (char *)&VAR_14[1];
  VAR_14->zName = &VAR_14->zDb[VAR_15+1];
  VAR_14->eCoordType = VAR_0;
  VAR_14->nDim = 2;
  VAR_14->nDim2 = 4;
  FUNC_2(VAR_14->zDb, VAR_9[1], VAR_15);
  FUNC_2(VAR_14->zName, VAR_9[2], VAR_16);






  VAR_17 = FUNC_13(VAR_6);
  FUNC_11(VAR_17, "CREATE TABLE x(_shape");
  VAR_14->nAux = 1;
  VAR_14->nAuxNotNull = 1;
  for(VAR_19=3; VAR_19<VAR_8; VAR_19++){
    VAR_14->nAux++;
    FUNC_11(VAR_17, ",%s", VAR_9[VAR_19]);
  }
  FUNC_11(VAR_17, ");");
  VAR_18 = FUNC_12(VAR_17);
  if( !VAR_18 ){
    VAR_13 = VAR_2;
  }else if( VAR_3!=(VAR_13 = FUNC_6(VAR_6, VAR_18)) ){
    *VAR_11 = FUNC_10("%s", FUNC_7(VAR_6));
  }
  FUNC_8(VAR_18);
  if( VAR_13 ) goto geopolyInit_fail;
  VAR_14->nBytesPerCell = 8 + VAR_14->nDim2*4;


  VAR_13 = FUNC_1(VAR_6, VAR_14, VAR_12, VAR_11);
  if( VAR_13 ) goto geopolyInit_fail;
  VAR_13 = FUNC_5(VAR_14, VAR_6, VAR_9[1], VAR_9[2], VAR_12);
  if( VAR_13 ){
    *VAR_11 = FUNC_10("%s", FUNC_7(VAR_6));
    goto geopolyInit_fail;
  }

  *VAR_10 = (sqlite3_vtab *)VAR_14;
  return VAR_3;

geopolyInit_fail:
  if( VAR_13==VAR_3 ) VAR_13 = VAR_1;
  FUNC_0( *VAR_10==0 );
  FUNC_0( VAR_14->nBusy==1 );
  FUNC_4(VAR_14);
  return VAR_13;
}
