
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int hdr; } ;
struct TYPE_12__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,int,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (int *) ;

UINT FUNC_9( MSIDATABASE *VAR_1 )
{
    static const WCHAR VAR_2[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','P','r','o','p','e','r','t','y','`',0};
    static const WCHAR VAR_3[] = {
        'I','N','S','E','R','T',' ','I','N','T','O',' ',
        '`','_','P','r','o','p','e','r','t','y','`',' ',
        '(','`','_','P','r','o','p','e','r','t','y','`',',','`','V','a','l','u','e','`',')',' ',
        'V','A','L','U','E','S',' ','(','?',',','?',')',0};
    static const WCHAR VAR_4[] = {
        'U','P','D','A','T','E',' ','`','_','P','r','o','p','e','r','t','y','`',' ',
        'S','E','T',' ','`','V','a','l','u','e','`',' ','=',' ','?',' ',
        'W','H','E','R','E',' ','`','_','P','r','o','p','e','r','t','y','`',' ','=',' ','?',0};
    MSIQUERY *VAR_5;
    UINT VAR_6;

    VAR_6 = FUNC_1( VAR_1, VAR_2, &VAR_5 );
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_4( VAR_5, 0 );
    if (VAR_6 != VAR_0)
    {
        FUNC_3( VAR_5 );
        FUNC_8( &VAR_5->hdr );
        return VAR_6;
    }

    while (1)
    {
        MSIQUERY *VAR_7, *VAR_8;
        MSIRECORD *VAR_9;

        VAR_6 = FUNC_5( VAR_5, &VAR_9 );
        if (VAR_6 != VAR_0)
            break;

        VAR_6 = FUNC_1( VAR_1, VAR_3, &VAR_7 );
        if (VAR_6 != VAR_0)
        {
            FUNC_8( &VAR_9->hdr );
            continue;
        }

        VAR_6 = FUNC_4( VAR_7, VAR_9 );
        FUNC_3( VAR_7 );
        FUNC_8( &VAR_7->hdr );
        if (VAR_6 != VAR_0)
        {
            MSIRECORD *VAR_10;

            FUNC_6("insert failed, trying update\n");

            VAR_6 = FUNC_1( VAR_1, VAR_4, &VAR_8 );
            if (VAR_6 != VAR_0)
            {
                FUNC_7("open view failed %u\n", VAR_6);
                FUNC_8( &VAR_9->hdr );
                continue;
            }

            VAR_10 = FUNC_0( 2 );
            FUNC_2( VAR_9, 1, VAR_10, 2 );
            FUNC_2( VAR_9, 2, VAR_10, 1 );
            VAR_6 = FUNC_4( VAR_8, VAR_10 );
            if (VAR_6 != VAR_0)
                FUNC_7("update failed %u\n", VAR_6);

            FUNC_3( VAR_8 );
            FUNC_8( &VAR_8->hdr );
            FUNC_8( &VAR_10->hdr );
        }

        FUNC_8( &VAR_9->hdr );
    }

    FUNC_3( VAR_5 );
    FUNC_8( &VAR_5->hdr );
    return VAR_6;
}
