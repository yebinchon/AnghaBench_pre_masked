
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_8__ {int db; } ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,char const*,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3( MSIPACKAGE *VAR_0 )
{
    static const WCHAR VAR_1 [] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','I','n','s','t','a','l','l','U','I','S','e','q','u','e','n','c','e','`',' ',
        'W','H','E','R','E',' ','`','S','e','q','u','e','n','c','e','`',' ','>',' ','0',0};
    MSIQUERY *VAR_2;
    DWORD VAR_3 = 0;

    if (!(FUNC_0( VAR_0->db, VAR_1, &VAR_2 )))
    {
        FUNC_1( VAR_2, &VAR_3, ((void*)0), VAR_0 );
        FUNC_2( &VAR_2->hdr );
    }
    return VAR_3 != 0;
}
