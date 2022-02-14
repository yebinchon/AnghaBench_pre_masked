
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * varattnos; int varno; } ;
typedef TYPE_1__ pull_varattnos_context ;
typedef int Node ;
typedef int Index ;
typedef int Bitmapset ;


 int FUNC_0 (int *,TYPE_1__*) ;

void
FUNC_1(Node *VAR_0, Index VAR_1, Bitmapset **VAR_2)
{
 pull_varattnos_context VAR_3;

 VAR_3.varattnos = *VAR_2;
 VAR_3.varno = VAR_1;

 (void) FUNC_0(VAR_0, &VAR_3);

 *VAR_2 = VAR_3.varattnos;
}
