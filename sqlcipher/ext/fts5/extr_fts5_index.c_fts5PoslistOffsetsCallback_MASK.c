
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int iRead; int iWrite; int pBuf; int pColset; } ;
typedef TYPE_1__ PoslistOffsetsCtx ;
typedef int Fts5Index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int const*,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(
  Fts5Index *VAR_0,
  void *VAR_1,
  const u8 *VAR_2, int VAR_3
){
  PoslistOffsetsCtx *VAR_4 = (PoslistOffsetsCtx*)VAR_1;
  FUNC_0(VAR_0);
  FUNC_1( VAR_3>=0 );
  if( VAR_3>0 ){
    int VAR_5 = 0;
    while( VAR_5<VAR_3 ){
      int VAR_6;
      VAR_5 += FUNC_3(&VAR_2[VAR_5], VAR_6);
      VAR_6 += VAR_4->iRead - 2;
      VAR_4->iRead = VAR_6;
      if( FUNC_4(VAR_4->pColset, VAR_6) ){
        FUNC_2(VAR_4->pBuf, VAR_6 + 2 - VAR_4->iWrite);
        VAR_4->iWrite = VAR_6;
      }
    }
  }
}
