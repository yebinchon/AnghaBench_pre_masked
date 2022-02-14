
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t num_contours; TYPE_1__* contours; } ;
struct TYPE_7__ {scalar_t__ org_u; scalar_t__ org_v; struct TYPE_7__* next; struct TYPE_7__* prev; } ;
struct TYPE_6__ {int count; TYPE_2__* start; } ;
typedef TYPE_2__* PSH_Point ;
typedef TYPE_3__* PSH_Glyph ;
typedef size_t FT_UInt ;
typedef scalar_t__ FT_Pos ;
typedef int FT_Int ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_2( PSH_Glyph VAR_0 )
  {
    FT_UInt VAR_1;


    for ( VAR_1 = 0; VAR_1 < VAR_0->num_contours; VAR_1++ )
    {
      PSH_Point VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
      FT_Pos VAR_7, VAR_8, VAR_9, VAR_10;
      FT_Int VAR_11, VAR_12;
      FT_Int VAR_13 = 0;



      if ( VAR_0->contours[VAR_1].count < 4 )
        continue;


      VAR_2 = VAR_0->contours[VAR_1].start;

      VAR_3 = VAR_4 = VAR_2;
      do
      {
        VAR_4 = VAR_4->next;
        if ( VAR_4 == VAR_2 )
          goto Skip;

        VAR_7 = VAR_4->org_u - VAR_3->org_u;
        VAR_8 = VAR_4->org_v - VAR_3->org_v;

      } while ( VAR_7 == 0 && VAR_8 == 0 );


      VAR_5 = VAR_3;
      do
      {
        do
        {
          VAR_3 = VAR_5;
          VAR_5 = VAR_5->prev;
          if ( VAR_5 == VAR_2 )
            goto Skip;

          VAR_9 = VAR_3->org_u - VAR_5->org_u;
          VAR_10 = VAR_3->org_v - VAR_5->org_v;

        } while ( VAR_9 == 0 && VAR_10 == 0 );

        VAR_11 = FUNC_0( VAR_7, VAR_8, VAR_9, VAR_10 );

      } while ( VAR_11 == 0 );

      VAR_2 = VAR_3;
      VAR_7 = VAR_9;
      VAR_8 = VAR_10;


      do
      {

        VAR_6 = VAR_4;
        do
        {
          do
          {
            VAR_4 = VAR_6;
            VAR_6 = VAR_6->next;
            if ( VAR_6 == VAR_2 )
              VAR_13 = 1;

            VAR_9 = VAR_6->org_u - VAR_4->org_u;
            VAR_10 = VAR_6->org_v - VAR_4->org_v;

          } while ( VAR_9 == 0 && VAR_10 == 0 );

          VAR_12 = FUNC_0( VAR_7, VAR_8, VAR_9, VAR_10 );

        } while ( VAR_12 == 0 );

        if ( ( VAR_12 ^ VAR_11 ) < 0 )
        {
          do
          {
            FUNC_1( VAR_3 );
            VAR_3 = VAR_3->next;
          }
          while ( VAR_3 != VAR_4 );

          FUNC_1( VAR_3 );
        }

        VAR_3 = VAR_4;
        VAR_4 = VAR_6;
        VAR_11 = VAR_12;
        VAR_7 = VAR_9;
        VAR_8 = VAR_10;

      } while ( !VAR_13 );

    Skip:
      ;
    }
  }
