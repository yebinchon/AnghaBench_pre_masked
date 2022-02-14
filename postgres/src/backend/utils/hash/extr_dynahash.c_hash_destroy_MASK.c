
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ alloc; int * hcxt; } ;
typedef TYPE_1__ HTAB ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_1__*) ;

void
FUNC_3(HTAB *VAR_1)
{
 if (VAR_1 != ((void*)0))
 {

  FUNC_0(VAR_1->alloc == VAR_0);

  FUNC_0(VAR_1->hcxt != ((void*)0));

  FUNC_2("destroy", VAR_1);




  FUNC_1(VAR_1->hcxt);
 }
}
