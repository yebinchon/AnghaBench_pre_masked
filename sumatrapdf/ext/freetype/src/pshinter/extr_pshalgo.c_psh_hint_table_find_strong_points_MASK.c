
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int org_pos; int org_len; } ;
struct TYPE_10__ {scalar_t__ num_hints; TYPE_3__** sort; } ;
struct TYPE_9__ {int org_u; int dir_in; int dir_out; scalar_t__ flags2; TYPE_3__* hint; } ;
typedef TYPE_1__* PSH_Point ;
typedef TYPE_2__* PSH_Hint_Table ;
typedef TYPE_3__* PSH_Hint ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Pos ;
typedef int FT_Int ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_5( PSH_Hint_Table VAR_5,
                                     PSH_Point VAR_6,
                                     FT_UInt VAR_7,
                                     FT_Int VAR_8,
                                     FT_Int VAR_9 )
  {
    PSH_Hint* VAR_10 = VAR_5->sort;
    FT_UInt VAR_11 = VAR_5->num_hints;


    for ( ; VAR_7 > 0; VAR_7--, VAR_6++ )
    {
      FT_Int VAR_12 = 0;
      FT_Pos VAR_13 = VAR_6->org_u;


      if ( FUNC_3( VAR_6 ) )
        continue;

      if ( FUNC_1( VAR_6->dir_in, VAR_9 ) )
        VAR_12 = VAR_6->dir_in;

      else if ( FUNC_1( VAR_6->dir_out, VAR_9 ) )
        VAR_12 = VAR_6->dir_out;

      if ( VAR_12 )
      {
        if ( VAR_12 == VAR_9 )
        {
          FT_UInt VAR_14;


          for ( VAR_14 = 0; VAR_14 < VAR_11; VAR_14++ )
          {
            PSH_Hint VAR_15 = VAR_10[VAR_14];
            FT_Pos VAR_16 = VAR_13 - VAR_15->org_pos;


            if ( VAR_16 < VAR_8 && -VAR_16 < VAR_8 )
            {
              FUNC_4( VAR_6 );
              VAR_6->flags2 |= VAR_2;
              VAR_6->hint = VAR_15;
              break;
            }
          }
        }
        else if ( VAR_12 == -VAR_9 )
        {
          FT_UInt VAR_17;


          for ( VAR_17 = 0; VAR_17 < VAR_11; VAR_17++ )
          {
            PSH_Hint VAR_18 = VAR_10[VAR_17];
            FT_Pos VAR_19 = VAR_13 - VAR_18->org_pos - VAR_18->org_len;


            if ( VAR_19 < VAR_8 && -VAR_19 < VAR_8 )
            {
              FUNC_4( VAR_6 );
              VAR_6->flags2 |= VAR_1;
              VAR_6->hint = VAR_18;
              break;
            }
          }
        }
      }


      else if ( FUNC_2( VAR_6 ) )
      {

        FT_UInt VAR_20, VAR_21, VAR_22;


        if ( VAR_9 == VAR_0 )
        {
          VAR_21 = VAR_4;
          VAR_22 = VAR_3;
        }
        else
        {
          VAR_21 = VAR_3;
          VAR_22 = VAR_4;
        }

        if ( VAR_6->flags2 & VAR_21 )
        {
          for ( VAR_20 = 0; VAR_20 < VAR_11; VAR_20++ )
          {
            PSH_Hint VAR_23 = VAR_10[VAR_20];
            FT_Pos VAR_24 = VAR_13 - VAR_23->org_pos;


            if ( VAR_24 < VAR_8 && -VAR_24 < VAR_8 )
            {
              VAR_6->flags2 |= VAR_2;
              VAR_6->hint = VAR_23;
              FUNC_4( VAR_6 );
              break;
            }
          }
        }
        else if ( VAR_6->flags2 & VAR_22 )
        {
          for ( VAR_20 = 0; VAR_20 < VAR_11; VAR_20++ )
          {
            PSH_Hint VAR_25 = VAR_10[VAR_20];
            FT_Pos VAR_26 = VAR_13 - VAR_25->org_pos - VAR_25->org_len;


            if ( VAR_26 < VAR_8 && -VAR_26 < VAR_8 )
            {
              VAR_6->flags2 |= VAR_1;
              VAR_6->hint = VAR_25;
              FUNC_4( VAR_6 );
              break;
            }
          }
        }

        if ( !VAR_6->hint )
        {
          for ( VAR_20 = 0; VAR_20 < VAR_11; VAR_20++ )
          {
            PSH_Hint VAR_27 = VAR_10[VAR_20];


            if ( VAR_13 >= VAR_27->org_pos &&
                 VAR_13 <= FUNC_0( VAR_27->org_pos, VAR_27->org_len ) )
            {
              VAR_6->hint = VAR_27;
              break;
            }
          }
        }
      }


    }
  }
