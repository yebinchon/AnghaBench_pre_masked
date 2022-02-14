
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pDb; } ;
struct TYPE_7__ {int nKey; int pKey; int eType; scalar_t__ pPg; } ;
struct TYPE_6__ {int xCmp; } ;
typedef TYPE_2__ SegmentPtr ;
typedef TYPE_3__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,void*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(
  MultiCursor *VAR_3,
  SegmentPtr *VAR_4,
  int VAR_5,
  void *VAR_6,
  int VAR_7,
  int VAR_8
){
  if( VAR_4->pPg ){
    int VAR_9;
    VAR_9 = FUNC_1(VAR_3->pDb->xCmp, VAR_5, VAR_6, VAR_7,
        FUNC_0(VAR_4->eType), VAR_4->pKey, VAR_4->nKey
    );

    if( VAR_8==VAR_0 ) return (VAR_9==0);
    if( VAR_8==VAR_2 ) return (VAR_9>=0);
    if( VAR_8==VAR_1 ) return (VAR_9<=0);
  }

  return 1;
}
