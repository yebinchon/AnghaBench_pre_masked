
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct spellfix1_row {int dummy; } ;
struct TYPE_4__ {int nRow; int nAlloc; struct spellfix1_row* a; } ;
typedef TYPE_1__ spellfix1_cursor ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct spellfix1_row*) ;
 struct spellfix1_row* FUNC_3 (struct spellfix1_row*,int) ;

__attribute__((used)) static void FUNC_4(spellfix1_cursor *VAR_0, int VAR_1){
  struct spellfix1_row *VAR_2;
  FUNC_0( VAR_1>=VAR_0->nRow );
  VAR_2 = FUNC_3(VAR_0->a, sizeof(VAR_0->a[0])*VAR_1);
  if( VAR_2==0 && VAR_1>0 ){
    FUNC_1(VAR_0);
    FUNC_2(VAR_0->a);
    VAR_0->nAlloc = 0;
    VAR_0->a = 0;
  }else{
    VAR_0->nAlloc = VAR_1;
    VAR_0->a = VAR_2;
  }
}
