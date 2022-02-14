
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
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static UINT FUNC_3( MSIPACKAGE *VAR_3 )
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','R','e','g','i','s','t','r','y','`',0};
    static const WCHAR VAR_5[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','R','e','m','o','v','e','R','e','g','i','s','t','r','y','`',0};
    MSIQUERY *VAR_6;
    UINT VAR_7;

    VAR_7 = FUNC_0( VAR_3->db, VAR_4, &VAR_6 );
    if (VAR_7 == VAR_0)
    {
        VAR_7 = FUNC_1( VAR_6, ((void*)0), VAR_2, VAR_3 );
        FUNC_2( &VAR_6->hdr );
        if (VAR_7 != VAR_0)
            return VAR_7;
    }
    VAR_7 = FUNC_0( VAR_3->db, VAR_5, &VAR_6 );
    if (VAR_7 == VAR_0)
    {
        VAR_7 = FUNC_1( VAR_6, ((void*)0), VAR_1, VAR_3 );
        FUNC_2( &VAR_6->hdr );
        if (VAR_7 != VAR_0)
            return VAR_7;
    }
    return VAR_0;
}
