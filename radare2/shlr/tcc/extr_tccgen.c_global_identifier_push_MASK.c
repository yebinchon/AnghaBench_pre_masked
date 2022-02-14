
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sym_identifier; } ;
struct TYPE_5__ {struct TYPE_5__* prev_tok; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int *,int,int,long long) ;
 TYPE_2__** VAR_4 ;

Sym *FUNC_2(int VAR_5, int VAR_6, long long VAR_7) {
 Sym *VAR_8, **VAR_9;
 VAR_8 = FUNC_1 (&VAR_3, VAR_5, VAR_6, VAR_7);

 if (VAR_8 && VAR_5 < VAR_0) {
  int VAR_10 = (VAR_5 & ~VAR_1);
  if (VAR_10 < VAR_2) {
   FUNC_0 ("Not found\n");
   return ((void*)0);
  }
  VAR_9 = &VAR_4[VAR_10 - VAR_2]->sym_identifier;


  while (*VAR_9) {
   VAR_9 = &(*VAR_9)->prev_tok;
  }
  VAR_8->prev_tok = ((void*)0);
  *VAR_9 = VAR_8;
 }
 return VAR_8;
}
