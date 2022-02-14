
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pgno; struct TYPE_5__* pDirty; } ;
typedef TYPE_1__ PgHdr ;


 int FUNC_0 (int) ;

__attribute__((used)) static PgHdr *FUNC_1(PgHdr *VAR_0, PgHdr *VAR_1){
  PgHdr VAR_2, *VAR_3;
  VAR_3 = &VAR_2;
  FUNC_0( VAR_0!=0 && VAR_1!=0 );
  for(;;){
    if( VAR_0->pgno<VAR_1->pgno ){
      VAR_3->pDirty = VAR_0;
      VAR_3 = VAR_0;
      VAR_0 = VAR_0->pDirty;
      if( VAR_0==0 ){
        VAR_3->pDirty = VAR_1;
        break;
      }
    }else{
      VAR_3->pDirty = VAR_1;
      VAR_3 = VAR_1;
      VAR_1 = VAR_1->pDirty;
      if( VAR_1==0 ){
        VAR_3->pDirty = VAR_0;
        break;
      }
    }
  }
  return VAR_2.pDirty;
}
