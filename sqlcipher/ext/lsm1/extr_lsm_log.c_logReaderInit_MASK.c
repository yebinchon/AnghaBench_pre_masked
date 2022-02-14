
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int pEnv; int pFS; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_13__ {scalar_t__ n; } ;
struct TYPE_12__ {int cksum1; int cksum0; TYPE_1__* aRegion; } ;
struct TYPE_11__ {scalar_t__ iBuf; scalar_t__ iCksumBuf; TYPE_5__ buf; int cksum1; int cksum0; int iOff; int pFS; } ;
struct TYPE_9__ {int iStart; } ;
typedef TYPE_3__ LogReader ;
typedef TYPE_4__ DbLog ;


 int FUNC_0 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_1(
  lsm_db *VAR_0,
  DbLog *VAR_1,
  int VAR_2,
  LogReader *VAR_3
){
  VAR_3->pFS = VAR_0->pFS;
  VAR_3->iOff = VAR_1->aRegion[2].iStart;
  VAR_3->cksum0 = VAR_1->cksum0;
  VAR_3->cksum1 = VAR_1->cksum1;
  if( VAR_2 ){ FUNC_0(&VAR_3->buf, VAR_0->pEnv); }
  VAR_3->buf.n = 0;
  VAR_3->iCksumBuf = 0;
  VAR_3->iBuf = 0;
}
