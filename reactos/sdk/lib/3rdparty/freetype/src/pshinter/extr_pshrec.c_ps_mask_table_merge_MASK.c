
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ num_bits; int* bytes; scalar_t__ end_point; } ;
struct TYPE_9__ {scalar_t__ num_masks; scalar_t__ masks; } ;
typedef TYPE_1__* PS_Mask_Table ;
typedef TYPE_2__ PS_MaskRec ;
typedef TYPE_2__* PS_Mask ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Int ;
typedef int FT_Error ;
typedef int FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static FT_Error
  FUNC_4( PS_Mask_Table VAR_1,
                       FT_UInt VAR_2,
                       FT_UInt VAR_3,
                       FT_Memory VAR_4 )
  {
    FT_Error VAR_5 = VAR_0;



    if ( VAR_2 > VAR_3 )
    {
      FT_UInt VAR_6;


      VAR_6 = VAR_2;
      VAR_2 = VAR_3;
      VAR_3 = VAR_6;
    }

    if ( VAR_2 < VAR_3 && VAR_3 < VAR_1->num_masks )
    {


      PS_Mask VAR_7 = VAR_1->masks + VAR_2;
      PS_Mask VAR_8 = VAR_1->masks + VAR_3;
      FT_UInt VAR_9 = VAR_7->num_bits;
      FT_UInt VAR_10 = VAR_8->num_bits;
      FT_Int VAR_11;


      if ( VAR_10 > 0 )
      {
        FT_UInt VAR_12;
        FT_Byte* VAR_13;
        FT_Byte* VAR_14;




        if ( VAR_10 > VAR_9 )
        {
          VAR_5 = FUNC_3( VAR_7, VAR_10, VAR_4 );
          if ( VAR_5 )
            goto Exit;

          for ( VAR_12 = VAR_9; VAR_12 < VAR_10; VAR_12++ )
            FUNC_2( VAR_7, VAR_12 );
        }


        VAR_13 = VAR_8->bytes;
        VAR_14 = VAR_7->bytes;
        VAR_12 = ( VAR_10 + 7 ) >> 3;

        for ( ; VAR_12 > 0; VAR_12-- )
        {
          VAR_14[0] = (FT_Byte)( VAR_14[0] | VAR_13[0] );
          VAR_14++;
          VAR_13++;
        }
      }



      VAR_8->num_bits = 0;
      VAR_8->end_point = 0;


      VAR_11 = (FT_Int)( VAR_1->num_masks - 1 - VAR_3 );
      if ( VAR_11 > 0 )
      {

        PS_MaskRec VAR_15 = *VAR_8;


        FUNC_1( VAR_8,
                    VAR_8 + 1,
                    (FT_UInt)VAR_11 * sizeof ( PS_MaskRec ) );

        VAR_8[VAR_11] = VAR_15;
      }

      VAR_1->num_masks--;
    }
    else
      FUNC_0(( "ps_mask_table_merge: ignoring invalid indices (%d,%d)\n",
                  VAR_2, VAR_3 ));

  Exit:
    return VAR_5;
  }
