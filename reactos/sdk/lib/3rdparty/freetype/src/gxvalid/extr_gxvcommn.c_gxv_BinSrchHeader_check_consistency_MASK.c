
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unitSize; int nUnits; int searchRange; int entrySelector; scalar_t__ rangeShift; } ;
typedef int GXV_Validator ;
typedef TYPE_1__ GXV_BinSrchHeader ;
typedef int FT_UShort ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
  FUNC_2( GXV_BinSrchHeader* VAR_1,
                                       GXV_Validator VAR_2 )
  {
    FT_UShort VAR_3;
    FT_UShort VAR_4;
    FT_UShort VAR_5;


    if ( VAR_1->unitSize == 0 )
      VAR_0;

    if ( VAR_1->nUnits == 0 )
    {
      if ( VAR_1->searchRange == 0 &&
           VAR_1->entrySelector == 0 &&
           VAR_1->rangeShift == 0 )
        return;
      else
        VAR_0;
    }

    for ( VAR_3 = 1, VAR_4 = 1;
          ( VAR_3 * 2 ) <= VAR_1->nUnits &&
            VAR_3 < 0x8000U;
          VAR_3 *= 2, VAR_4++ )
      ;

    VAR_4--;
    VAR_3 = (FT_UShort)( VAR_3 * VAR_1->unitSize );
    VAR_5 = (FT_UShort)( VAR_1->nUnits * VAR_1->unitSize
                               - VAR_3 );

    if ( VAR_3 != VAR_1->searchRange ||
         VAR_4 != VAR_1->entrySelector ||
         VAR_5 != VAR_1->rangeShift )
    {
      FUNC_1(( "Inconsistency found in BinSrchHeader\n" ));
      FUNC_1(( "originally: unitSize=%d, nUnits=%d, "
                  "searchRange=%d, entrySelector=%d, "
                  "rangeShift=%d\n",
                  VAR_1->unitSize, VAR_1->nUnits,
                  VAR_1->searchRange, VAR_1->entrySelector,
                  VAR_1->rangeShift ));
      FUNC_1(( "calculated: unitSize=%d, nUnits=%d, "
                  "searchRange=%d, entrySelector=%d, "
                  "rangeShift=%d\n",
                  VAR_1->unitSize, VAR_1->nUnits,
                  VAR_3, VAR_4, VAR_5 ));

      FUNC_0( VAR_0 );
    }
  }
