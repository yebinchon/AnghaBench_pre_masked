
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int td_customValueCount; TYPE_2__* td_customValues; } ;
struct TYPE_9__ {TYPE_3__ tif_dir; } ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {int field_tag; } ;
typedef TYPE_3__ TIFFDirectory ;
typedef TYPE_4__ TIFF ;



uint32 FUNC_0( TIFF *VAR_0, int VAR_1 )

{
    TIFFDirectory* VAR_2 = &VAR_0->tif_dir;

    if( VAR_1 < 0 || VAR_1 >= VAR_2->td_customValueCount )
        return (uint32)(-1);
    else
        return VAR_2->td_customValues[VAR_1].info->field_tag;
}
