
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int name; TYPE_3__* package; } ;
typedef TYPE_1__ msi_dialog ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int db; } ;
struct TYPE_10__ {int hdr; } ;
typedef TYPE_2__ MSIQUERY ;
typedef TYPE_3__ MSIPACKAGE ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__**,char const*,int ) ;
 int FUNC_3 (char*,TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static UINT FUNC_6( msi_dialog *VAR_3 )
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        'C','o','n','t','r','o','l',' ','W','H','E','R','E',' ',
        '`','D','i','a','l','o','g','_','`',' ','=',' ','\'','%','s','\'',0};
    UINT VAR_5;
    MSIQUERY *VAR_6;
    MSIPACKAGE *VAR_7 = VAR_3->package;

    FUNC_3("%p %s\n", VAR_3, FUNC_4(VAR_3->name) );


    VAR_5 = FUNC_2( VAR_7->db, &VAR_6, VAR_4, VAR_3->name );
    if( VAR_5 != VAR_1 )
    {
        FUNC_0("query failed for dialog %s\n", FUNC_4(VAR_3->name));
        return VAR_0;
    }

    VAR_5 = FUNC_1( VAR_6, 0, VAR_2, VAR_3 );
    FUNC_5( &VAR_6->hdr );
    return VAR_5;
}
