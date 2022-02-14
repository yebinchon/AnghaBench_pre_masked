
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_pcache ;
struct TYPE_7__ {int mxPinned; int nMinPage; int nMaxPage; } ;
struct TYPE_10__ {TYPE_1__ grp; } ;
struct TYPE_9__ {scalar_t__ bCoreMutex; } ;
struct TYPE_8__ {int szPage; int szExtra; int bPurgeable; int nMin; TYPE_1__* pGroup; } ;
typedef TYPE_1__ PGroup ;
typedef TYPE_2__ PCache1 ;


 int FUNC_0 (int) ;
 TYPE_6__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static sqlite3_pcache *FUNC_4(int VAR_2, int VAR_3, int VAR_4){
  PCache1 *VAR_5;
  PGroup *VAR_6;
  int VAR_7;
  const int VAR_8 = 0;




  FUNC_0( (VAR_2 & (VAR_2-1))==0 && VAR_2>=512 && VAR_2<=65536 );
  FUNC_0( VAR_3 < 300 );

  VAR_7 = sizeof(PCache1) + sizeof(PGroup)*VAR_8;
  VAR_5 = (PCache1 *)FUNC_3(VAR_7);
  if( VAR_5 ){
    if( VAR_8 ){
      VAR_6 = (PGroup*)&VAR_5[1];
      VAR_6->mxPinned = 10;
    }else{
      VAR_6 = &VAR_0;
    }
    VAR_5->pGroup = VAR_6;
    VAR_5->szPage = VAR_2;
    VAR_5->szExtra = VAR_3;
    VAR_5->bPurgeable = (VAR_4 ? 1 : 0);
    if( VAR_4 ){
      VAR_5->nMin = 10;
      FUNC_1(VAR_6);
      VAR_6->nMinPage += VAR_5->nMin;
      VAR_6->mxPinned = VAR_6->nMaxPage + 10 - VAR_6->nMinPage;
      FUNC_2(VAR_6);
    }
  }
  return (sqlite3_pcache *)VAR_5;
}
