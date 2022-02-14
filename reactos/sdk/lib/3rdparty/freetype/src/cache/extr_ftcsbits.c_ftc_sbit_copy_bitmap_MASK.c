
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buffer; } ;
struct TYPE_5__ {int rows; int buffer; scalar_t__ pitch; } ;
typedef int FT_ULong ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Int ;
typedef int FT_Error ;
typedef TYPE_1__ FT_Bitmap ;
typedef TYPE_2__* FTC_SBit ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static FT_Error
  FUNC_2( FTC_SBit VAR_1,
                        FT_Bitmap* VAR_2,
                        FT_Memory VAR_3 )
  {
    FT_Error VAR_4;
    FT_Int VAR_5 = VAR_2->pitch;
    FT_ULong VAR_6;


    if ( VAR_5 < 0 )
      VAR_5 = -VAR_5;

    VAR_6 = (FT_ULong)VAR_5 * VAR_2->rows;
    if ( !VAR_6 )
      return VAR_0;

    if ( !FUNC_0( VAR_1->buffer, VAR_6 ) )
      FUNC_1( VAR_1->buffer, VAR_2->buffer, VAR_6 );

    return VAR_4;
  }
