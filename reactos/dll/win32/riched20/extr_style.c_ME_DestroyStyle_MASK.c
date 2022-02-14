
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int script_cache; int * font_cache; int entry; } ;
typedef TYPE_1__ ME_Style ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(ME_Style *VAR_0)
{
  FUNC_2( &VAR_0->entry );
  if (VAR_0->font_cache)
  {
    FUNC_3( VAR_0->font_cache );
    VAR_0->font_cache = ((void*)0);
  }
  FUNC_0( &VAR_0->script_cache );
  FUNC_1(VAR_0);
}
