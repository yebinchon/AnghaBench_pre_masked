
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct patch_offset_list {scalar_t__ min; scalar_t__ max; scalar_t__ count; scalar_t__ offset_to_apply; } ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {scalar_t__ media_transform_offset; } ;
struct TYPE_18__ {int hdr; } ;
struct TYPE_17__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIPATCHINFO ;
typedef TYPE_3__ MSIDATABASE ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,TYPE_2__**) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__**) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_3__*,scalar_t__,struct patch_offset_list*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,struct patch_offset_list*) ;
 struct patch_offset_list* FUNC_10 () ;
 int FUNC_11 (struct patch_offset_list*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,struct patch_offset_list*) ;

__attribute__((used)) static UINT FUNC_13( MSIDATABASE *VAR_4, MSIPATCHINFO *VAR_5 )
{
    MSIQUERY *VAR_6;
    MSIRECORD *VAR_7;
    UINT VAR_8;

    VAR_8 = FUNC_1( VAR_4, VAR_3, &VAR_6 );
    if (VAR_8 != VAR_0)
        return VAR_8;

    VAR_8 = FUNC_4( VAR_6, 0 );
    if (VAR_8 != VAR_0)
        goto done;

    while (FUNC_5( VAR_6, &VAR_7 ) == VAR_0)
    {
        UINT VAR_9, VAR_10 = FUNC_2( VAR_7, 2 );
        struct patch_offset_list *VAR_11;


        if (VAR_10 >= VAR_2)
        {
            FUNC_7( &VAR_7->hdr );
            continue;
        }
        VAR_11 = FUNC_10();
        FUNC_9( VAR_4, VAR_10, VAR_11 );
        FUNC_8( VAR_4, VAR_10, VAR_11 );

        VAR_9 = VAR_4->media_transform_offset - VAR_11->min;
        VAR_10 = VAR_9 + VAR_11->max;

        VAR_10 += VAR_11->min;
        VAR_11->offset_to_apply = VAR_9;
        if (VAR_11->count)
        {
            VAR_8 = FUNC_12( VAR_4, VAR_11 );
            if (VAR_8 != VAR_0)
                FUNC_0("Failed to set offsets, expect breakage (%u)\n", VAR_8);
        }
        FUNC_3( VAR_7, 2, VAR_10 );
        VAR_8 = FUNC_6( VAR_6, VAR_1, VAR_7 );
        if (VAR_8 != VAR_0)
            FUNC_0("Failed to update Media table entry, expect breakage (%u)\n", VAR_8);

        VAR_4->media_transform_offset = VAR_10 + 1;

        FUNC_11( VAR_11 );
        FUNC_7( &VAR_7->hdr );
    }

done:
    FUNC_7( &VAR_6->hdr );
    return VAR_8;
}
