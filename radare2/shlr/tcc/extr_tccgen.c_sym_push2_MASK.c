
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int t; int * ref; } ;
struct TYPE_9__ {int v; long long c; struct TYPE_9__* prev; int * next; int * d; TYPE_1__ type; int * asm_label; } ;
typedef TYPE_2__ Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

Sym *FUNC_3(Sym **VAR_5, int VAR_6, int VAR_7, long long VAR_8) {
 Sym *VAR_9;
 if (VAR_5 == &VAR_3) {
  for (VAR_9 = *VAR_5; VAR_9 && VAR_9 != VAR_4; VAR_9 = VAR_9->prev) {
   if (!(VAR_6 & VAR_0) && (VAR_6 & ~VAR_2) < VAR_1 && VAR_9->v == VAR_6) {
    FUNC_2 ("incompatible types for redefinition of '%s'",
     FUNC_0 (VAR_6, ((void*)0)));
    return ((void*)0);
   }
  }
 }


 VAR_9 = FUNC_1 ();
 VAR_9->asm_label = ((void*)0);
 VAR_9->v = VAR_6;
 VAR_9->type.t = VAR_7;
 VAR_9->type.ref = ((void*)0);



 VAR_9->c = VAR_8;
 VAR_9->next = ((void*)0);

 VAR_9->prev = *VAR_5;
 *VAR_5 = VAR_9;
 return VAR_9;
}
