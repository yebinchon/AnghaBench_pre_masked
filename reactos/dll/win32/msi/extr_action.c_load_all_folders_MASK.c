
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int db; int folders; } ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static UINT FUNC_4( MSIPACKAGE *VAR_3 )
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','D','i','r','e','c','t','o','r','y','`',0};
    MSIQUERY *VAR_5;
    UINT VAR_6;

    if (!FUNC_2(&VAR_3->folders))
        return VAR_0;

    VAR_6 = FUNC_0( VAR_3->db, VAR_4, &VAR_5 );
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_1( VAR_5, ((void*)0), VAR_2, VAR_3 );
    if (VAR_6 != VAR_0)
    {
        FUNC_3( &VAR_5->hdr );
        return VAR_6;
    }
    VAR_6 = FUNC_1( VAR_5, ((void*)0), VAR_1, VAR_3 );
    FUNC_3( &VAR_5->hdr );
    return VAR_6;
}
