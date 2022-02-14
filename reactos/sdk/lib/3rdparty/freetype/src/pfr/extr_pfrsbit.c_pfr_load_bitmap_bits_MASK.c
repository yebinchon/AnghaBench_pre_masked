
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rows; scalar_t__ width; } ;
typedef int PFR_BitWriterRec ;
typedef int FT_UInt ;
typedef int FT_Error ;
typedef int FT_Byte ;
typedef int FT_Bool ;
typedef TYPE_1__ FT_Bitmap ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static FT_Error
  FUNC_4( FT_Byte* VAR_1,
                        FT_Byte* VAR_2,
                        FT_UInt VAR_3,
                        FT_Bool VAR_4,
                        FT_Bitmap* VAR_5 )
  {
    FT_Error VAR_6 = VAR_0;
    PFR_BitWriterRec VAR_7;


    if ( VAR_5->rows > 0 && VAR_5->width > 0 )
    {
      FUNC_3( &VAR_7, VAR_5, VAR_4 );

      switch ( VAR_3 )
      {
      case 0:
        FUNC_0( &VAR_7, VAR_1, VAR_2 );
        break;

      case 1:
        FUNC_1( &VAR_7, VAR_1, VAR_2 );
        break;

      case 2:
        FUNC_2( &VAR_7, VAR_1, VAR_2 );
        break;

      default:
        ;
      }
    }

    return VAR_6;
  }
