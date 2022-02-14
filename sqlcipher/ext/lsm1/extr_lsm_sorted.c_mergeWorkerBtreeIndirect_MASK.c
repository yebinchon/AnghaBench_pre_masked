
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iIndirect; TYPE_1__* aSave; } ;
struct TYPE_5__ {int iPgno; } ;
typedef TYPE_2__ MergeWorker ;
typedef int LsmPgno ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(MergeWorker *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1->iIndirect ){
    LsmPgno VAR_3 = VAR_1->aSave[1].iPgno;
    VAR_2 = FUNC_0(VAR_1, 0, VAR_1->iIndirect, VAR_3, 0, 0);
    VAR_1->iIndirect = 0;
  }
  return VAR_2;
}
