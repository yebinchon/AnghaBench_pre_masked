
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_19__ {int autoCommit; int nVdbeWrite; scalar_t__ nStatement; scalar_t__ nVdbeActive; scalar_t__ nVdbeRead; scalar_t__ mallocFailed; int flags; scalar_t__ nDeferredImmCons; scalar_t__ nDeferredCons; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_20__ {scalar_t__ magic; int rc; scalar_t__ pc; scalar_t__ readOnly; scalar_t__ errorAction; scalar_t__ bIsReader; scalar_t__ nChange; scalar_t__ changeCntOn; int zErrMsg; scalar_t__ usesStmtJournal; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,TYPE_2__*) ;

int FUNC_16(Vdbe *VAR_18){
  int VAR_19;
  sqlite3 *VAR_20 = VAR_18->db;
  if( VAR_18->magic!=VAR_17 ){
    return VAR_15;
  }
  if( VAR_20->mallocFailed ){
    VAR_18->rc = VAR_14;
  }
  FUNC_3(VAR_18);
  FUNC_2(VAR_20);



  if( VAR_18->pc>=0 && VAR_18->bIsReader ){
    int VAR_21;
    int VAR_22 = 0;
    int VAR_23;


    FUNC_11(VAR_18);


    VAR_21 = VAR_18->rc & 0xff;
    VAR_23 = VAR_21==VAR_13 || VAR_21==VAR_12
                     || VAR_21==VAR_11 || VAR_21==VAR_10;
    if( VAR_23 ){
      if( !VAR_18->readOnly || VAR_21!=VAR_11 ){
        if( (VAR_21==VAR_13 || VAR_21==VAR_10) && VAR_18->usesStmtJournal ){
          VAR_22 = VAR_3;
        }else{



          FUNC_8(VAR_20, VAR_4);
          FUNC_4(VAR_20);
          VAR_20->autoCommit = 1;
          VAR_18->nChange = 0;
        }
      }
    }


    if( VAR_18->rc==VAR_15 ){
      FUNC_9(VAR_18, 0);
    }







    if( !FUNC_14(VAR_20)
     && VAR_20->autoCommit
     && VAR_20->nVdbeWrite==(VAR_18->readOnly==0)
    ){
      if( VAR_18->rc==VAR_15 || (VAR_18->errorAction==VAR_1 && !VAR_23) ){
        VAR_19 = FUNC_9(VAR_18, 1);
        if( VAR_19!=VAR_15 ){
          if( FUNC_0(VAR_18->readOnly) ){
            FUNC_12(VAR_18);
            return VAR_9;
          }
          VAR_19 = VAR_7;
        }else{




          VAR_19 = FUNC_15(VAR_20, VAR_18);
        }
        if( VAR_19==VAR_5 && VAR_18->readOnly ){
          FUNC_12(VAR_18);
          return VAR_5;
        }else if( VAR_19!=VAR_15 ){
          VAR_18->rc = VAR_19;
          FUNC_8(VAR_20, VAR_15);
          VAR_18->nChange = 0;
        }else{
          VAR_20->nDeferredCons = 0;
          VAR_20->nDeferredImmCons = 0;
          VAR_20->flags &= ~(u64)VAR_8;
          FUNC_5(VAR_20);
        }
      }else{
        FUNC_8(VAR_20, VAR_15);
        VAR_18->nChange = 0;
      }
      VAR_20->nStatement = 0;
    }else if( VAR_22==0 ){
      if( VAR_18->rc==VAR_15 || VAR_18->errorAction==VAR_1 ){
        VAR_22 = VAR_2;
      }else if( VAR_18->errorAction==VAR_0 ){
        VAR_22 = VAR_3;
      }else{
        FUNC_8(VAR_20, VAR_4);
        FUNC_4(VAR_20);
        VAR_20->autoCommit = 1;
        VAR_18->nChange = 0;
      }
    }







    if( VAR_22 ){
      VAR_19 = FUNC_10(VAR_18, VAR_22);
      if( VAR_19 ){
        if( VAR_18->rc==VAR_15 || (VAR_18->rc&0xff)==VAR_6 ){
          VAR_18->rc = VAR_19;
          FUNC_7(VAR_20, VAR_18->zErrMsg);
          VAR_18->zErrMsg = 0;
        }
        FUNC_8(VAR_20, VAR_4);
        FUNC_4(VAR_20);
        VAR_20->autoCommit = 1;
        VAR_18->nChange = 0;
      }
    }




    if( VAR_18->changeCntOn ){
      if( VAR_22!=VAR_3 ){
        FUNC_13(VAR_20, VAR_18->nChange);
      }else{
        FUNC_13(VAR_20, 0);
      }
      VAR_18->nChange = 0;
    }


    FUNC_12(VAR_18);
  }


  if( VAR_18->pc>=0 ){
    VAR_20->nVdbeActive--;
    if( !VAR_18->readOnly ) VAR_20->nVdbeWrite--;
    if( VAR_18->bIsReader ) VAR_20->nVdbeRead--;
    FUNC_1( VAR_20->nVdbeActive>=VAR_20->nVdbeRead );
    FUNC_1( VAR_20->nVdbeRead>=VAR_20->nVdbeWrite );
    FUNC_1( VAR_20->nVdbeWrite>=0 );
  }
  VAR_18->magic = VAR_16;
  FUNC_2(VAR_20);
  if( VAR_20->mallocFailed ){
    VAR_18->rc = VAR_14;
  }





  if( VAR_20->autoCommit ){
    FUNC_6(VAR_20);
  }

  FUNC_1( VAR_20->nVdbeActive>0 || VAR_20->autoCommit==0 || VAR_20->nStatement==0 );
  return (VAR_18->rc==VAR_5 ? VAR_5 : VAR_15);
}
