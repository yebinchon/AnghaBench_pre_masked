
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* xCompress ) (int ,char*,int *,char const*,int ) ;int pCtx; } ;
typedef TYPE_1__ lsm_compress ;
struct TYPE_9__ {scalar_t__ aOBuffer; int nBuffer; int nPagesize; TYPE_1__* pCompress; } ;
struct TYPE_8__ {int nData; scalar_t__ aData; int nCompress; } ;
typedef TYPE_2__ Page ;
typedef TYPE_3__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,char*,int *,char const*,int ) ;

__attribute__((used)) static int FUNC_3(FileSystem *VAR_1, Page *VAR_2){
  lsm_compress *VAR_3 = VAR_1->pCompress;

  if( FUNC_1(VAR_1, 1) ) return VAR_0;
  FUNC_0( VAR_2->nData==VAR_1->nPagesize );

  VAR_2->nCompress = VAR_1->nBuffer;
  return VAR_3->xCompress(VAR_3->pCtx,
      (char *)VAR_1->aOBuffer, &VAR_2->nCompress,
      (const char *)VAR_2->aData, VAR_2->nData
  );
}
