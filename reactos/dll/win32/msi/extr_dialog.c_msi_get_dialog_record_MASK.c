
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; TYPE_2__* package; } ;
typedef TYPE_1__ msi_dialog ;
typedef char WCHAR ;
struct TYPE_6__ {int db; } ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIPACKAGE ;


 int * FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static MSIRECORD *FUNC_4( msi_dialog *VAR_0 )
{
    static const WCHAR VAR_1[] = {
        'S','E','L','E','C','T',' ','*',' ',
        'F','R','O','M',' ','D','i','a','l','o','g',' ',
        'W','H','E','R','E',' ',
           '`','D','i','a','l','o','g','`',' ','=',' ','\'','%','s','\'',0};
    MSIPACKAGE *VAR_2 = VAR_0->package;
    MSIRECORD *VAR_3 = ((void*)0);

    FUNC_1("%p %s\n", VAR_0, FUNC_3(VAR_0->name) );

    VAR_3 = FUNC_0( VAR_2->db, VAR_1, VAR_0->name );
    if( !VAR_3 )
        FUNC_2("query failed for dialog %s\n", FUNC_3(VAR_0->name));

    return VAR_3;
}
