
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {int hdr; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,TYPE_2__**) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static WCHAR *FUNC_7( MSIDATABASE *VAR_1 )
{
    static const WCHAR VAR_2[] = {
        'S','E','L','E','C','T',' ','`','V','a','l','u','e','`',' ',
        'F','R','O','M',' ','`','P','r','o','p','e','r','t','y','`',' ',
        'W','H','E','R','E',' ','`','P','r','o','p','e','r','t','y','`','=',
        '\'','P','r','o','d','u','c','t','C','o','d','e','\'',0};
    MSIQUERY *VAR_3;
    MSIRECORD *VAR_4;
    WCHAR *VAR_5 = ((void*)0);

    if (FUNC_0( VAR_1, VAR_2, &VAR_3 ) != VAR_0)
    {
        return ((void*)0);
    }
    if (FUNC_3( VAR_3, 0 ) != VAR_0)
    {
        FUNC_2( VAR_3 );
        FUNC_5( &VAR_3->hdr );
        return ((void*)0);
    }
    if (FUNC_4( VAR_3, &VAR_4 ) == VAR_0)
    {
        VAR_5 = FUNC_6( FUNC_1( VAR_4, 1 ) );
        FUNC_5( &VAR_4->hdr );
    }
    FUNC_2( VAR_3 );
    FUNC_5( &VAR_3->hdr );
    return VAR_5;
}
