
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TreeCursor ;
struct TYPE_5__ {int nData; void* pData; } ;
struct TYPE_6__ {int flags; int* aTree; int eType; TYPE_1__ key; int ** apTreeCsr; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,void**,int*) ;
 scalar_t__ FUNC_2 (void*,void*,int) ;
 int FUNC_3 (TYPE_2__*,int,int*,void**,int*) ;

int FUNC_4(MultiCursor *VAR_4, void **VAR_5, int *VAR_6){
  if( (VAR_4->flags & VAR_2) || VAR_4->aTree==0 ){
    *VAR_6 = VAR_4->key.nData;
    *VAR_5 = VAR_4->key.pData;
  }else{
    int VAR_7 = VAR_4->aTree[1];

    if( VAR_7==VAR_0 || VAR_7==VAR_1 ){
      TreeCursor *VAR_8 = VAR_4->apTreeCsr[VAR_7-VAR_0];
      FUNC_1(VAR_8, 0, VAR_5, VAR_6);
    }else{
      int VAR_9;


      void *VAR_10;
      int VAR_11;
      FUNC_3(VAR_4, VAR_7, &VAR_11, &VAR_10, &VAR_9);
      FUNC_0( VAR_11==VAR_4->eType );
      FUNC_0( VAR_9==VAR_4->key.nData );
      FUNC_0( FUNC_2(VAR_10, VAR_4->key.pData, VAR_9)==0 );


      VAR_9 = VAR_4->key.nData;
      if( VAR_9==0 ){
        *VAR_5 = 0;
      }else{
        *VAR_5 = VAR_4->key.pData;
      }
      *VAR_6 = VAR_9;
    }
  }
  return VAR_3;
}
