
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* aSnapshot; int pEnv; TYPE_2__* pShmhdr; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_5__ {int* aSnap1; int* aSnap2; int iMetaPage; } ;
typedef TYPE_2__ ShmHeader ;
typedef int MetaPage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int ,int*) ;
 int* FUNC_3 (int *,int*) ;
 int FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int*,int*,int) ;

__attribute__((used)) static int FUNC_7(lsm_db *VAR_2, MetaPage *VAR_3, u32 VAR_4, int *VAR_5){
  int VAR_6 = 0;
  if( *VAR_5==VAR_1 ){
    int VAR_7 = VAR_1;
    u32 *VAR_8 = 0;
    u32 VAR_9;
    int VAR_10;
    u8 *VAR_11;

    VAR_11 = FUNC_3(VAR_3, &VAR_10);
    VAR_9 = (u32)FUNC_4(&VAR_11[VAR_0*sizeof(u32)]);
    if( VAR_9<=VAR_10/sizeof(u32) && VAR_9>VAR_0 ){
      VAR_8 = (u32 *)FUNC_5(VAR_2->pEnv, VAR_9*sizeof(u32), &VAR_7);
    }
    if( VAR_8 ){
      FUNC_6(VAR_8, VAR_11, VAR_9*sizeof(u32));
      FUNC_0(VAR_8, VAR_9);
      if( FUNC_1(VAR_8) ){
        ShmHeader *VAR_12 = VAR_2->pShmhdr;
        FUNC_6(VAR_12->aSnap1, VAR_8, VAR_9*sizeof(u32));
        FUNC_6(VAR_12->aSnap2, VAR_8, VAR_9*sizeof(u32));
        FUNC_6(VAR_2->aSnapshot, VAR_8, VAR_9*sizeof(u32));
        VAR_12->iMetaPage = VAR_4;
        VAR_6 = 1;
      }
    }

    FUNC_2(VAR_2->pEnv, VAR_8);
    *VAR_5 = VAR_7;
  }
  return VAR_6;
}
