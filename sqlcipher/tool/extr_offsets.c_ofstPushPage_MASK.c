
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {size_t nStack; int* aPgno; int szPg; int pgno; int f; int * aPage; int ** aStack; scalar_t__ zErr; } ;
typedef TYPE_1__ GState ;


 size_t FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 size_t FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(GState *VAR_2, int VAR_3){
  u8 *VAR_4;
  size_t VAR_5;
  if( VAR_2->zErr ) return;
  if( VAR_2->nStack >= FUNC_0(VAR_2->aStack) ){
    FUNC_5(VAR_2, "page stack overflow");
    return;
  }
  VAR_2->aPgno[VAR_2->nStack] = VAR_3;
  VAR_2->aStack[VAR_2->nStack] = VAR_4 = FUNC_7( VAR_2->szPg );
  if( VAR_4==0 ){
    FUNC_2(VAR_1, "out of memory\n");
    FUNC_1(1);
  }
  VAR_2->nStack++;
  VAR_2->aPage = VAR_4;
  VAR_2->pgno = VAR_3;
  FUNC_4(VAR_2->f, (VAR_3-1)*VAR_2->szPg, VAR_0);
  VAR_5 = FUNC_3(VAR_4, 1, VAR_2->szPg, VAR_2->f);
  if( VAR_5!=VAR_2->szPg ){
    FUNC_5(VAR_2, "unable to read page %d", VAR_3);
    FUNC_6(VAR_2);
  }
}
