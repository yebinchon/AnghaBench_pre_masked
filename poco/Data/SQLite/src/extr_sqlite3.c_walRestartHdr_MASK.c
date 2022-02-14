
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_9__ {scalar_t__* aReadMark; scalar_t__ nBackfillAttempted; scalar_t__ nBackfill; } ;
typedef TYPE_2__ WalCkptInfo ;
struct TYPE_8__ {int * aSalt; scalar_t__ mxFrame; } ;
struct TYPE_10__ {TYPE_1__ hdr; int nCkpt; } ;
typedef TYPE_3__ Wal ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(Wal *VAR_2, u32 VAR_3){
  volatile WalCkptInfo *VAR_4 = FUNC_4(VAR_2);
  int VAR_5;
  u32 *VAR_6 = VAR_2->hdr.aSalt;
  VAR_2->nCkpt++;
  VAR_2->hdr.mxFrame = 0;
  FUNC_3((u8*)&VAR_6[0], 1 + FUNC_2((u8*)&VAR_6[0]));
  FUNC_1(&VAR_2->hdr.aSalt[1], &VAR_3, 4);
  FUNC_5(VAR_2);
  VAR_4->nBackfill = 0;
  VAR_4->nBackfillAttempted = 0;
  VAR_4->aReadMark[1] = 0;
  for(VAR_5=2; VAR_5<VAR_1; VAR_5++) VAR_4->aReadMark[VAR_5] = VAR_0;
  FUNC_0( VAR_4->aReadMark[0]==0 );
}
