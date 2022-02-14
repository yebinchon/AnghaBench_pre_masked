
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int scale_delta; int scale_mult; } ;
struct TYPE_9__ {TYPE_3__* dimension; } ;
struct TYPE_8__ {scalar_t__ max_hints; int hints; } ;
typedef TYPE_1__* PSH_Hint_Table ;
typedef int PSH_Hint ;
typedef int PSH_Glyph ;
typedef TYPE_2__* PSH_Globals ;
typedef TYPE_3__* PSH_Dimension ;
typedef scalar_t__ FT_UInt ;
typedef size_t FT_Int ;
typedef int FT_Fixed ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,size_t) ;
 int FUNC_1 (int ,TYPE_2__*,size_t,int ) ;

__attribute__((used)) static void
  FUNC_2( PSH_Hint_Table VAR_2,
                              PSH_Globals VAR_3,
                              FT_Int VAR_4,
                              PSH_Glyph VAR_5 )
  {
    PSH_Hint VAR_6;
    FT_UInt VAR_7;
    VAR_6 = VAR_2->hints;
    VAR_7 = VAR_2->max_hints;

    for ( ; VAR_7 > 0; VAR_7--, VAR_6++ )
      FUNC_1( VAR_6, VAR_3, VAR_4, VAR_5 );
  }
