
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int string_table ;
typedef int USHORT ;
typedef int UINT ;
typedef int IStorage ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int,int*,int,int,int ) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int *,int ,int ,int **,int*) ;
 int VAR_5 ;
 int VAR_6 ;

string_table *FUNC_6( IStorage *VAR_7, UINT *VAR_8 )
{
    string_table *VAR_9 = ((void*)0);
    CHAR *VAR_10 = ((void*)0);
    USHORT *VAR_11 = ((void*)0);
    UINT VAR_12, VAR_13 = 0, VAR_14 = 0, VAR_15;
    DWORD VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

    VAR_12 = FUNC_5( VAR_7, VAR_6, VAR_4, (BYTE **)&VAR_11, &VAR_14 );
    if( VAR_12 != VAR_1)
        goto end;
    VAR_12 = FUNC_5( VAR_7, VAR_5, VAR_4, (BYTE **)&VAR_10, &VAR_13 );
    if( VAR_12 != VAR_1)
        goto end;

    if ( (VAR_14 > 4) && (VAR_11[1] & 0x8000) )
        *VAR_8 = VAR_2;
    else
        *VAR_8 = sizeof(USHORT);

    VAR_17 = VAR_14/4;
    if( VAR_14 > 4 )
        VAR_15 = VAR_11[0] | ( (VAR_11[1] & ~0x8000) << 16 );
    else
        VAR_15 = VAR_0;
    VAR_9 = FUNC_3( VAR_17, VAR_15 );
    if (!VAR_9)
        goto end;

    VAR_18 = 0;
    VAR_20 = 1;
    VAR_16 = 1;
    while( VAR_16<VAR_17 )
    {

        VAR_21 = VAR_11[VAR_16*2+1];


        if (VAR_11[VAR_16*2] == 0 && VAR_21 == 0)
        {
            VAR_16++;
            VAR_20++;
            continue;
        }






        if( VAR_11[VAR_16*2] == 0)
        {
            VAR_19 = (VAR_11[VAR_16*2+3] << 16) + VAR_11[VAR_16*2+2];
            VAR_16 += 2;
        }
        else
        {
            VAR_19 = VAR_11[VAR_16*2];
            VAR_16 += 1;
        }

        if ( (VAR_18 + VAR_19) > VAR_13 )
        {
            FUNC_0("string table corrupt?\n");
            break;
        }

        VAR_12 = FUNC_2( VAR_9, VAR_20, VAR_10+VAR_18, VAR_19, VAR_21, VAR_3 );
        if( VAR_12 != VAR_20 )
            FUNC_0("Failed to add string %d\n", VAR_20 );
        VAR_20++;
        VAR_18 += VAR_19;
    }

    if ( VAR_13 != VAR_18 )
        FUNC_0("string table load failed! (%08x != %08x), please report\n", VAR_13, VAR_18 );

    FUNC_1("Loaded %d strings\n", VAR_17);

end:
    FUNC_4( VAR_11 );
    FUNC_4( VAR_10 );

    return VAR_9;
}
