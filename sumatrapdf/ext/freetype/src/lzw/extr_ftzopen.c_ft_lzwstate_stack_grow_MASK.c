
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stack_top; scalar_t__ stack_size; int * stack; int * stack_0; int memory; } ;
typedef int FT_Offset ;
typedef int FT_Memory ;
typedef TYPE_1__* FT_LzwState ;
typedef int FT_Error ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 int VAR_0 ;

__attribute__((used)) static int
  FUNC_1( FT_LzwState VAR_1 )
  {
    if ( VAR_1->stack_top >= VAR_1->stack_size )
    {
      FT_Memory VAR_2 = VAR_1->memory;
      FT_Error VAR_3;
      FT_Offset VAR_4 = VAR_1->stack_size;
      FT_Offset VAR_5 = VAR_4;

      VAR_5 = VAR_5 + ( VAR_5 >> 1 ) + 4;

      if ( VAR_1->stack == VAR_1->stack_0 )
      {
        VAR_1->stack = ((void*)0);
        VAR_4 = 0;
      }



      if ( VAR_5 > ( 1 << VAR_0 ) )
      {
        VAR_5 = 1 << VAR_0;
        if ( VAR_5 == VAR_4 )
          return -1;
      }

      if ( FUNC_0( VAR_1->stack, VAR_4, VAR_5 ) )
        return -1;

      VAR_1->stack_size = VAR_5;
    }
    return 0;
  }
