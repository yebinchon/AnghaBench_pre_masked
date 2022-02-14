
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {scalar_t__ nBackfill; } ;
typedef TYPE_2__ WalCkptInfo ;
struct TYPE_12__ {scalar_t__ mxFrame; } ;
struct TYPE_14__ {int readLock; TYPE_1__ hdr; } ;
typedef TYPE_3__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int*,int,int) ;
 int FUNC_8 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_10(Wal *VAR_6){
  int VAR_7 = VAR_2;
  int VAR_8;

  if( VAR_6->readLock==0 ){
    volatile WalCkptInfo *VAR_9 = FUNC_4(VAR_6);
    FUNC_1( VAR_9->nBackfill==VAR_6->hdr.mxFrame );
    if( VAR_9->nBackfill>0 ){
      u32 VAR_10;
      FUNC_2(4, &VAR_10);
      VAR_7 = FUNC_5(VAR_6, FUNC_0(1), VAR_4-1);
      if( VAR_7==VAR_2 ){
        FUNC_6(VAR_6, VAR_10);
        FUNC_8(VAR_6, FUNC_0(1), VAR_4-1);
      }else if( VAR_7!=VAR_0 ){
        return VAR_7;
      }
    }
    FUNC_9(VAR_6, FUNC_0(0));
    VAR_6->readLock = -1;
    VAR_8 = 0;
    do{
      int VAR_11;
      VAR_7 = FUNC_7(VAR_6, &VAR_11, 1, ++VAR_8);
    }while( VAR_7==VAR_5 );
    FUNC_1( (VAR_7&0xff)!=VAR_0 );
    FUNC_3( (VAR_7&0xff)==VAR_1 );
    FUNC_3( VAR_7==VAR_3 );
    FUNC_3( VAR_7==VAR_2 );
  }
  return VAR_7;
}
