
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
struct TYPE_4__ {scalar_t__ nElement; scalar_t__ nData; scalar_t__ pData; scalar_t__ iType; int iDocid; } ;
typedef TYPE_1__ DLReader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int*) ;

__attribute__((used)) static void FUNC_4(DLReader *VAR_4){
  FUNC_0( !FUNC_1(VAR_4) );


  FUNC_0( VAR_4->nElement<=VAR_4->nData );
  VAR_4->pData += VAR_4->nElement;
  VAR_4->nData -= VAR_4->nElement;


  if( VAR_4->nData!=0 ){
    sqlite_int64 VAR_5;
    int VAR_6, VAR_7 = FUNC_2(VAR_4->pData, &VAR_5);
    VAR_4->iDocid += VAR_5;
    if( VAR_4->iType>=VAR_0 ){
      FUNC_0( VAR_7<VAR_4->nData );
      while( 1 ){
        VAR_7 += FUNC_3(VAR_4->pData+VAR_7, &VAR_6);
        FUNC_0( VAR_7<=VAR_4->nData );
        if( VAR_6==VAR_3 ) break;
        if( VAR_6==VAR_2 ){
          VAR_7 += FUNC_3(VAR_4->pData+VAR_7, &VAR_6);
          FUNC_0( VAR_7<VAR_4->nData );
        }else if( VAR_4->iType==VAR_1 ){
          VAR_7 += FUNC_3(VAR_4->pData+VAR_7, &VAR_6);
          VAR_7 += FUNC_3(VAR_4->pData+VAR_7, &VAR_6);
          FUNC_0( VAR_7<VAR_4->nData );
        }
      }
    }
    VAR_4->nElement = VAR_7;
    FUNC_0( VAR_4->nElement<=VAR_4->nData );
  }
}
