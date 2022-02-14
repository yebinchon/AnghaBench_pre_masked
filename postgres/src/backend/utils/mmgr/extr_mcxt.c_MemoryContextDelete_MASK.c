
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* methods; int * ident; int * firstchild; } ;
struct TYPE_12__ {int (* delete_context ) (TYPE_2__*) ;} ;
typedef TYPE_2__* MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void
FUNC_8(MemoryContext VAR_2)
{
 FUNC_1(FUNC_4(VAR_2));

 FUNC_0(VAR_2 != VAR_1);

 FUNC_0(VAR_2 != VAR_0);


 if (VAR_2->firstchild != ((void*)0))
  FUNC_3(VAR_2);







 FUNC_2(VAR_2);






 FUNC_5(VAR_2, ((void*)0));






 VAR_2->ident = ((void*)0);

 VAR_2->methods->delete_context(VAR_2);

 FUNC_6(VAR_2);
}
