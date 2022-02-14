
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* parent; } ;
struct TYPE_8__ {scalar_t__ hints; scalar_t__ max_hints; scalar_t__ num_hints; TYPE_2__** sort_global; } ;
typedef TYPE_1__* PSH_Hint_Table ;
typedef TYPE_2__* PSH_Hint ;
typedef scalar_t__ FT_UInt ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_4( PSH_Hint_Table VAR_0,
                         FT_UInt VAR_1 )
  {
    PSH_Hint VAR_2 = VAR_0->hints + VAR_1;


    if ( VAR_1 >= VAR_0->max_hints )
    {
      FUNC_0(( "psh_hint_table_record: invalid hint index %d\n", VAR_1 ));
      return;
    }


    if ( FUNC_2( VAR_2 ) )
      return;

    FUNC_1( VAR_2 );



    {
      PSH_Hint* VAR_3 = VAR_0->sort_global;
      FT_UInt VAR_4 = VAR_0->num_hints;
      PSH_Hint VAR_5;


      VAR_2->parent = ((void*)0);
      for ( ; VAR_4 > 0; VAR_4--, VAR_3++ )
      {
        VAR_5 = VAR_3[0];

        if ( FUNC_3( VAR_2, VAR_5 ) )
        {
          VAR_2->parent = VAR_5;
          break;
        }
      }
    }

    if ( VAR_0->num_hints < VAR_0->max_hints )
      VAR_0->sort_global[VAR_0->num_hints++] = VAR_2;
    else
      FUNC_0(( "psh_hint_table_record: too many sorted hints!  BUG!\n" ));
  }
