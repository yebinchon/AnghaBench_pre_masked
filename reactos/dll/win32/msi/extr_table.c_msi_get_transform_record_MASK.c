
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int string_table ;
typedef int WCHAR ;
typedef int USHORT ;
typedef int UINT ;
struct TYPE_15__ {int type; } ;
struct TYPE_14__ {int hdr; } ;
struct TYPE_13__ {int num_cols; int db; TYPE_3__* columns; } ;
typedef TYPE_1__ MSITABLEVIEW ;
typedef TYPE_2__ MSIRECORD ;
typedef TYPE_3__ MSICOLUMNINFO ;
typedef int LPWSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int *,int,int ,int **) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_2__*,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,TYPE_3__*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int const*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,int,int const*,int) ;
 int * FUNC_13 (int const*,int,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int const*,int,int) ;

__attribute__((used)) static MSIRECORD *FUNC_16( const MSITABLEVIEW *VAR_5, const string_table *VAR_6,
                                            IStorage *VAR_7, const BYTE *VAR_8, UINT VAR_9 )
{
    UINT VAR_10, VAR_11, VAR_12 = 0;
    USHORT VAR_13;
    MSICOLUMNINFO *VAR_14 = VAR_5->columns;
    MSIRECORD *VAR_15;

    VAR_13 = VAR_8[0] | (VAR_8[1] << 8);
    VAR_8 += 2;

    VAR_15 = FUNC_3( VAR_5->num_cols );
    if( !VAR_15 )
        return VAR_15;

    FUNC_6("row ->\n");
    for( VAR_10=0; VAR_10<VAR_5->num_cols; VAR_10++ )
    {
        if ( (VAR_13&1) && (VAR_10>=(VAR_13>>8)) )
            break;

        if ( (~VAR_13&1) && (~VAR_14[VAR_10].type & VAR_1) && ((1<<VAR_10) & ~VAR_13) )
            continue;

        if( FUNC_2(VAR_5->columns[VAR_10].type) )
        {
            LPWSTR VAR_16;
            IStream *VAR_17 = ((void*)0);
            UINT VAR_18;

            VAR_12 += FUNC_7( VAR_5->db, &VAR_14[VAR_10], VAR_9 );

            VAR_18 = FUNC_11( VAR_5, VAR_15, &VAR_16 );
            if ( VAR_18 != VAR_0 )
            {
                FUNC_14( &VAR_15->hdr );
                return ((void*)0);
            }
            VAR_18 = FUNC_1( VAR_7, VAR_16, ((void*)0), VAR_3 | VAR_4, 0, &VAR_17 );
            if ( VAR_18 != VAR_0 )
            {
                FUNC_14( &VAR_15->hdr );
                FUNC_10( VAR_16 );
                return ((void*)0);
            }

            FUNC_5( VAR_15, VAR_10+1, VAR_17 );
            FUNC_6(" field %d [%s]\n", VAR_10+1, FUNC_8(VAR_16));
            FUNC_10( VAR_16 );
        }
        else if( VAR_14[VAR_10].type & VAR_2 )
        {
            int VAR_19;
            const WCHAR *VAR_20;

            VAR_11 = FUNC_15(VAR_8, VAR_12, VAR_9);
            VAR_20 = FUNC_13( VAR_6, VAR_11, &VAR_19 );
            FUNC_12( VAR_15, VAR_10+1, VAR_20, VAR_19 );
            FUNC_6(" field %d [%s]\n", VAR_10+1, FUNC_9(VAR_20, VAR_19));
            VAR_12 += VAR_9;
        }
        else
        {
            UINT VAR_21 = FUNC_7( VAR_5->db, &VAR_14[VAR_10], VAR_9 );
            switch( VAR_21 )
            {
            case 2:
                VAR_11 = FUNC_15(VAR_8, VAR_12, VAR_21);
                if (VAR_11)
                    FUNC_4( VAR_15, VAR_10+1, VAR_11-0x8000 );
                FUNC_6(" field %d [0x%04x]\n", VAR_10+1, VAR_11 );
                break;
            case 4:
                VAR_11 = FUNC_15(VAR_8, VAR_12, VAR_21);
                if (VAR_11)
                    FUNC_4( VAR_15, VAR_10+1, VAR_11^0x80000000 );
                FUNC_6(" field %d [0x%08x]\n", VAR_10+1, VAR_11 );
                break;
            default:
                FUNC_0("oops - unknown column width %d\n", VAR_21);
                break;
            }
            VAR_12 += VAR_21;
        }
    }
    return VAR_15;
}
