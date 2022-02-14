
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct patch_offset_list {scalar_t__ min; scalar_t__ max; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int hdr; } ;
struct TYPE_14__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct patch_offset_list*,TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,struct patch_offset_list*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_8( MSIDATABASE *VAR_1, struct patch_offset_list *VAR_2 )
{
    static const WCHAR VAR_3[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','`','F','i','l','e','`',' ',
        'W','H','E','R','E',' ','`','S','e','q','u','e','n','c','e','`',' ','>','=',' ','?',' ',
        'A','N','D',' ','`','S','e','q','u','e','n','c','e','`',' ','<','=',' ','?',' ',
        'O','R','D','E','R',' ','B','Y',' ','`','S','e','q','u','e','n','c','e','`',0};
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*','F','R','O','M',' ','`','P','a','t','c','h','`',' ',
        'W','H','E','R','E',' ','`','S','e','q','u','e','n','c','e','`',' ','>','=',' ','?',' ',
        'A','N','D',' ','`','S','e','q','u','e','n','c','e','`',' ','<','=',' ','?',' ',
        'O','R','D','E','R',' ','B','Y',' ','`','S','e','q','u','e','n','c','e','`',0};
    MSIRECORD *VAR_5;
    MSIQUERY *VAR_6;
    UINT VAR_7, VAR_8 = VAR_2->min, VAR_9 = VAR_2->max, VAR_10;

    VAR_7 = FUNC_1( VAR_1, VAR_3, &VAR_6 );
    if (VAR_7 != VAR_0)
        return VAR_0;

    VAR_5 = FUNC_0( 2 );
    FUNC_2( VAR_5, 1, VAR_8 );
    FUNC_2( VAR_5, 2, VAR_9 );

    VAR_7 = FUNC_3( VAR_6, VAR_5 );
    FUNC_5( &VAR_5->hdr );
    if (VAR_7 != VAR_0)
        goto done;

    while ((VAR_10 = FUNC_4( VAR_6, &VAR_5 )) == VAR_0)
    {
        VAR_7 = FUNC_6( VAR_1, VAR_2, VAR_6, VAR_5 );
        FUNC_5( &VAR_5->hdr );
        if (VAR_7 != VAR_0) goto done;
    }
    FUNC_5( &VAR_6->hdr );

    VAR_7 = FUNC_1( VAR_1, VAR_4, &VAR_6 );
    if (VAR_7 != VAR_0)
        return VAR_0;

    VAR_5 = FUNC_0( 2 );
    FUNC_2( VAR_5, 1, VAR_8 );
    FUNC_2( VAR_5, 2, VAR_9 );

    VAR_7 = FUNC_3( VAR_6, VAR_5 );
    FUNC_5( &VAR_5->hdr );
    if (VAR_7 != VAR_0)
        goto done;

    while ((VAR_10 = FUNC_4( VAR_6, &VAR_5 )) == VAR_0)
    {
        VAR_7 = FUNC_7( VAR_1, VAR_2, VAR_6, VAR_5 );
        FUNC_5( &VAR_5->hdr );
        if (VAR_7 != VAR_0) goto done;
    }

done:
    FUNC_5( &VAR_6->hdr );
    return VAR_7;
}
