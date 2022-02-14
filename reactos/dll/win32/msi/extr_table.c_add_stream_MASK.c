
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {int hdr; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;
typedef int IStream ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,TYPE_2__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,char const*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (char*,int *,int ,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static UINT FUNC_8( MSIDATABASE *VAR_2, const WCHAR *VAR_3, IStream *VAR_4 )
{
    static const WCHAR VAR_5[] = {
        'I','N','S','E','R','T',' ','I','N','T','O',' ',
        '`','_','S','t','r','e','a','m','s','`',' ',
        '(','`','N','a','m','e','`',',','`','D','a','t','a','`',')',' ',
        'V','A','L','U','E','S',' ','(','?',',','?',')',0};
    static const WCHAR VAR_6[] = {
        'U','P','D','A','T','E',' ','`','_','S','t','r','e','a','m','s','`',' ',
        'S','E','T',' ','`','D','a','t','a','`',' ','=',' ','?',' ',
        'W','H','E','R','E',' ','`','N','a','m','e','`',' ','=',' ','?',0};
    MSIQUERY *VAR_7;
    MSIRECORD *VAR_8;
    UINT VAR_9;

    FUNC_5("%p %s %p\n", VAR_2, FUNC_6(VAR_3), VAR_4);

    if (!(VAR_8 = FUNC_0( 2 )))
        return VAR_0;

    VAR_9 = FUNC_3( VAR_8, 1, VAR_3 );
    if (VAR_9 != VAR_1)
       goto done;

    VAR_9 = FUNC_2( VAR_8, 2, VAR_4 );
    if (VAR_9 != VAR_1)
       goto done;

    VAR_9 = FUNC_1( VAR_2, VAR_5, &VAR_7 );
    if (VAR_9 != VAR_1)
       goto done;

    VAR_9 = FUNC_4( VAR_7, VAR_8 );
    FUNC_7( &VAR_7->hdr );
    if (VAR_9 == VAR_1)
        goto done;

    FUNC_7( &VAR_8->hdr );
    if (!(VAR_8 = FUNC_0( 2 )))
        return VAR_0;

    VAR_9 = FUNC_2( VAR_8, 1, VAR_4 );
    if (VAR_9 != VAR_1)
       goto done;

    VAR_9 = FUNC_3( VAR_8, 2, VAR_3 );
    if (VAR_9 != VAR_1)
       goto done;

    VAR_9 = FUNC_1( VAR_2, VAR_6, &VAR_7 );
    if (VAR_9 != VAR_1)
        goto done;

    VAR_9 = FUNC_4( VAR_7, VAR_8 );
    FUNC_7( &VAR_7->hdr );

done:
    FUNC_7( &VAR_8->hdr );
    return VAR_9;
}
