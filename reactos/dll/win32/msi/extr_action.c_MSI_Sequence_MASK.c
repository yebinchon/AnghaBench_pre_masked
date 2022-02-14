
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int db; } ;
struct TYPE_8__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**,char const*,int ) ;
 int FUNC_2 (char*,TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

UINT FUNC_5( MSIPACKAGE *VAR_2, LPCWSTR VAR_3 )
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','`','%','s','`',
         ' ','W','H','E','R','E',' ','`','S','e','q','u','e','n','c','e','`',' ',
         '>',' ','0',' ','O','R','D','E','R',' ','B','Y',' ',
         '`','S','e','q','u','e','n','c','e','`',0};
    MSIQUERY *VAR_5;
    UINT VAR_6;

    FUNC_2("%p %s\n", VAR_2, FUNC_3(VAR_3));

    VAR_6 = FUNC_1( VAR_2->db, &VAR_5, VAR_4, VAR_3 );
    if (VAR_6 == VAR_0)
    {
        VAR_6 = FUNC_0( VAR_5, ((void*)0), VAR_1, VAR_2 );
        FUNC_4(&VAR_5->hdr);
    }
    return VAR_6;
}
