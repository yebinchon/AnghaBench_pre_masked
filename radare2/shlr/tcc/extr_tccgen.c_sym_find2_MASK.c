
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v; struct TYPE_4__* prev; } ;
typedef TYPE_1__ Sym ;



Sym *FUNC_0(Sym *VAR_0, int VAR_1) {
 while (VAR_0) {
  if (VAR_0->v == VAR_1) {
   return VAR_0;
  }
  VAR_0 = VAR_0->prev;
 }
 return ((void*)0);
}
