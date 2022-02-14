
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ iId; int iBlk; } ;
struct TYPE_10__ {int flags; int iFree; TYPE_3__* pDb; } ;
struct TYPE_9__ {TYPE_2__* pWorker; } ;
struct TYPE_7__ {int nEntry; TYPE_5__* aEntry; } ;
struct TYPE_8__ {TYPE_1__ freelist; } ;
typedef TYPE_4__ MultiCursor ;
typedef TYPE_5__ FreelistEntry ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(MultiCursor *VAR_1){
  FUNC_0( VAR_1->flags & VAR_0 );
  if( VAR_1->iFree % 2 ){
    VAR_1->iFree++;
  }else{
    int VAR_2 = VAR_1->pDb->pWorker->freelist.nEntry;
    FreelistEntry *VAR_3 = VAR_1->pDb->pWorker->freelist.aEntry;

    int VAR_4 = VAR_2 - 1 - (VAR_1->iFree / 2);



    if( VAR_3[VAR_4].iId<0 ){
      while( 1 ){
        if( VAR_4==0 || VAR_3[VAR_4-1].iBlk!=VAR_3[VAR_4].iBlk-1 ){
          VAR_1->iFree--;
          break;
        }
        if( VAR_3[VAR_4-1].iId>=0 ) break;
        VAR_1->iFree += 2;
        VAR_4--;
      }
    }
    VAR_1->iFree += 2;
  }
}
