
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_13__ {int td_customValueCount; TYPE_2__* td_customValues; } ;
struct TYPE_14__ {int tif_flags; TYPE_4__ tif_dir; } ;
struct TYPE_12__ {scalar_t__ field_bit; } ;
struct TYPE_11__ {int value; TYPE_1__* info; } ;
struct TYPE_10__ {scalar_t__ field_tag; } ;
typedef TYPE_2__ TIFFTagValue ;
typedef TYPE_3__ TIFFField ;
typedef TYPE_4__ TIFFDirectory ;
typedef TYPE_5__ TIFF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 TYPE_3__* FUNC_1 (TYPE_5__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

int
FUNC_3(TIFF* VAR_2, uint32 VAR_3)
{
    const TIFFField *VAR_4 = FUNC_1(VAR_2, VAR_3);
    TIFFDirectory* VAR_5 = &VAR_2->tif_dir;

    if( !VAR_4 )
        return 0;

    if( VAR_4->field_bit != VAR_0 )
        FUNC_0(VAR_2, VAR_4->field_bit);
    else
    {
        TIFFTagValue *VAR_6 = ((void*)0);
        int VAR_7;

        for (VAR_7 = 0; VAR_7 < VAR_5->td_customValueCount; VAR_7++) {

            VAR_6 = VAR_5->td_customValues + VAR_7;
            if( VAR_6->info->field_tag == VAR_3 )
                break;
        }

        if( VAR_7 < VAR_5->td_customValueCount )
        {
            FUNC_2(VAR_6->value);
            for( ; VAR_7 < VAR_5->td_customValueCount-1; VAR_7++) {
                VAR_5->td_customValues[VAR_7] = VAR_5->td_customValues[VAR_7+1];
            }
            VAR_5->td_customValueCount--;
        }
    }

    VAR_2->tif_flags |= VAR_1;

    return (1);
}
