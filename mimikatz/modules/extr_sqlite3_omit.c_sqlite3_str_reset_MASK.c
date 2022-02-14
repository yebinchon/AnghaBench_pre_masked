
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zText; scalar_t__ nChar; scalar_t__ nAlloc; int printfFlags; int db; } ;
typedef TYPE_1__ StrAccum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(StrAccum *VAR_1){
  if( FUNC_0(VAR_1) ){
    FUNC_1(VAR_1->db, VAR_1->zText);
    VAR_1->printfFlags &= ~VAR_0;
  }
  VAR_1->nAlloc = 0;
  VAR_1->nChar = 0;
  VAR_1->zText = 0;
}
