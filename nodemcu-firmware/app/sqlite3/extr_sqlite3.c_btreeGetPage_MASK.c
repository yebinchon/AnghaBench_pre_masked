
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pPager; int mutex; } ;
typedef int Pgno ;
typedef int MemPage ;
typedef int DbPage ;
typedef TYPE_1__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int **,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(
  BtShared *VAR_3,
  Pgno VAR_4,
  MemPage **VAR_5,
  int VAR_6
){
  int VAR_7;
  DbPage *VAR_8;

  FUNC_0( VAR_6==0 || VAR_6==VAR_0 || VAR_6==VAR_1 );
  FUNC_0( FUNC_3(VAR_3->mutex) );
  VAR_7 = FUNC_2(VAR_3->pPager, VAR_4, (DbPage**)&VAR_8, VAR_6);
  if( VAR_7 ) return VAR_7;
  *VAR_5 = FUNC_1(VAR_8, VAR_4, VAR_3);
  return VAR_2;
}
