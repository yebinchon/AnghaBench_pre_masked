
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_14__ {int persistent; int Directory; } ;
struct TYPE_13__ {int db; } ;
struct TYPE_12__ {int hdr; } ;
struct TYPE_11__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef TYPE_3__ MSIPACKAGE ;
typedef TYPE_4__ MSIFOLDER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__**,char const*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static UINT FUNC_6( MSIPACKAGE *VAR_3, MSIFOLDER *VAR_4 )
{
    static const WCHAR VAR_5[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','C','r','e','a','t','e','F','o','l','d','e','r','`',' ','W','H','E','R','E',' ',
        '`','D','i','r','e','c','t','o','r','y','_','`',' ','=','\'','%','s','\'',0};
    MSIQUERY *VAR_6;

    VAR_4->persistent = VAR_1;
    if (!FUNC_0( VAR_3->db, &VAR_6, VAR_5, VAR_4->Directory ))
    {
        if (!FUNC_1( VAR_6, ((void*)0) ))
        {
            MSIRECORD *VAR_7;
            if (!FUNC_2( VAR_6, &VAR_7 ))
            {
                FUNC_3("directory %s is persistent\n", FUNC_4(VAR_4->Directory));
                VAR_4->persistent = VAR_2;
                FUNC_5( &VAR_7->hdr );
            }
        }
        FUNC_5( &VAR_6->hdr );
    }
    return VAR_0;
}
