
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nRef; int nLevel; TYPE_1__* aLevel; } ;
struct TYPE_5__ {TYPE_2__* aSeg; } ;
typedef TYPE_2__ Fts5Structure ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(Fts5Structure *VAR_0){
  if( VAR_0 && 0>=(--VAR_0->nRef) ){
    int VAR_1;
    FUNC_0( VAR_0->nRef==0 );
    for(VAR_1=0; VAR_1<VAR_0->nLevel; VAR_1++){
      FUNC_1(VAR_0->aLevel[VAR_1].aSeg);
    }
    FUNC_1(VAR_0);
  }
}
