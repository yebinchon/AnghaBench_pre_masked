
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int darkenY; } ;
struct TYPE_10__ {scalar_t__ flags; size_t index; void* csCoord; int dsCoord; scalar_t__ scale; } ;
struct TYPE_9__ {int minDS; int maxDS; scalar_t__ used; void* max; void* min; } ;
typedef scalar_t__ FT_Bool ;
typedef TYPE_1__ CF2_StemHintRec ;
typedef TYPE_2__* CF2_Hint ;
typedef TYPE_3__* CF2_Font ;
typedef scalar_t__ CF2_Fixed ;
typedef int CF2_ArrStack ;


 void* FUNC_0 (void*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (int const,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void
  FUNC_8( CF2_Hint VAR_4,
                 const CF2_ArrStack VAR_5,
                 size_t VAR_6,
                 const CF2_Font VAR_7,
                 CF2_Fixed VAR_8,
                 CF2_Fixed VAR_9,
                 FT_Bool VAR_10 )
  {
    CF2_Fixed VAR_11;
    const CF2_StemHintRec* VAR_12;


    FUNC_2( VAR_4 );

    VAR_12 = (const CF2_StemHintRec*)FUNC_4(
                                         VAR_5,
                                         VAR_6 );

    VAR_11 = FUNC_3( VAR_12->max, VAR_12->min );

    if ( VAR_11 == FUNC_7( -21 ) )
    {


      if ( VAR_10 )
      {
        VAR_4->csCoord = VAR_12->max;
        VAR_4->flags = VAR_0;
      }
      else
        VAR_4->flags = 0;
    }

    else if ( VAR_11 == FUNC_7( -20 ) )
    {


      if ( VAR_10 )
        VAR_4->flags = 0;
      else
      {
        VAR_4->csCoord = VAR_12->min;
        VAR_4->flags = VAR_1;
      }
    }

    else if ( VAR_11 < 0 )
    {
      if ( VAR_10 )
      {
        VAR_4->csCoord = VAR_12->max;
        VAR_4->flags = VAR_2;
      }
      else
      {
        VAR_4->csCoord = VAR_12->min;
        VAR_4->flags = VAR_3;
      }
    }

    else
    {


      if ( VAR_10 )
      {
        VAR_4->csCoord = VAR_12->min;
        VAR_4->flags = VAR_2;
      }
      else
      {
        VAR_4->csCoord = VAR_12->max;
        VAR_4->flags = VAR_3;
      }
    }




    if ( FUNC_5( VAR_4 ) )
      VAR_4->csCoord = FUNC_0( VAR_4->csCoord, 2 * VAR_7->darkenY );

    VAR_4->csCoord = FUNC_0( VAR_4->csCoord, VAR_8 );
    VAR_4->scale = VAR_9;
    VAR_4->index = VAR_6;


    if ( VAR_4->flags != 0 && VAR_12->used )
    {
      if ( FUNC_5( VAR_4 ) )
        VAR_4->dsCoord = VAR_12->maxDS;
      else
        VAR_4->dsCoord = VAR_12->minDS;

      FUNC_6( VAR_4 );
    }
    else
      VAR_4->dsCoord = FUNC_1( VAR_4->csCoord, VAR_9 );
  }
