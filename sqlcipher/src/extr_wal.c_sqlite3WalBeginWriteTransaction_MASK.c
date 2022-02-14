
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WalIndexHdr ;
struct TYPE_6__ {scalar_t__ readLock; int writeLock; scalar_t__ iReCksum; int hdr; scalar_t__ readOnly; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,void*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int FUNC_5(Wal *VAR_3){
  int VAR_4;



  FUNC_0( VAR_3->readLock>=0 );
  FUNC_0( VAR_3->writeLock==0 && VAR_3->iReCksum==0 );

  if( VAR_3->readOnly ){
    return VAR_1;
  }




  VAR_4 = FUNC_3(VAR_3, VAR_2, 1);
  if( VAR_4 ){
    return VAR_4;
  }
  VAR_3->writeLock = 1;





  if( FUNC_1(&VAR_3->hdr, (void *)FUNC_2(VAR_3), sizeof(WalIndexHdr))!=0 ){
    FUNC_4(VAR_3, VAR_2, 1);
    VAR_3->writeLock = 0;
    VAR_4 = VAR_0;
  }

  return VAR_4;
}
