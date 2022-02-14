
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ const mLock; int pgsz; size_t nFrame; size_t nFrameAlloc; scalar_t__ iMaxFrame; TYPE_2__* aFrame; int rc; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int i64 ;
struct TYPE_6__ {scalar_t__ iDbPage; scalar_t__ iWalFrame; } ;
typedef TYPE_2__ RbuFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(sqlite3rbu *VAR_7, i64 VAR_8, int VAR_9){
  const u32 VAR_10 = (1<<VAR_6)|(1<<VAR_4)|(1<<VAR_5);
  u32 VAR_11;

  if( VAR_7->mLock!=VAR_10 ){
    VAR_7->rc = VAR_0;
    return VAR_1;
  }

  VAR_7->pgsz = VAR_9;
  if( VAR_7->nFrame==VAR_7->nFrameAlloc ){
    int VAR_12 = (VAR_7->nFrameAlloc ? VAR_7->nFrameAlloc : 64) * 2;
    RbuFrame *VAR_13;
    VAR_13 = (RbuFrame*)FUNC_0(VAR_7->aFrame, VAR_12 * sizeof(RbuFrame));
    if( VAR_13==0 ) return VAR_2;
    VAR_7->aFrame = VAR_13;
    VAR_7->nFrameAlloc = VAR_12;
  }

  VAR_11 = (u32)((VAR_8-32) / (i64)(VAR_9+24)) + 1;
  if( VAR_7->iMaxFrame<VAR_11 ) VAR_7->iMaxFrame = VAR_11;
  VAR_7->aFrame[VAR_7->nFrame].iWalFrame = VAR_11;
  VAR_7->aFrame[VAR_7->nFrame].iDbPage = 0;
  VAR_7->nFrame++;
  return VAR_3;
}
