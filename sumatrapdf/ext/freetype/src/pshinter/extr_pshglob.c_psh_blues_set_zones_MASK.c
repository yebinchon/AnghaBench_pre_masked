
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ count; TYPE_2__* zones; } ;
struct TYPE_9__ {scalar_t__ org_ref; scalar_t__ org_delta; scalar_t__ org_bottom; scalar_t__ org_top; } ;
struct TYPE_8__ {TYPE_3__ normal_bottom; TYPE_3__ normal_top; TYPE_3__ family_bottom; TYPE_3__ family_top; } ;
typedef TYPE_1__* PSH_Blues ;
typedef TYPE_2__* PSH_Blue_Zone ;
typedef TYPE_3__* PSH_Blue_Table ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Short ;
typedef scalar_t__ FT_Int ;


 int FUNC_0 (TYPE_1__*,int,scalar_t__,int *,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static void
  FUNC_1( PSH_Blues VAR_0,
                       FT_UInt VAR_1,
                       FT_Short* VAR_2,
                       FT_UInt VAR_3,
                       FT_Short* VAR_4,
                       FT_Int VAR_5,
                       FT_Int VAR_6 )
  {
    PSH_Blue_Table VAR_7, VAR_8;
    FT_UInt VAR_9, VAR_10;


    if ( VAR_6 )
    {
      VAR_7 = &VAR_0->family_top;
      VAR_8 = &VAR_0->family_bottom;
    }
    else
    {
      VAR_7 = &VAR_0->normal_top;
      VAR_8 = &VAR_0->normal_bottom;
    }



    VAR_7->count = 0;
    VAR_8->count = 0;


    FUNC_0( VAR_0, 0,
                           VAR_1, VAR_2, VAR_7, VAR_8 );
    FUNC_0( VAR_0, 1,
                           VAR_3, VAR_4, VAR_7, VAR_8 );

    VAR_9 = VAR_7->count;
    VAR_10 = VAR_8->count;


    if ( VAR_9 > 0 )
    {
      PSH_Blue_Zone VAR_11 = VAR_7->zones;


      for ( VAR_1 = VAR_9; VAR_1 > 0; VAR_1--, VAR_11++ )
      {
        FT_Int VAR_12;


        if ( VAR_1 > 1 )
        {
          VAR_12 = VAR_11[1].org_ref - VAR_11[0].org_ref;
          if ( VAR_11->org_delta > VAR_12 )
            VAR_11->org_delta = VAR_12;
        }

        VAR_11->org_bottom = VAR_11->org_ref;
        VAR_11->org_top = VAR_11->org_delta + VAR_11->org_ref;
      }
    }


    if ( VAR_10 > 0 )
    {
      PSH_Blue_Zone VAR_13 = VAR_8->zones;


      for ( VAR_1 = VAR_10; VAR_1 > 0; VAR_1--, VAR_13++ )
      {
        FT_Int VAR_14;


        if ( VAR_1 > 1 )
        {
          VAR_14 = VAR_13[0].org_ref - VAR_13[1].org_ref;
          if ( VAR_13->org_delta < VAR_14 )
            VAR_13->org_delta = VAR_14;
        }

        VAR_13->org_top = VAR_13->org_ref;
        VAR_13->org_bottom = VAR_13->org_delta + VAR_13->org_ref;
      }
    }


    {
      FT_Int VAR_15, VAR_16, VAR_17, VAR_18;
      PSH_Blue_Zone VAR_19;


      VAR_19 = VAR_7->zones;
      VAR_1 = VAR_9;

      for ( VAR_15 = 1; VAR_15 >= 0; VAR_15-- )
      {
        if ( VAR_1 > 0 )
        {

          VAR_19->org_bottom -= VAR_5;



          VAR_16 = VAR_19->org_top;

          for ( VAR_1--; VAR_1 > 0; VAR_1-- )
          {
            VAR_17 = VAR_19[1].org_bottom;
            VAR_18 = VAR_17 - VAR_16;

            if ( VAR_18 / 2 < VAR_5 )
              VAR_19[0].org_top = VAR_19[1].org_bottom = VAR_16 + VAR_18 / 2;
            else
            {
              VAR_19[0].org_top = VAR_16 + VAR_5;
              VAR_19[1].org_bottom = VAR_17 - VAR_5;
            }

            VAR_19++;
            VAR_16 = VAR_19->org_top;
          }


          VAR_19->org_top = VAR_16 + VAR_5;
        }
        VAR_19 = VAR_8->zones;
        VAR_1 = VAR_10;
      }
    }
  }
