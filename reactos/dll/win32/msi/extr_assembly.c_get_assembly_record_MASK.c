
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int db; } ;
struct TYPE_7__ {int hdr; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__**,char const*,char const*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int **) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static MSIRECORD *FUNC_6( MSIPACKAGE *VAR_1, const WCHAR *VAR_2 )
{
    static const WCHAR VAR_3[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
         '`','M','s','i','A','s','s','e','m','b','l','y','`',' ',
         'W','H','E','R','E',' ','`','C','o','m','p','o','n','e','n','t','_','`',
         ' ','=',' ','\'','%','s','\'',0};
    MSIQUERY *VAR_4;
    MSIRECORD *VAR_5;
    UINT VAR_6;

    VAR_6 = FUNC_0( VAR_1->db, &VAR_4, VAR_3, VAR_2 );
    if (VAR_6 != VAR_0)
        return ((void*)0);

    VAR_6 = FUNC_2( VAR_4, ((void*)0) );
    if (VAR_6 != VAR_0)
    {
        FUNC_5( &VAR_4->hdr );
        return ((void*)0);
    }
    VAR_6 = FUNC_3( VAR_4, &VAR_5 );
    if (VAR_6 != VAR_0)
    {
        FUNC_5( &VAR_4->hdr );
        return ((void*)0);
    }
    if (!FUNC_1( VAR_5, 4 ))
        FUNC_4("component is a global assembly\n");

    FUNC_5( &VAR_4->hdr );
    return VAR_5;
}
