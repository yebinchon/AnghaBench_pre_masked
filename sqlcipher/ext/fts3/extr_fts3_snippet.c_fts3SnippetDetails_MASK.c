
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int iCurrent; int nPhrase; int nSnippet; TYPE_1__* aPhrase; } ;
struct TYPE_4__ {char* pTail; int iTail; int nToken; } ;
typedef TYPE_1__ SnippetPhrase ;
typedef TYPE_2__ SnippetIter ;


 int FUNC_0 (int) ;
 int FUNC_1 (char**,int*) ;

__attribute__((used)) static void FUNC_2(
  SnippetIter *VAR_0,
  u64 VAR_1,
  int *VAR_2,
  int *VAR_3,
  u64 *VAR_4,
  u64 *VAR_5
){
  int VAR_6 = VAR_0->iCurrent;
  int VAR_7 = 0;
  int VAR_8;
  u64 VAR_9 = 0;
  u64 VAR_10 = 0;

  for(VAR_8=0; VAR_8<VAR_0->nPhrase; VAR_8++){
    SnippetPhrase *VAR_11 = &VAR_0->aPhrase[VAR_8];
    if( VAR_11->pTail ){
      char *VAR_12 = VAR_11->pTail;
      int VAR_13 = VAR_11->iTail;

      while( VAR_13<(VAR_6+VAR_0->nSnippet) && VAR_13>=VAR_6 ){
        int VAR_14;
        u64 VAR_15 = (u64)1 << VAR_8;
        u64 VAR_16 = (u64)1 << (VAR_13 - VAR_6);
        FUNC_0( VAR_13>=VAR_6 && (VAR_13 - VAR_6)<=64 );
        FUNC_0( VAR_8>=0 && VAR_8<=64 );
        if( (VAR_9|VAR_1)&VAR_15 ){
          VAR_7++;
        }else{
          VAR_7 += 1000;
        }
        VAR_9 |= VAR_15;

        for(VAR_14=0; VAR_14<VAR_11->nToken; VAR_14++){
          VAR_10 |= (VAR_16>>VAR_14);
        }

        if( 0==(*VAR_12 & 0x0FE) ) break;
        FUNC_1(&VAR_12, &VAR_13);
      }
    }
  }


  *VAR_2 = VAR_6;
  *VAR_3 = VAR_7;
  *VAR_4 = VAR_9;
  *VAR_5 = VAR_10;
}
