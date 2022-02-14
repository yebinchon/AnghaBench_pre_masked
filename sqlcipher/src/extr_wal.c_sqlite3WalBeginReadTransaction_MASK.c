
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ mxFrame; struct TYPE_16__* aSalt; } ;
typedef TYPE_1__ WalIndexHdr ;
struct TYPE_17__ {scalar_t__* aReadMark; scalar_t__ nBackfillAttempted; } ;
typedef TYPE_2__ WalCkptInfo ;
struct TYPE_15__ {scalar_t__ mxFrame; struct TYPE_15__* aSalt; } ;
struct TYPE_18__ {size_t readLock; int minFrame; TYPE_11__ hdr; TYPE_1__* pSnapshot; } ;
typedef TYPE_3__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_11__*,int) ;
 int FUNC_2 (TYPE_11__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int*,int ,int) ;
 int FUNC_8 (TYPE_3__*,int ) ;

int FUNC_9(Wal *VAR_7, int *VAR_8){
  int VAR_9;
  int VAR_10 = 0;
  do{
    VAR_9 = FUNC_7(VAR_7, VAR_8, 0, ++VAR_10);
  }while( VAR_9==VAR_6 );
  FUNC_4( (VAR_9&0xff)==VAR_0 );
  FUNC_4( (VAR_9&0xff)==VAR_2 );
  FUNC_4( VAR_9==VAR_4 );
  FUNC_4( VAR_9==VAR_3 );
  return VAR_9;
}
