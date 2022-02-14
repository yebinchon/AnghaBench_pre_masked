
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int storage; } ;
struct TYPE_9__ {scalar_t__ persistent; size_t col_count; size_t row_count; int name; int ** data; TYPE_6__* colinfo; int * data_persistent; } ;
typedef TYPE_1__ MSITABLE ;
typedef TYPE_2__ MSIDATABASE ;
typedef int BYTE ;


 int FUNC_0 (char*,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,size_t) ;
 int VAR_6 ;
 size_t FUNC_2 (TYPE_2__*,TYPE_6__*,size_t) ;
 size_t FUNC_3 (int ) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (TYPE_2__*,TYPE_6__*,size_t,size_t) ;
 size_t FUNC_7 (int **,size_t,size_t,size_t) ;
 size_t FUNC_8 (int ,int ,int *,size_t,int ) ;

__attribute__((used)) static UINT FUNC_9( MSIDATABASE *VAR_7, const MSITABLE *VAR_8, UINT VAR_9 )
{
    BYTE *VAR_10 = ((void*)0);
    UINT VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    UINT VAR_16 = VAR_0;


    if( VAR_8->persistent == VAR_4 )
        return VAR_2;

    FUNC_1("Saving %s\n", FUNC_3( VAR_8->name ) );

    VAR_14 = FUNC_6( VAR_7, VAR_8->colinfo, VAR_8->col_count, VAR_9 );
    VAR_15 = VAR_8->row_count;
    for (VAR_12 = 0; VAR_12 < VAR_8->row_count; VAR_12++)
    {
        if (!VAR_8->data_persistent[VAR_12])
        {
            VAR_15 = 1;
            break;
        }
    }
    VAR_11 = VAR_15 * VAR_14;
    VAR_10 = FUNC_4( VAR_11 );
    if( !VAR_10 )
    {
        VAR_16 = VAR_1;
        goto err;
    }

    VAR_11 = 0;
    for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
    {
        UINT VAR_17 = 0, VAR_18 = 0;

        if (!VAR_8->data_persistent[VAR_12]) break;

        for (VAR_13 = 0; VAR_13 < VAR_8->col_count; VAR_13++)
        {
            UINT VAR_19 = FUNC_2( VAR_7, &VAR_8->colinfo[VAR_13], VAR_3 );
            UINT VAR_20 = FUNC_2( VAR_7, &VAR_8->colinfo[VAR_13], VAR_9 );
            UINT VAR_21;

            if (VAR_20 != 2 && VAR_20 != 3 && VAR_20 != 4)
            {
                FUNC_0("oops - unknown column width %d\n", VAR_20);
                goto err;
            }
            if (VAR_8->colinfo[VAR_13].type & VAR_5 && VAR_20 < VAR_19)
            {
                UINT VAR_22 = FUNC_7( VAR_8->data, VAR_12, VAR_18, VAR_3 );
                if (VAR_22 > 1 << VAR_9 * 8)
                {
                    FUNC_0("string id %u out of range\n", VAR_22);
                    goto err;
                }
            }
            for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
            {
                VAR_10[VAR_17 * VAR_15 + VAR_12 * VAR_20 + VAR_21] = VAR_8->data[VAR_12][VAR_18 + VAR_21];
            }
            VAR_18 += VAR_19;
            VAR_17 += VAR_20;
        }
        VAR_11 += VAR_14;
    }

    FUNC_1("writing %d bytes\n", VAR_11);
    VAR_16 = FUNC_8( VAR_7->storage, VAR_8->name, VAR_10, VAR_11, VAR_6 );

err:
    FUNC_5( VAR_10 );
    return VAR_16;
}
