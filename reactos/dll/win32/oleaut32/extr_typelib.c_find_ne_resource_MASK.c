
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nehd ;
typedef scalar_t__ WORD ;
struct TYPE_6__ {int ne_restab; int ne_rsrctab; } ;
struct TYPE_5__ {int id; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_4__ {int type_id; int count; } ;
typedef TYPE_1__ NE_TYPEINFO ;
typedef TYPE_2__ NE_NAMEINFO ;
typedef char* LPSTR ;
typedef int LPCSTR ;
typedef int * LPBYTE ;
typedef TYPE_3__ IMAGE_OS2_HEADER ;
typedef int HFILE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;

__attribute__((used)) static BOOL FUNC_9( HFILE VAR_4, LPCSTR VAR_5, LPCSTR VAR_6,
                                DWORD *VAR_7, DWORD *VAR_8 )
{
    IMAGE_OS2_HEADER VAR_9;
    NE_TYPEINFO *VAR_10;
    NE_NAMEINFO *VAR_11;
    DWORD VAR_12;
    LPBYTE VAR_13;
    DWORD VAR_14;
    int VAR_15;


    VAR_12 = FUNC_3( VAR_4, 0, VAR_1 );
    if ( sizeof(VAR_9) != FUNC_2( VAR_4, (LPSTR)&VAR_9, sizeof(VAR_9) ) ) return VAR_0;

    VAR_14 = VAR_9.ne_restab - VAR_9.ne_rsrctab;
    if ( !VAR_14 )
    {
        FUNC_4("No resources in NE dll\n" );
        return VAR_0;
    }


    VAR_13 = FUNC_5( VAR_14 );
    if ( !VAR_13 ) return VAR_0;

    FUNC_3( VAR_4, VAR_9.ne_rsrctab + VAR_12, VAR_2 );
    if ( VAR_14 != FUNC_2( VAR_4, (char*)VAR_13, VAR_14 ) )
    {
        FUNC_6( VAR_13 );
        return VAR_0;
    }


    VAR_10 = (NE_TYPEINFO *)(VAR_13 + 2);

    if (!FUNC_0(VAR_5))
    {
        BYTE VAR_16 = FUNC_7( VAR_5 );
        while (VAR_10->type_id)
        {
            if (!(VAR_10->type_id & 0x8000))
            {
                BYTE *VAR_17 = VAR_13 + VAR_10->type_id;
                if ((*VAR_17 == VAR_16) && !FUNC_8( (char*)VAR_17+1, VAR_5, VAR_16 )) goto found_type;
            }
            VAR_10 = (NE_TYPEINFO *)((char *)(VAR_10 + 1) +
                                       VAR_10->count * sizeof(NE_NAMEINFO));
        }
    }
    else
    {
        WORD VAR_18 = FUNC_1(VAR_5) | 0x8000;
        while (VAR_10->type_id)
        {
            if (VAR_10->type_id == VAR_18) goto found_type;
            VAR_10 = (NE_TYPEINFO *)((char *)(VAR_10 + 1) +
                                       VAR_10->count * sizeof(NE_NAMEINFO));
        }
    }
    FUNC_4("No typeid entry found for %p\n", VAR_5 );
    FUNC_6( VAR_13 );
    return VAR_0;

 found_type:
    VAR_11 = (NE_NAMEINFO *)(VAR_10 + 1);

    if (!FUNC_0(VAR_6))
    {
        BYTE VAR_19 = FUNC_7( VAR_6 );
        for (VAR_15 = VAR_10->count; VAR_15 > 0; VAR_15--, VAR_11++)
        {
            BYTE *VAR_20 = VAR_13 + VAR_11->id;
            if (VAR_11->id & 0x8000) continue;
            if ((*VAR_20 == VAR_19) && !FUNC_8( (char*)VAR_20+1, VAR_6, VAR_19 )) goto found_name;
        }
    }
    else
    {
        WORD VAR_21 = FUNC_1(VAR_6) | 0x8000;
        for (VAR_15 = VAR_10->count; VAR_15 > 0; VAR_15--, VAR_11++)
            if (VAR_11->id == VAR_21) goto found_name;
    }
    FUNC_4("No resid entry found for %p\n", VAR_5 );
    FUNC_6( VAR_13 );
    return VAR_0;

 found_name:

    if ( VAR_7 ) *VAR_7 = VAR_11->length << *(WORD *)VAR_13;
    if ( VAR_8 ) *VAR_8 = VAR_11->offset << *(WORD *)VAR_13;

    FUNC_6( VAR_13 );
    return VAR_3;
}
