
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {scalar_t__ nCacheAlloc; scalar_t__ nCacheMax; TYPE_1__* pLruFirst; int pEnv; int nPagesize; } ;
struct TYPE_12__ {int flags; int * aData; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(
  FileSystem *VAR_3,
  Page **VAR_4
){
  int VAR_5 = VAR_1;
  Page *VAR_6 = 0;
  if( VAR_3->pLruFirst==0 || VAR_3->nCacheAlloc<VAR_3->nCacheMax ){

    VAR_6 = FUNC_4(VAR_3->pEnv, sizeof(Page));
    if( !VAR_6 ){
      VAR_5 = VAR_0;
    }else{
      VAR_6->aData = (u8 *)FUNC_3(VAR_3->pEnv, VAR_3->nPagesize);
      if( !VAR_6->aData ){
        FUNC_2(VAR_3->pEnv, VAR_6);
        VAR_5 = VAR_0;
        VAR_6 = 0;
      }else{
        VAR_3->nCacheAlloc++;
      }
    }
  }else{

    u8 *VAR_7;
    VAR_6 = VAR_3->pLruFirst;
    VAR_7 = VAR_6->aData;
    FUNC_1(VAR_3, VAR_6);
    FUNC_0(VAR_3, VAR_6);

    FUNC_5(VAR_6, 0, sizeof(Page));
    VAR_6->aData = VAR_7;
  }

  if( VAR_6 ){
    VAR_6->flags = VAR_2;
  }
  *VAR_4 = VAR_6;
  return VAR_5;
}
