
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sym_define; } ;
struct TYPE_6__ {int* d; struct TYPE_6__* next; } ;
typedef TYPE_1__ Sym ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int*,int*) ;
 TYPE_1__* FUNC_3 (int *,int,int,int ) ;
 TYPE_2__** VAR_2 ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(int VAR_3, int VAR_4, int *VAR_5, Sym *VAR_6)
{
 Sym *VAR_7;

 VAR_7 = FUNC_0 (VAR_3);
 if (VAR_7 && !FUNC_2 (VAR_7->d, VAR_5)) {
  FUNC_4 ("%s redefined", FUNC_1 (VAR_3, ((void*)0)));
 }

 VAR_7 = FUNC_3 (&VAR_1, VAR_3, VAR_4, 0);
 if (!VAR_7) {
  return;
 }
 VAR_7->d = VAR_5;
 VAR_7->next = VAR_6;
 if (VAR_3 >= VAR_0) {
  VAR_2[VAR_3 - VAR_0]->sym_define = VAR_7;
 }
}
