
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ narray; int * array; scalar_t__ nlist; int * last; int first; } ;
typedef TYPE_1__ filemap_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

void
FUNC_2(void)
{
 filemap_t *VAR_1;

 VAR_1 = FUNC_1(sizeof(filemap_t));
 VAR_1->first = *(VAR_1->last = ((void*)0));
 VAR_1->nlist = 0;
 VAR_1->array = ((void*)0);
 VAR_1->narray = 0;

 FUNC_0(VAR_0 == ((void*)0));
 VAR_0 = VAR_1;
}
