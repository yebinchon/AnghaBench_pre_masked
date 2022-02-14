
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
struct TYPE_5__ {scalar_t__ const id; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ const type_id; int count; } ;
typedef TYPE_1__ NE_TYPEINFO ;
typedef TYPE_2__ NE_NAMEINFO ;
typedef char* LPSTR ;
typedef scalar_t__ LPBYTE ;
typedef TYPE_3__ IMAGE_OS2_HEADER ;
typedef int HFILE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL FUNC_6( HFILE VAR_6, DWORD *VAR_7, DWORD *VAR_8 )
{
    const WORD VAR_9 = VAR_4 | 0x8000;
    const WORD VAR_10 = VAR_5 | 0x8000;
    IMAGE_OS2_HEADER VAR_11;
    NE_TYPEINFO *VAR_12;
    NE_NAMEINFO *VAR_13;
    DWORD VAR_14;
    LPBYTE VAR_15;
    DWORD VAR_16;
    int VAR_17;


    VAR_14 = FUNC_4( VAR_6, 0, VAR_1 );
    if ( sizeof(VAR_11) != FUNC_3( VAR_6, (LPSTR)&VAR_11, sizeof(VAR_11) ) ) return VAR_0;

    VAR_16 = VAR_11.ne_restab - VAR_11.ne_rsrctab;
    if ( !VAR_16 )
    {
        FUNC_5("No resources in NE dll\n" );
        return VAR_0;
    }


    VAR_15 = FUNC_1( FUNC_0(), 0, VAR_16 );
    if ( !VAR_15 ) return VAR_0;

    FUNC_4( VAR_6, VAR_11.ne_rsrctab + VAR_14, VAR_2 );
    if ( VAR_16 != FUNC_3( VAR_6, (char*)VAR_15, VAR_16 ) )
    {
        FUNC_2( FUNC_0(), 0, VAR_15 );
        return VAR_0;
    }


    VAR_12 = (NE_TYPEINFO *)(VAR_15 + 2);
    while (VAR_12->type_id)
    {
        if (VAR_12->type_id == VAR_9) goto found_type;
        VAR_12 = (NE_TYPEINFO *)((char *)(VAR_12 + 1) +
                                   VAR_12->count * sizeof(NE_NAMEINFO));
    }
    FUNC_5("No typeid entry found\n" );
    FUNC_2( FUNC_0(), 0, VAR_15 );
    return VAR_0;

 found_type:
    VAR_13 = (NE_NAMEINFO *)(VAR_12 + 1);

    for (VAR_17 = VAR_12->count; VAR_17 > 0; VAR_17--, VAR_13++)
        if (VAR_13->id == VAR_10) goto found_name;

    FUNC_5("No resid entry found\n" );
    FUNC_2( FUNC_0(), 0, VAR_15 );
    return VAR_0;

 found_name:

    if ( VAR_7 ) *VAR_7 = VAR_13->length << *(WORD *)VAR_15;
    if ( VAR_8 ) *VAR_8 = VAR_13->offset << *(WORD *)VAR_15;

    FUNC_2( FUNC_0(), 0, VAR_15 );
    return VAR_3;
}
