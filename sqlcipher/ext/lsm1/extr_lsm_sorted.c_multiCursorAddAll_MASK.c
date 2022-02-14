
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int flags; struct TYPE_12__* pNext; scalar_t__ nRight; } ;
struct TYPE_11__ {TYPE_1__* pDb; int aPtr; } ;
struct TYPE_10__ {TYPE_4__* pLevel; } ;
struct TYPE_9__ {int pEnv; } ;
typedef TYPE_2__ Snapshot ;
typedef int SegmentPtr ;
typedef TYPE_3__ MultiCursor ;
typedef TYPE_4__ Level ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int*) ;

__attribute__((used)) static int FUNC_3(MultiCursor *VAR_2, Snapshot *VAR_3){
  Level *VAR_4;
  int VAR_5 = 0;
  int VAR_6 = VAR_1;

  for(VAR_4=VAR_3->pLevel; VAR_4; VAR_4=VAR_4->pNext){





    if( VAR_4->flags & VAR_0 ) continue;
    VAR_5 += (1 + VAR_4->nRight);
  }

  FUNC_0( VAR_2->aPtr==0 );
  VAR_2->aPtr = FUNC_1(VAR_2->pDb->pEnv, sizeof(SegmentPtr) * VAR_5, &VAR_6);

  for(VAR_4=VAR_3->pLevel; VAR_4; VAR_4=VAR_4->pNext){
    if( (VAR_4->flags & VAR_0)==0 ){
      FUNC_2(VAR_2, VAR_4, &VAR_6);
    }
  }

  return VAR_6;
}
