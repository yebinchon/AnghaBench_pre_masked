
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int ht_slot ;
struct TYPE_3__ {int * aPgno; scalar_t__ iZero; int volatile* aHash; } ;
typedef TYPE_1__ WalHashLoc ;
typedef int Wal ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int **) ;

__attribute__((used)) static int FUNC_2(
  Wal *VAR_4,
  int VAR_5,
  WalHashLoc *VAR_6
){
  int VAR_7;

  VAR_7 = FUNC_1(VAR_4, VAR_5, &VAR_6->aPgno);
  FUNC_0( VAR_7==VAR_2 || VAR_5>0 );

  if( VAR_7==VAR_2 ){
    VAR_6->aHash = (volatile ht_slot *)&VAR_6->aPgno[VAR_0];
    if( VAR_5==0 ){
      VAR_6->aPgno = &VAR_6->aPgno[VAR_3/sizeof(u32)];
      VAR_6->iZero = 0;
    }else{
      VAR_6->iZero = VAR_1 + (VAR_5-1)*VAR_0;
    }
    VAR_6->aPgno = &VAR_6->aPgno[-1];
  }
  return VAR_7;
}
