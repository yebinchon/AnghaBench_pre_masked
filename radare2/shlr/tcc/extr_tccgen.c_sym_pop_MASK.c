
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sym_identifier; TYPE_2__* sym_struct; } ;
typedef TYPE_1__ TokenSym ;
struct TYPE_8__ {int v; struct TYPE_8__* prev_tok; struct TYPE_8__* prev; } ;
typedef TYPE_2__ Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__** VAR_4 ;

void FUNC_2(Sym **VAR_5, Sym *VAR_6) {
 Sym *VAR_7, *VAR_8, **VAR_9;
 TokenSym *VAR_10;
 int VAR_11;
 if (!VAR_6) {
  return;
 }

 VAR_7 = *VAR_5;
 while (VAR_7 != VAR_6) {
  VAR_8 = VAR_7->prev;
  VAR_11 = VAR_7->v;


  if (!(VAR_11 & VAR_0) && (VAR_11 & ~VAR_2) < VAR_1) {
   int VAR_12 = (VAR_11 & ~VAR_2);
   if (VAR_12 < VAR_3) {
    FUNC_0 ("Not found\n");
    return;
   }
   VAR_10 = VAR_4[VAR_12 - VAR_3];
   if (VAR_11 & VAR_2) {
    VAR_9 = &VAR_10->sym_struct;
   } else {
    VAR_9 = &VAR_10->sym_identifier;
   }
   *VAR_9 = VAR_7->prev_tok;
  }
  FUNC_1 (VAR_7);
  VAR_7 = VAR_8;
 }
 *VAR_5 = VAR_6;
}
