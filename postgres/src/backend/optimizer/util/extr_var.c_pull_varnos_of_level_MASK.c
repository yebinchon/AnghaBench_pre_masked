
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sublevels_up; int * varnos; } ;
typedef TYPE_1__ pull_varnos_context ;
typedef int * Relids ;
typedef int Node ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void*,int ) ;

Relids
FUNC_1(Node *VAR_1, int VAR_2)
{
 pull_varnos_context VAR_3;

 VAR_3.varnos = ((void*)0);
 VAR_3.sublevels_up = VAR_2;





 FUNC_0(VAR_1,
         VAR_0,
         (void *) &VAR_3,
         0);

 return VAR_3.varnos;
}
