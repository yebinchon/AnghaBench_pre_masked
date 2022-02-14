
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ME_String ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static ME_String *FUNC_1( void (*VAR_0)(ME_String *) )
{
  ME_String *VAR_1 = FUNC_0( sizeof(*VAR_1) );

  if (VAR_1) VAR_1->free = VAR_0;
  return VAR_1;
}
