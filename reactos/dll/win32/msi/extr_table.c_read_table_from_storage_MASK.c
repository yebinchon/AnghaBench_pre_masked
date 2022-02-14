
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int bytes_per_strref; } ;
struct TYPE_9__ {int col_count; int row_count; void*** data; TYPE_6__* colinfo; int * data_persistent; int name; } ;
typedef TYPE_1__ MSITABLE ;
typedef TYPE_2__ MSIDATABASE ;
typedef int IStorage ;
typedef void* BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_6__*,int ) ;
 int FUNC_4 (int ) ;
 void** FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void**) ;
 int FUNC_8 (TYPE_2__*,TYPE_6__*,int,int ) ;
 int FUNC_9 (int *,int ,int ,void***,int*) ;

__attribute__((used)) static UINT FUNC_10( MSIDATABASE *VAR_5, MSITABLE *VAR_6, IStorage *VAR_7 )
{
    BYTE *VAR_8 = ((void*)0);
    UINT VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13;

    FUNC_1("%s\n",FUNC_4(VAR_6->name));

    VAR_12 = FUNC_8( VAR_5, VAR_6->colinfo, VAR_6->col_count, VAR_5->bytes_per_strref );
    VAR_13 = FUNC_8( VAR_5, VAR_6->colinfo, VAR_6->col_count, VAR_2 );


    FUNC_9( VAR_7, VAR_6->name, VAR_4, &VAR_8, &VAR_9 );
    if( !VAR_8 )
        return VAR_1;

    FUNC_1("Read %d bytes\n", VAR_9 );

    if( VAR_9 % VAR_12 )
    {
        FUNC_2("Table size is invalid %d/%d\n", VAR_9, VAR_12 );
        goto err;
    }

    if ((VAR_6->row_count = VAR_9 / VAR_12))
    {
        if (!(VAR_6->data = FUNC_6( VAR_6->row_count * sizeof(USHORT *) ))) goto err;
        if (!(VAR_6->data_persistent = FUNC_6( VAR_6->row_count * sizeof(BOOL) ))) goto err;
    }


    FUNC_1("Transposing data from %d rows\n", VAR_6->row_count );
    for (VAR_10 = 0; VAR_10 < VAR_6->row_count; VAR_10++)
    {
        UINT VAR_14 = 0, VAR_15 = 0;

        VAR_6->data[VAR_10] = FUNC_5( VAR_13 );
        if( !VAR_6->data[VAR_10] )
            goto err;
        VAR_6->data_persistent[VAR_10] = VAR_4;

        for (VAR_11 = 0; VAR_11 < VAR_6->col_count; VAR_11++)
        {
            UINT VAR_16 = FUNC_3( VAR_5, &VAR_6->colinfo[VAR_11], VAR_2 );
            UINT VAR_17 = FUNC_3( VAR_5, &VAR_6->colinfo[VAR_11], VAR_5->bytes_per_strref );
            UINT VAR_18;

            if ( VAR_17 != 2 && VAR_17 != 3 && VAR_17 != 4 )
            {
                FUNC_0("oops - unknown column width %d\n", VAR_17);
                goto err;
            }
            if (VAR_6->colinfo[VAR_11].type & VAR_3 && VAR_17 < VAR_16)
            {
                for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
                {
                    if (VAR_18 < VAR_17)
                        VAR_6->data[VAR_10][VAR_15 + VAR_18] = VAR_8[VAR_14 * VAR_6->row_count + VAR_10 * VAR_17 + VAR_18];
                    else
                        VAR_6->data[VAR_10][VAR_15 + VAR_18] = 0;
                }
            }
            else
            {
                for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
                    VAR_6->data[VAR_10][VAR_15 + VAR_18] = VAR_8[VAR_14 * VAR_6->row_count + VAR_10 * VAR_17 + VAR_18];
            }
            VAR_15 += VAR_16;
            VAR_14 += VAR_17;
        }
    }

    FUNC_7( VAR_8 );
    return VAR_1;
err:
    FUNC_7( VAR_8 );
    return VAR_0;
}
