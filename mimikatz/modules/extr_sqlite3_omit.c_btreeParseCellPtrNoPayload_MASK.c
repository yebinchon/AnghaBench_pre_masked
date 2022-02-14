
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_9__ {scalar_t__ pPayload; scalar_t__ nLocal; scalar_t__ nPayload; int nKey; scalar_t__ nSize; } ;
struct TYPE_8__ {scalar_t__ leaf; int childPtrSize; TYPE_1__* pBt; } ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_2__ MemPage ;
typedef TYPE_3__ CellInfo ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
  MemPage *VAR_0,
  u8 *VAR_1,
  CellInfo *VAR_2
){
  FUNC_1( FUNC_3(VAR_0->pBt->mutex) );
  FUNC_1( VAR_0->leaf==0 );
  FUNC_1( VAR_0->childPtrSize==4 );

  FUNC_0(VAR_0);

  VAR_2->nSize = 4 + FUNC_2(&VAR_1[4], (u64*)&VAR_2->nKey);
  VAR_2->nPayload = 0;
  VAR_2->nLocal = 0;
  VAR_2->pPayload = 0;
  return;
}
