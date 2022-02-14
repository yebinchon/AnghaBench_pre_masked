
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ Sym ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline Sym *FUNC_1(void) {
 Sym *VAR_1;
 VAR_1 = VAR_0;
 if (!VAR_1) {
  VAR_1 = FUNC_0 ();
 }
 VAR_0 = VAR_1->next;
 return VAR_1;
}
