
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ szOsFile; } ;
typedef TYPE_1__ sqlite3_vfs ;
typedef int sqlite3_file ;
typedef int i64 ;
struct TYPE_9__ {int readLock; char const* zWalName; int syncHeader; int padToSectorBoundary; int * pWalFd; int readOnly; int exclusiveMode; int mxWalSize; int * pDbFd; TYPE_1__* pVfs; } ;
typedef TYPE_2__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *,int,int*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

int FUNC_8(
  sqlite3_vfs *VAR_15,
  sqlite3_file *VAR_16,
  const char *VAR_17,
  int VAR_18,
  i64 VAR_19,
  Wal **VAR_20
){
  int VAR_21;
  Wal *VAR_22;
  int VAR_23;

  FUNC_1( VAR_17 && VAR_17[0] );
  FUNC_1( *VAR_16 );







  FUNC_1( 120==VAR_10 );
  FUNC_1( 136==VAR_9 );
  *VAR_20 = 0;
  VAR_22 = (Wal*)FUNC_2(sizeof(Wal) + VAR_15->szOsFile);
  if( !VAR_22 ){
    return VAR_2;
  }

  VAR_22->pVfs = VAR_15;
  VAR_22->pWalFd = (sqlite3_file *)&VAR_22[1];
  VAR_22->pDbFd = VAR_16;
  VAR_22->readLock = -1;
  VAR_22->mxWalSize = VAR_19;
  VAR_22->zWalName = VAR_17;
  VAR_22->syncHeader = 1;
  VAR_22->padToSectorBoundary = 1;
  VAR_22->exclusiveMode = (VAR_18 ? VAR_11: VAR_12);


  VAR_23 = (VAR_6|VAR_4|VAR_7);
  VAR_21 = FUNC_5(VAR_15, VAR_17, VAR_22->pWalFd, VAR_23, &VAR_23);
  if( VAR_21==VAR_3 && VAR_23&VAR_5 ){
    VAR_22->readOnly = VAR_13;
  }

  if( VAR_21!=VAR_3 ){
    FUNC_7(VAR_22, 0);
    FUNC_3(VAR_22->pWalFd);
    FUNC_6(VAR_22);
  }else{
    int VAR_24 = FUNC_4(VAR_16);
    if( VAR_24 & VAR_1 ){ VAR_22->syncHeader = 0; }
    if( VAR_24 & VAR_0 ){
      VAR_22->padToSectorBoundary = 0;
    }
    *VAR_20 = VAR_22;
    FUNC_0(("WAL%d: opened\n", VAR_22));
  }
  return VAR_21;
}
