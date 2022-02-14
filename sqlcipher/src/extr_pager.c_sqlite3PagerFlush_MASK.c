
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int errCode; int pPCache; } ;
struct TYPE_7__ {scalar_t__ nRef; struct TYPE_7__* pDirty; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;

int FUNC_4(Pager *VAR_2){
  int VAR_3 = VAR_2->errCode;
  if( !VAR_0 ){
    PgHdr *VAR_4 = FUNC_3(VAR_2->pPCache);
    FUNC_0( FUNC_1(VAR_2) );
    while( VAR_3==VAR_1 && VAR_4 ){
      PgHdr *VAR_5 = VAR_4->pDirty;
      if( VAR_4->nRef==0 ){
        VAR_3 = FUNC_2((void*)VAR_2, VAR_4);
      }
      VAR_4 = VAR_5;
    }
  }

  return VAR_3;
}
