
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_vtab ;
typedef int sqlite3_str ;
typedef int sqlite3 ;
struct TYPE_7__ {int * pModule; } ;
struct TYPE_8__ {int nBusy; char* zDb; char* zName; scalar_t__ nAux; int nDim2; int nDim; int nBytesPerCell; int eCoordType; TYPE_1__ base; } ;
typedef TYPE_2__ Rtree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int,char**) ;
 int FUNC_2 (char*,char const* const,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *,char const* const,char const* const,int) ;
 int FUNC_6 (int *,char*) ;
 char const* FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (char*,char const*) ;
 int FUNC_11 (int *,char*,...) ;
 char* FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int) ;
 scalar_t__ FUNC_15 (char const* const) ;

__attribute__((used)) static int FUNC_16(
  sqlite3 *VAR_9,
  void *VAR_10,
  int VAR_11, const char *const*VAR_12,
  sqlite3_vtab **VAR_13,
  char **VAR_14,
  int VAR_15
){
  int VAR_16 = VAR_6;
  Rtree *VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20 = (VAR_10 ? VAR_0 : VAR_1);
  sqlite3_str *VAR_21;
  char *VAR_22;
  int VAR_23 = 4;
  int VAR_24;

  const char *VAR_25[] = {
    0,
    "Wrong number of columns for an rtree table",
    "Too few columns for an rtree table",
    "Too many columns for an rtree table",
    "Auxiliary rtree columns must be last"
  };

  FUNC_0( VAR_2<256 );
  if( VAR_11>VAR_2+3 ){
    *VAR_14 = FUNC_10("%s", VAR_25[3]);
    return VAR_4;
  }

  FUNC_14(VAR_9, VAR_7, 1);


  VAR_18 = (int)FUNC_15(VAR_12[1]);
  VAR_19 = (int)FUNC_15(VAR_12[2]);
  VAR_17 = (Rtree *)FUNC_9(sizeof(Rtree)+VAR_18+VAR_19+2);
  if( !VAR_17 ){
    return VAR_5;
  }
  FUNC_3(VAR_17, 0, sizeof(Rtree)+VAR_18+VAR_19+2);
  VAR_17->nBusy = 1;
  VAR_17->base.pModule = &VAR_8;
  VAR_17->zDb = (char *)&VAR_17[1];
  VAR_17->zName = &VAR_17->zDb[VAR_18+1];
  VAR_17->eCoordType = (u8)VAR_20;
  FUNC_2(VAR_17->zDb, VAR_12[1], VAR_18);
  FUNC_2(VAR_17->zName, VAR_12[2], VAR_19);






  VAR_21 = FUNC_13(VAR_9);
  FUNC_11(VAR_21, "CREATE TABLE x(%s", VAR_12[3]);
  for(VAR_23=4; VAR_23<VAR_11; VAR_23++){
    if( VAR_12[VAR_23][0]=='+' ){
      VAR_17->nAux++;
      FUNC_11(VAR_21, ",%s", VAR_12[VAR_23]+1);
    }else if( VAR_17->nAux>0 ){
      break;
    }else{
      VAR_17->nDim2++;
      FUNC_11(VAR_21, ",%s", VAR_12[VAR_23]);
    }
  }
  FUNC_11(VAR_21, ");");
  VAR_22 = FUNC_12(VAR_21);
  if( !VAR_22 ){
    VAR_16 = VAR_5;
  }else if( VAR_23<VAR_11 ){
    *VAR_14 = FUNC_10("%s", VAR_25[4]);
    VAR_16 = VAR_4;
  }else if( VAR_6!=(VAR_16 = FUNC_6(VAR_9, VAR_22)) ){
    *VAR_14 = FUNC_10("%s", FUNC_7(VAR_9));
  }
  FUNC_8(VAR_22);
  if( VAR_16 ) goto rtreeInit_fail;
  VAR_17->nDim = VAR_17->nDim2/2;
  if( VAR_17->nDim<1 ){
    VAR_24 = 2;
  }else if( VAR_17->nDim2>VAR_3*2 ){
    VAR_24 = 3;
  }else if( VAR_17->nDim2 % 2 ){
    VAR_24 = 1;
  }else{
    VAR_24 = 0;
  }
  if( VAR_24 ){
    *VAR_14 = FUNC_10("%s", VAR_25[VAR_24]);
    goto rtreeInit_fail;
  }
  VAR_17->nBytesPerCell = 8 + VAR_17->nDim2*4;


  VAR_16 = FUNC_1(VAR_9, VAR_17, VAR_15, VAR_14);
  if( VAR_16 ) goto rtreeInit_fail;
  VAR_16 = FUNC_5(VAR_17, VAR_9, VAR_12[1], VAR_12[2], VAR_15);
  if( VAR_16 ){
    *VAR_14 = FUNC_10("%s", FUNC_7(VAR_9));
    goto rtreeInit_fail;
  }

  *VAR_13 = (sqlite3_vtab *)VAR_17;
  return VAR_6;

rtreeInit_fail:
  if( VAR_16==VAR_6 ) VAR_16 = VAR_4;
  FUNC_0( *VAR_13==0 );
  FUNC_0( VAR_17->nBusy==1 );
  FUNC_4(VAR_17);
  return VAR_16;
}
