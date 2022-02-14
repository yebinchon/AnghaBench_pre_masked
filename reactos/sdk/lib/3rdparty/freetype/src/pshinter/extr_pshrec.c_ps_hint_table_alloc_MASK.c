
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ flags; scalar_t__ len; scalar_t__ pos; } ;
struct TYPE_6__ {scalar_t__ num_hints; scalar_t__ max_hints; scalar_t__ hints; } ;
typedef TYPE_1__* PS_Hint_Table ;
typedef TYPE_2__* PS_Hint ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static FT_Error
  FUNC_1( PS_Hint_Table VAR_1,
                       FT_Memory VAR_2,
                       PS_Hint *VAR_3 )
  {
    FT_Error VAR_4 = VAR_0;
    FT_UInt VAR_5;
    PS_Hint VAR_6 = ((void*)0);


    VAR_5 = VAR_1->num_hints;
    VAR_5++;

    if ( VAR_5 >= VAR_1->max_hints )
    {
      VAR_4 = FUNC_0( VAR_1, VAR_5, VAR_2 );
      if ( VAR_4 )
        goto Exit;
    }

    VAR_6 = VAR_1->hints + VAR_5 - 1;
    VAR_6->pos = 0;
    VAR_6->len = 0;
    VAR_6->flags = 0;

    VAR_1->num_hints = VAR_5;

  Exit:
    *VAR_3 = VAR_6;
    return VAR_4;
  }
