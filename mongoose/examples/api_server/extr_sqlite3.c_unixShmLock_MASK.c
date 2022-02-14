
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ h; int mutex; TYPE_3__* pFirst; TYPE_1__* pInode; } ;
typedef TYPE_2__ unixShmNode ;
struct TYPE_8__ {int exclMask; int sharedMask; int id; struct TYPE_8__* pNext; TYPE_2__* pShmNode; } ;
typedef TYPE_3__ unixShm ;
struct TYPE_9__ {TYPE_1__* pInode; TYPE_3__* pShm; } ;
typedef TYPE_4__ unixFile ;
typedef int u16 ;
typedef int sqlite3_file ;
struct TYPE_6__ {int bProcessLock; TYPE_2__* pShmNode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_file *VAR_11,
  int VAR_12,
  int VAR_13,
  int VAR_14
){
  unixFile *VAR_15 = (unixFile*)VAR_11;
  unixShm *VAR_16 = VAR_15->pShm;
  unixShm *VAR_17;
  unixShmNode *VAR_18 = VAR_16->pShmNode;
  int VAR_19 = VAR_4;
  u16 VAR_20;

  FUNC_1( VAR_18==VAR_15->pInode->pShmNode );
  FUNC_1( VAR_18->pInode==VAR_15->pInode );
  FUNC_1( VAR_12>=0 && VAR_12+VAR_13<=VAR_7 );
  FUNC_1( VAR_13>=1 );
  FUNC_1( VAR_14==(VAR_6 | VAR_8)
       || VAR_14==(VAR_6 | VAR_5)
       || VAR_14==(VAR_9 | VAR_8)
       || VAR_14==(VAR_9 | VAR_5) );
  FUNC_1( VAR_13==1 || (VAR_14 & VAR_5)!=0 );
  FUNC_1( VAR_18->h>=0 || VAR_15->pInode->bProcessLock==1 );
  FUNC_1( VAR_18->h<0 || VAR_15->pInode->bProcessLock==0 );

  VAR_20 = (1<<(VAR_12+VAR_13)) - (1<<VAR_12);
  FUNC_1( VAR_13>1 || VAR_20==(1<<VAR_12) );
  FUNC_3(VAR_18->mutex);
  if( VAR_14 & VAR_9 ){
    u16 VAR_21 = 0;


    for(VAR_17=VAR_18->pFirst; VAR_17; VAR_17=VAR_17->pNext){
      if( VAR_17==VAR_16 ) continue;
      FUNC_1( (VAR_17->exclMask & (VAR_16->exclMask|VAR_16->sharedMask))==0 );
      VAR_21 |= VAR_17->sharedMask;
    }


    if( (VAR_20 & VAR_21)==0 ){
      VAR_19 = FUNC_5(VAR_18, VAR_1, VAR_12+VAR_10, VAR_13);
    }else{
      VAR_19 = VAR_4;
    }


    if( VAR_19==VAR_4 ){
      VAR_16->exclMask &= ~VAR_20;
      VAR_16->sharedMask &= ~VAR_20;
    }
  }else if( VAR_14 & VAR_8 ){
    u16 VAR_22 = 0;





    for(VAR_17=VAR_18->pFirst; VAR_17; VAR_17=VAR_17->pNext){
      if( (VAR_17->exclMask & VAR_20)!=0 ){
        VAR_19 = VAR_3;
        break;
      }
      VAR_22 |= VAR_17->sharedMask;
    }


    if( VAR_19==VAR_4 ){
      if( (VAR_22 & VAR_20)==0 ){
        VAR_19 = FUNC_5(VAR_18, VAR_0, VAR_12+VAR_10, VAR_13);
      }else{
        VAR_19 = VAR_4;
      }
    }


    if( VAR_19==VAR_4 ){
      VAR_16->sharedMask |= VAR_20;
    }
  }else{



    for(VAR_17=VAR_18->pFirst; VAR_17; VAR_17=VAR_17->pNext){
      if( (VAR_17->exclMask & VAR_20)!=0 || (VAR_17->sharedMask & VAR_20)!=0 ){
        VAR_19 = VAR_3;
        break;
      }
    }




    if( VAR_19==VAR_4 ){
      VAR_19 = FUNC_5(VAR_18, VAR_2, VAR_12+VAR_10, VAR_13);
      if( VAR_19==VAR_4 ){
        FUNC_1( (VAR_16->sharedMask & VAR_20)==0 );
        VAR_16->exclMask |= VAR_20;
      }
    }
  }
  FUNC_4(VAR_18->mutex);
  FUNC_0(("SHM-LOCK shmid-%d, pid-%d got %03x,%03x\n",
           VAR_16->id, FUNC_2(), VAR_16->sharedMask, VAR_16->exclMask));
  return VAR_19;
}
