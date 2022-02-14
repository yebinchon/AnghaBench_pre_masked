
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_12__ {int db; } ;
struct TYPE_11__ {int hdr; } ;
struct TYPE_10__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef TYPE_3__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,TYPE_2__**) ;
 char* FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__**) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char const*,char*,int) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

__attribute__((used)) static UINT FUNC_8( MSIPACKAGE *VAR_2 )
{
    static const WCHAR VAR_3[] = {
        'S','E','L','E','C','T',' ','`','S','o','u','r','c','e','`',' ','F','R','O','M',' ',
        '`','M','e','d','i','a','`',' ','W','H','E','R','E',' ','`','S','o','u','r','c','e','`',' ',
        'I','S',' ','N','O','T',' ','N','U','L','L',0};
    MSIQUERY *VAR_4;
    MSIRECORD *VAR_5;
    const WCHAR *VAR_6;
    WCHAR *VAR_7;
    UINT VAR_8;

    VAR_8 = FUNC_0( VAR_2->db, VAR_3, &VAR_4 );
    if (VAR_8 != VAR_0)
        return VAR_8;

    VAR_8 = FUNC_2( VAR_4, 0 );
    if (VAR_8 != VAR_0)
        goto done;

    if (FUNC_3( VAR_4, &VAR_5 ) == VAR_0)
    {
        VAR_6 = FUNC_1( VAR_5, 1 );
        VAR_7 = FUNC_4( VAR_2->db, VAR_1 );
        FUNC_6( VAR_2->db, VAR_6, VAR_7, -1 );
        FUNC_5( VAR_7 );
        FUNC_7( &VAR_5->hdr );
    }

done:
    FUNC_7( &VAR_4->hdr );
    return VAR_8;
}
