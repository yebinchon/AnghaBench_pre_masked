
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_10__ {int disk_id; int Sequence; } ;
struct TYPE_9__ {int db; } ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSIFILEPATCH ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static UINT FUNC_4( MSIPACKAGE *VAR_2, MSIFILEPATCH *VAR_3 )
{
    static const WCHAR VAR_4[] =
        {'S','E','L','E','C','T',' ','`','D','i','s','k','I','d','`',' ', 'F','R','O','M',' ',
         '`','M','e','d','i','a','`',' ','W','H','E','R','E',' ',
         '`','L','a','s','t','S','e','q','u','e','n','c','e','`',' ','>','=',' ','%','u',0};
    MSIRECORD *VAR_5;

    if (!(VAR_5 = FUNC_0( VAR_2->db, VAR_4, VAR_3->Sequence )))
    {
        FUNC_2("query failed\n");
        return VAR_0;
    }

    VAR_3->disk_id = FUNC_1( VAR_5, 1 );
    FUNC_3( &VAR_5->hdr );
    return VAR_1;
}
