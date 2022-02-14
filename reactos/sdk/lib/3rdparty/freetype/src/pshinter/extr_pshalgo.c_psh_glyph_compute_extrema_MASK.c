
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t num_contours; size_t num_points; TYPE_2__* points; TYPE_1__* contours; } ;
struct TYPE_10__ {scalar_t__ org_u; scalar_t__ org_v; struct TYPE_10__* next; struct TYPE_10__* prev; } ;
struct TYPE_9__ {scalar_t__ count; TYPE_2__* start; } ;
typedef TYPE_2__* PSH_Point ;
typedef TYPE_3__* PSH_Glyph ;
typedef size_t FT_UInt ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_4( PSH_Glyph VAR_0 )
  {
    FT_UInt VAR_1;



    for ( VAR_1 = 0; VAR_1 < VAR_0->num_contours; VAR_1++ )
    {
      PSH_Point VAR_2 = VAR_0->contours[VAR_1].start;
      PSH_Point VAR_3, VAR_4, VAR_5;


      if ( VAR_0->contours[VAR_1].count == 0 )
        continue;

      VAR_3 = VAR_2;
      VAR_4 = VAR_3;

      do
      {
        VAR_4 = VAR_4->prev;
        if ( VAR_4 == VAR_2 )
          goto Skip;

      } while ( VAR_4->org_u == VAR_3->org_u );

      VAR_2 = VAR_3 = VAR_4->next;

      for (;;)
      {
        VAR_5 = VAR_3;
        do
        {
          VAR_5 = VAR_5->next;
          if ( VAR_5 == VAR_2 )
            goto Next;

        } while ( VAR_5->org_u == VAR_3->org_u );

        if ( VAR_4->org_u < VAR_3->org_u )
        {
          if ( VAR_5->org_u < VAR_3->org_u )
          {

            goto Extremum;
          }
        }
        else
        {
          if ( VAR_5->org_u > VAR_3->org_u )
          {

          Extremum:
            do
            {
              FUNC_1( VAR_3 );
              VAR_3 = VAR_3->next;

            } while ( VAR_3 != VAR_5 );
          }
        }

        VAR_4 = VAR_5->prev;
        VAR_3 = VAR_5;

      }

    Next:
      ;
    }



    for ( VAR_1 = 0; VAR_1 < VAR_0->num_points; VAR_1++ )
    {
      PSH_Point VAR_6, VAR_7, VAR_8;


      VAR_6 = &VAR_0->points[VAR_1];
      VAR_7 = VAR_6;
      VAR_8 = VAR_6;

      if ( FUNC_0( VAR_6 ) )
      {
        do
        {
          VAR_7 = VAR_7->prev;
          if ( VAR_7 == VAR_6 )
            goto Skip;

        } while ( VAR_7->org_v == VAR_6->org_v );

        do
        {
          VAR_8 = VAR_8->next;
          if ( VAR_8 == VAR_6 )
            goto Skip;

        } while ( VAR_8->org_v == VAR_6->org_v );
      }

      if ( VAR_7->org_v < VAR_6->org_v &&
           VAR_8->org_v > VAR_6->org_v )
      {
        FUNC_3( VAR_6 );
      }
      else if ( VAR_7->org_v > VAR_6->org_v &&
                VAR_8->org_v < VAR_6->org_v )
      {
        FUNC_2( VAR_6 );
      }

    Skip:
      ;
    }
  }
