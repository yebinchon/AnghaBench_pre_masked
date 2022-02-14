
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nData; int iColumn; int iPosition; scalar_t__ iType; int * pData; scalar_t__ iStartOffset; scalar_t__ iEndOffset; } ;
typedef TYPE_1__ PLReader ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(PLReader *VAR_4){
  int VAR_5, VAR_6;

  FUNC_0( !FUNC_2(VAR_4) );

  if( VAR_4->nData==0 ){
    VAR_4->pData = ((void*)0);
    return;
  }

  VAR_6 = FUNC_1(VAR_4->pData, &VAR_5);
  if( VAR_5==VAR_2 ){
    VAR_6 += FUNC_1(VAR_4->pData+VAR_6, &VAR_4->iColumn);
    VAR_4->iPosition = 0;
    VAR_4->iStartOffset = 0;
    VAR_6 += FUNC_1(VAR_4->pData+VAR_6, &VAR_5);
  }

  FUNC_0( VAR_5!=VAR_2 );

  if( VAR_5==VAR_3 ){
    VAR_4->nData = 0;
    VAR_4->pData = ((void*)0);
    return;
  }

  VAR_4->iPosition += VAR_5-VAR_1;
  if( VAR_4->iType==VAR_0 ){
    VAR_6 += FUNC_1(VAR_4->pData+VAR_6, &VAR_5);
    VAR_4->iStartOffset += VAR_5;
    VAR_6 += FUNC_1(VAR_4->pData+VAR_6, &VAR_5);
    VAR_4->iEndOffset = VAR_4->iStartOffset+VAR_5;
  }
  FUNC_0( VAR_6<=VAR_4->nData );
  VAR_4->pData += VAR_6;
  VAR_4->nData -= VAR_6;
}
