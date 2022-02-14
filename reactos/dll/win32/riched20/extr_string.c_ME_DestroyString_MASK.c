
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ME_String ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(ME_String *VAR_0)
{
  if (!VAR_0) return;
  if (VAR_0->free) VAR_0->free( VAR_0 );
  FUNC_0( VAR_0 );
}
