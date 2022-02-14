
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {TYPE_1__* pShmhdr; int pEnv; int pFS; } ;
typedef TYPE_2__ lsm_db ;
typedef int i64 ;
struct TYPE_4__ {int iMetaPage; } ;
typedef int MetaPage ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ,int*) ;
 int * FUNC_6 (int *,int*) ;
 int FUNC_7 (int ,int ,int,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int* FUNC_10 (int ,int,int*) ;
 int FUNC_11 (int*,int *,int) ;

int FUNC_12(lsm_db *VAR_4, i64 *VAR_5, i64 *VAR_6, u32 *VAR_7){
  int VAR_8 = VAR_3;
  MetaPage *VAR_9;
  u32 VAR_10;

  VAR_10 = VAR_4->pShmhdr->iMetaPage;
  if( VAR_10==1 || VAR_10==2 ){
    VAR_8 = FUNC_7(VAR_4->pFS, 0, VAR_10, &VAR_9);
    if( VAR_8==VAR_3 ){
      int VAR_11;
      int VAR_12;
      u8 *VAR_13;

      VAR_13 = FUNC_6(VAR_9, &VAR_12);
      FUNC_0( VAR_12==VAR_2 );
      VAR_11 = FUNC_9(&VAR_13[VAR_0*sizeof(u32)]);
      if( VAR_11<(VAR_2/sizeof(u32)) ){
        u32 *VAR_14 = FUNC_10(VAR_4->pEnv, sizeof(u32) * VAR_11, &VAR_8);
        if( VAR_14 ){
          FUNC_11(VAR_14, VAR_13, VAR_11*sizeof(u32));
          FUNC_1(VAR_14, VAR_11);
          if( FUNC_2(VAR_14) ){
            if( VAR_5 ) *VAR_5 = FUNC_3(VAR_14, 0);
            if( VAR_6 ) *VAR_6 = (FUNC_4(VAR_14) >> 1);
            if( VAR_7 ) *VAR_7 = VAR_14[VAR_1];
          }
          FUNC_5(VAR_4->pEnv, VAR_14);
        }
      }
      FUNC_8(VAR_9);
    }
  }

  if( (VAR_10!=1 && VAR_10!=2) || VAR_8!=VAR_3 || VAR_4->pShmhdr->iMetaPage!=VAR_10 ){
    if( VAR_5 ) *VAR_5 = 0;
    if( VAR_6 ) *VAR_6 = 0;
    if( VAR_7 ) *VAR_7 = 0;
  }
  return VAR_8;
}
