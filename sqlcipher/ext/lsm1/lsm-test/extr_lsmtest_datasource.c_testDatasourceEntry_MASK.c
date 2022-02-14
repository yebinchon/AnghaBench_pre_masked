
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int eType; int nMinKey; int nMaxVal; int nMinVal; void* aVal; void* aKey; int nMaxKey; } ;
typedef TYPE_1__ Datasource ;




 int FUNC_0 (int) ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (int) ;

void FUNC_4(
  Datasource *VAR_0,
  int VAR_1,
  void **VAR_2, int *VAR_3,
  void **VAR_4, int *VAR_5
){
  FUNC_0( (VAR_2==0)==(VAR_3==0) );
  FUNC_0( (VAR_4==0)==(VAR_5==0) );

  if( VAR_2 ){
    int VAR_6 = 0;
    switch( VAR_0->eType ){
      case 129: {
        int VAR_7 = (1 + VAR_0->nMaxKey - VAR_0->nMinKey);
        VAR_6 = (int)( FUNC_3((u32)VAR_1) % VAR_7 ) + VAR_0->nMinKey;
        FUNC_2((u32)VAR_1, VAR_0->aKey, VAR_6);
        break;
      }
      case 128:
        VAR_6 = FUNC_1(VAR_0->aKey, "%012d", VAR_1);
        break;
    }
    *VAR_2 = VAR_0->aKey;
    *VAR_3 = VAR_6;
  }
  if( VAR_4 ){
    u32 VAR_8 = FUNC_3((u32)VAR_1)%(1+VAR_0->nMaxVal-VAR_0->nMinVal)+VAR_0->nMinVal;
    FUNC_2((u32)~VAR_1, VAR_0->aVal, (int)VAR_8);
    *VAR_4 = VAR_0->aVal;
    *VAR_5 = (int)VAR_8;
  }
}
