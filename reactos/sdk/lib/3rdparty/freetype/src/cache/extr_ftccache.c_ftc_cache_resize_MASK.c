
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int p; int mask; int slack; TYPE_1__** buckets; int memory; } ;
struct TYPE_5__ {int hash; struct TYPE_5__* link; } ;
typedef int FT_UFast ;
typedef int FT_Memory ;
typedef int FT_Long ;
typedef int FT_Error ;
typedef TYPE_1__* FTC_Node ;
typedef TYPE_2__* FTC_Cache ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__**,int,int) ;

__attribute__((used)) static void
  FUNC_1( FTC_Cache VAR_3 )
  {
    for (;;)
    {
      FTC_Node VAR_4, *VAR_5;
      FT_UFast VAR_6 = VAR_3->p;
      FT_UFast VAR_7 = VAR_3->mask;
      FT_UFast VAR_8 = VAR_7 + VAR_6 + 1;



      if ( VAR_3->slack < 0 )
      {
        FTC_Node VAR_9 = ((void*)0);





        if ( VAR_6 >= VAR_7 )
        {
          FT_Memory VAR_10 = VAR_3->memory;
          FT_Error VAR_11;



          if ( FUNC_0( VAR_3->buckets,
                               ( VAR_7 + 1 ) * 2, ( VAR_7 + 1 ) * 4 ) )
            break;
        }


        VAR_5 = VAR_3->buckets + VAR_6;

        for (;;)
        {
          VAR_4 = *VAR_5;
          if ( !VAR_4 )
            break;

          if ( VAR_4->hash & ( VAR_7 + 1 ) )
          {
            *VAR_5 = VAR_4->link;
            VAR_4->link = VAR_9;
            VAR_9 = VAR_4;
          }
          else
            VAR_5 = &VAR_4->link;
        }

        VAR_3->buckets[VAR_6 + VAR_7 + 1] = VAR_9;

        VAR_3->slack += VAR_1;

        if ( VAR_6 >= VAR_7 )
        {
          VAR_3->mask = 2 * VAR_7 + 1;
          VAR_3->p = 0;
        }
        else
          VAR_3->p = VAR_6 + 1;
      }


      else if ( VAR_3->slack > (FT_Long)VAR_8 * VAR_2 )
      {
        FT_UFast VAR_12 = VAR_6 + VAR_7;
        FTC_Node* VAR_13;


        if ( VAR_12 + 1 <= VAR_0 )
          break;

        if ( VAR_6 == 0 )
        {
          FT_Memory VAR_14 = VAR_3->memory;
          FT_Error VAR_15;



          if ( FUNC_0( VAR_3->buckets,
                               ( VAR_7 + 1 ) * 2, VAR_7 + 1 ) )
            break;

          VAR_3->mask >>= 1;
          VAR_6 = VAR_3->mask;
        }
        else
          VAR_6--;

        VAR_5 = VAR_3->buckets + VAR_6;
        while ( *VAR_5 )
          VAR_5 = &(*VAR_5)->link;

        VAR_13 = VAR_3->buckets + VAR_12;
        *VAR_5 = *VAR_13;
        *VAR_13 = ((void*)0);

        VAR_3->slack -= VAR_1;
        VAR_3->p = VAR_6;
      }


      else
        break;
    }
  }
