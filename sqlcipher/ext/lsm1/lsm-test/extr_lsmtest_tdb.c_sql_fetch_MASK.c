
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int TestDb ;
struct TYPE_2__ {int nAlloc; int pFetch; int * aAlloc; } ;
typedef TYPE_1__ SqlDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int,void*,int,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(
  TestDb *VAR_3,
  void *VAR_4,
  int VAR_5,
  void **VAR_6,
  int *VAR_7
){
  SqlDb *VAR_8 = (SqlDb *)VAR_3;
  int VAR_9;

  FUNC_7(VAR_8->pFetch);
  if( VAR_4==0 ){
    FUNC_0( VAR_6==0 );
    FUNC_0( VAR_7==0 );
    return VAR_0;
  }

  FUNC_4(VAR_8->pFetch, 1, VAR_4, VAR_5, VAR_2);
  VAR_9 = FUNC_8(VAR_8->pFetch);
  if( VAR_9==VAR_1 ){
    int VAR_10 = FUNC_6(VAR_8->pFetch, 0);
    u8 *VAR_11 = (void *)FUNC_5(VAR_8->pFetch, 0);

    if( VAR_10>VAR_8->nAlloc ){
      FUNC_1(VAR_8->aAlloc);
      VAR_8->aAlloc = (u8 *)FUNC_2(VAR_10*2);
      VAR_8->nAlloc = VAR_10*2;
    }
    FUNC_3(VAR_8->aAlloc, VAR_11, VAR_10);
    *VAR_7 = VAR_10;
    *VAR_6 = (void *)VAR_8->aAlloc;
  }else{
    *VAR_7 = -1;
    *VAR_6 = 0;
  }

  VAR_9 = FUNC_7(VAR_8->pFetch);
  return VAR_9;
}
