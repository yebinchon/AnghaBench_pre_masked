
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_9__ {int hdr; } ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const*,TYPE_2__**) ;
 char* FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static DWORD FUNC_7( MSIDATABASE *VAR_1 )
{
    static const WCHAR VAR_2[] = {
        'S','E','L','E','C','T',' ','`','V','a','l','u','e','`',' ','F','R','O','M',' ',
        '`','M','s','i','P','a','t','c','h','M','e','t','a','d','a','t','a','`',' ',
        'W','H','E','R','E',' ','`','C','o','m','p','a','n','y','`',' ','I','S',' ',
        'N','U','L','L',' ','A','N','D',' ','`','P','r','o','p','e','r','t','y','`','=',
        '\'','A','l','l','o','w','R','e','m','o','v','a','l','\'',0};
    MSIQUERY *VAR_3;
    MSIRECORD *VAR_4;
    DWORD VAR_5 = 0;

    if (FUNC_1( VAR_1, VAR_2, &VAR_3 ) != VAR_0) return 0;
    if (FUNC_3( VAR_3, 0 ) != VAR_0)
    {
        FUNC_6( &VAR_3->hdr );
        return 0;
    }

    if (FUNC_4( VAR_3, &VAR_4 ) == VAR_0)
    {
        const WCHAR *VAR_6 = FUNC_2( VAR_4, 1 );
        VAR_5 = FUNC_5( VAR_6 );
        FUNC_6( &VAR_4->hdr );
    }

    FUNC_0( "check other criteria\n" );

    FUNC_6( &VAR_3->hdr );
    return VAR_5;
}
